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