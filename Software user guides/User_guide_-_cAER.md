# User guide - cAER
> *For more information, visit [iniVation support](https://inivation.com/support/)*
---

- [cAER repository tex documentation (last modification 19/10/2017)](#cAER-repository-tex-documentation-last-modification-19102017)
- [cAER "The modules system" txt file documentation](#cAER-the-modules-system-txt-file-documentation)

# cAER repository tex documentation (last modification 19/10/2017)

This guide gives information about cAER software, a software framework for event processing.

## Table of contents

-   [Introduction](#introduction)
-   [Installation](#installation)
    -   [Automated Installation](#automated-installation)
        -   [Fedora Linux](#fedora-linux)
        -   [Gentoo Linux](#gentoo-linux)
        -   [Ubuntu Linux](#ubuntu-linux)
    -   [Manual Installation](#manual-installation)
-   [Architecture](#architecture)
    -   [Framework](#framework)
    -   [Threads](#threads)
    -   [Events](#events)
    -   [XML Configuration](#xml-configuration)
    -   [Mainloop](#mainloop)
        -   [Asynchronous inputs](#asynchronous-inputs)
    -   [Modules and Connectivity](#modules-and-connectivity)
-   [Usage](#usage)
    -   [caer-config.xml](#caer-configxml)
    -   [caer-bin](#caer-bin)
    -   [Modules](#modules)
        -   [DVS128](#dvs128)
        -   [eDVS](#edvs)
        -   [DAVIS](#davis)
        -   [Dynap-SE](#dynap-se)
        -   [Background Activity Filter](#background-activity-filter)
        -   [Visualizer](#visualizer)
        -   [Camera Calibration](#camera-calibration)
        -   [Frame Enhancer](#frame-enhancer)
        -   [Frame Statistics](#frame-statistics)
        -   [Statistics](#statistics)
        -   [Pose Estimation](#pose-estimation)
        -   [Median Tracker](#median-tracker)
        -   [Rotate Filter](#rotate-filter)
        -   [File](#file)
        -   [Unix socket client](#unix-socket-client)
        -   [UDP network client](#udp-network-client)
        -   [TCP network client](#tcp-network-client)
        -   [TCP network server](#tcp-network-server)
    -   [Command-Line Utilities](#command-line-utilities)
        -   [caerctl](#caerctl)
        -   [unixststat](#unixststat)
        -   [udpststat](#udpststat)
        -   [tcpststat](#tcpststat)
    -   [GUI Utilities](#gui-utilities)
        -   [caerctl-gui-javafx](#caerctl-gui-javafx)
-   [Development](#development)
    -   [Structure](#structure)
    -   [Input modules](#input-modules)
    -   [Processing modules](#processing-modules)
    -   [Output modules](#output-modules)
    -   [SSHS](#sshs)
    -   [Remote configuration](#remote-configuration)
    -   [Logging](#logging)
    -   [Modules](#modules-1)
        -   [Modules API](#modules-api)
        -   [Accessing Event Data](#accessing-event-data)
    -   [Writing a new module](#writing-a-new-module)
        -   [C++ support](#c-support)
    -   [Porting old modules](#porting-old-modules)
    -   [Visualizer: Renderer and Event
        Handlers](#visualizer-renderer-and-event-handlers)

# Introduction

cAER is a software framework for event processing, targeted mainly
towards embedded systems, but also with visualization capabilities that
make it suitable for desktop and research use. Low-power embedded
systems are a natural match for low-power neuromorphic sensors and
processors. In contrast to the
[jAER](https://github.com/SensorsINI/jaer) framework, cAER is written in
C/C++, and does not require a GUI to function; it can also be completely
controlled via network.

It strives to satisfy the following requirements:

  - able to run on a wide range of low-power, embedded systems

  - small memory footprint, conscious usage of CPU cores

  - able to run on the Linux, MacOS X and Windows operating systems

  - able to communicate with external USB and serial devices

  - no specific focus on visualization, no dependency on any graphical
    user interface

  - network-enabled to communicate easily with other systems and
    frameworks (like jAER) or forward data to other processing nodes

  - able to run without supervision for long amounts of time

  - remotely configurable, without the need for a graphical user
    interfaces

  - reusable code: framework structure and modularity, documentation

# Architecture

A work pattern of getting events from an input, then processing and
filtering them, and finally moving them to an output, and repeating
those steps again and again (usually in a loop), is common to most
event-based processing software, and also forms the basis for the
architecture of cAER.

## Framework

The idea behind a framework is to provide easy access and abstractions
to common tasks, in this case tasks such as configuration management,
logging, process/thread set-up, device management and so on. It should
offer the user a simple, well-defined way to put together the parts of
the framework he needs for his application, and be easy to deploy across
various systems. It should further be easily possible to extend the
functionality of the framework with self-written, application-specific
code.

To this end it was decided to implement cAER as a collection of basic
framework functionality and loadable modules, which could easily be
plugged and extended by the user.

A broad overview of the resulting architecture is shown in the figure below. The various
components will be explained in detail in the following sections.

<p align="center"><img src="media/caer_architecture.png" width="800" /></p>

## Threads

The main program thread is responsible for setting up configuration and
logging, and then start handling data in a continuous loop we call the
*mainloop*. The *mainloop* runs all the modules that a user specifies,
which may in turn start their own threads as needed (for example to
handle asynchronous inputs or outputs). A further thread is started for
the run-time configuration system, to allow users to modify system
settings at any time, while other parts of the program are running. The
total number of always running system threads is thus two (main thread +
configuration thread).

## Events

Data is exchanged between modules in the form of events. The event
format was designed to fulfil the following requirements:

  - low memory consumption

  - fast data access

  - extensibility to future devices

  - low iteration overhead

  - low deletion overhead

Low memory consumption is achieved by correctly sizing each data type
and compressing multiple pieces of data into integers; when the
particular data type would not use all 32 bits available to it, but can
make do with just a fraction of those. For example, with a quantity with
range \[0,15\] just four bits are enough, and other data can be squeezed
into the remaining 28 bits. A 32 bit integer is taken as the base size,
since accessing it is efficient on all supported architectures,
regardless of the use of 32 or 64 bit processors.

Fast data access is still guaranteed, since, at most, accessing data
stored with the above method would require an integer shift and AND
operation, while storing data an integer shift and OR operation.
Sometimes just an AND or OR operation, when the shift amount is zero.
Such bit-wise operations are extremely fast on modern CPU architectures,
usually taking just 1 CPU cycle. Intel for example reports latency
values of 1 cycle for AND/OR instructions and 1 cycle for shifts
(SHL/SHR instructions) for modern Haswell processors and for its
Silvermont architecture (successor to Atom for low-power scenarios) in
[its manuals](https://software.intel.com/en-us/articles/intel-sdm).

To enhance iteration performance, and generally reduce the load that
moving events from one processing stage to the other incurs; events are
always grouped together into packets, and kept adjacent in memory. Going
from event to event just requires a pointer increment, and moving a
packet between processing stages just involves passing around a pointer
to it.

A further benefit of grouping events into packets is that a packet
header can be defined and used to store useful information about the
events it contains, such as their type or source, in a non-redundant
way, instead of putting that information with each event separately,
further saving memory.

Finally, concerning the low deletion overhead, instead of implementing
the removal of events by copying only the valid ones to a new packet, or
shifting them around inside the current packet, a 1-bit boolean flag has
been made a mandatory part of each event, indicating if the event is to
be considered valid (flag is 1) or invalid (flag is 0). A side-benefit
of this approach is that it is still possible for later processing
stages to examine invalidated events, which can be useful for statistics
for example.

The full definition of each supported event type, as well as how those
events are treated in the context of files and network streams, can be
found in the [AEDAT File
Format](https://inilabs.com/support/software/fileformat/#h.oqxw4mby5yg2)
document. cAER internally uses the event formats defined in libcaer,
which in turn follows the *AEDAT 3.1* specification.

## XML Configuration

An external XML file holds all the configuration that gets applied to
cAER at start-up and loaded into memory. At shut-down, the file is
updated with any changes made to the configuration. While the , the
Super Simple Hierarchical Storage (SSHS, [5](#subsec:sshs)) library was
written and then employed. A configuration file from which to load the
initial settings is also part of this system.

On the first execution of the *caer* program, all configuration will be
initialized to its default values.

Manipulating configuration values is possible either by using the
*caerctl* utility (see section [4.1](#subsec:caerctl)) at run-time, or
by editing the XML configuration file that is written each time the
program shuts down. The following listing shows an excerpt from the
configuration file in question:

``` html
 1:<sshs version="1.0">
 2:  <node name="" path="/">
 3:    <node name="1" path="/1/">
 4:      <node name="2-FileOutput" path="/1/2-FileOutput/">
 5:        <attr key="directory" type="string">/home/caer</attr>
 6:        <attr key="prefix" type="string">caer_out</attr>
 7:        <attr key="validEventsOnly" type="bool">true</attr>
 8:      </node>
 9:      ...
10:    </node>
11:    ...
12:  </node>
13:</sshs>
```

The first line specifies that this file conforms to the SSHS format
specification (from section [5](#subsec:sshs)), version 1.0. After that,
the tree-like hierarchical structure is clearly visible, with the root
node (line 2) holding all Mainloops (line 3), which in turn hold all the
modules (line 4). The *\<attr\>* tags contain the configuration values
themselves, the *key* attribute identifies and names the value, the
*type* attribute specifies its SSHS type, and the tag’s value itself
represents the effective configuration value.

In the above example, the *validEventsOnly* configuration value is of
boolean type, and can assume values of *true* or *false*.

To allow for consistent configuration updates inside the modules,
changes to the configuration are only applied once per Mainloop cycle,
by the module state machine, right before the actual data processing
code is executed (see *moduleConfig* in section [8](#sec:modules)).
Since changes to the configuration can happen at any time, due to the
configuration server thread (see section
[6](#subsec:remote_configuration)), a mechanism had to be developed to
notify the running modules that a configuration refresh was desired on
their next execution. A single, atomic variable in each module is used
for the purpose of asynchronously signaling configuration changes,
allowing the module to quickly determine on each run if it needs to
update its configuration and react to eventual changes. This provides an
efficient inter-thread communication solution, instead of relying on
expensive locks to synchronize some additional state variable. SSHS
listeners are added to each module’s configuration nodes, to set the
above atomic variable appropriately when changes occur.

## Mainloop

As mentioned at the start of chapter [](#chap:architecture), the core of
any kind of data processing architecture is represented by the following
three steps:

  - get data from (one or more) inputs (*sources*)

  - process / filter data

  - send data to (one or more) outputs (*drains*)

Such processing usually happens in a loop, getting new data as soon as
being finished with the old one or at fixed intervals in time.

In event-driven data processing, and especially in low-power scenarios,
the expectation is that those three steps only happen when the input
actually has generated meaningful data that can be processed, not
before, and possibly also not after, to still guarantee acceptable
reaction times to new events. The continuous repetition of the tree
above steps still happens, but the start condition slightly changes to
hinge on the availability of new events to process.

A simple and efficient implementation is still represented by a loop,
which shall run the processing functions only when there is more data,
or else wait for a small time constant, before checking the availability
of data again.

In cAER this process is simply called the Mainloop, short for
Main-Data-Processing-Loop. Mainloops are defined by the user and connect
inputs to processing modules and finally to outputs. They represent the
actual operations the user wants to repeatedly see happen on the data.
The thread-function that runs a Mainloop looks like this (in
pseudo-code):

```c
    while (run_system) {
        if (data_is_available) {
            execute_mainloop_definition();
        }
        else {
            sleep(1 ms);
        }
    }
```

### Asynchronous inputs

To be able to run the Mainloop only when data is available, something
else has to be running and making that data available. The input modules
have a secondary part, which is executing inside a separate thread, and
is responsible for getting the bare data from connected devices, network
streams or files, and signaling its availability to the Mainloop (the
data\_is\_available variable in the pseudo-code above).

The input threads themselves employ techniques, such as blocking I/O, or
asynchronous USB transfers, that also limit activity to only when data
is available at the device or network level, to avoid unnecessary
overhead. At this point, minimal processing is performed to interpret
the data and format it according to the event packet definitions from
section [3](#sec:events), and then the data is made available to the
Mainloop. The actual exchange of data between the two threads happens by
means of a special lock-free variant of a ring-buffer, a
high-performance, array-based data structure.

Memory allocated by the input threads is later automatically reclaimed
after the current cycle of the Mainloop has completed, completely
removing this particular concern from the user.

## Modules and Connectivity

# Usage

## caer-config.xml

## caer-bin

It also tries to interpret any given command-line parameters and uses
their values to set and override previous configuration settings. The
command-line override takes the following format and can be repeated
multiple times to override multiple options:  
*-o \<node string\> \<key string\> \<key type string\> \<value string\>*

The configuration file-name parameter can be either an absolute path to
a file or a single file-name, which is treated as residing inside the
current working directory of the program. It is possible to disable the
loading and saving of the settings to the configuration file by passing
NULL as a value instead of a
    file-name.
