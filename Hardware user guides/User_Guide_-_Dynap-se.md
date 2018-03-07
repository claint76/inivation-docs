---
title: '[]{#_qdoi277fh3h7 .anchor}User Guide - DYNAP-SE'
---

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [[support
forum]{.underline}](https://groups.google.com/d/forum/dynapse-users/).
If your question involves confidential information, however, please use
[support@ai-ctx.com]{.underline}. First you could try our*
*[[troubleshooting
guide]{.underline}](https://www.inilabs.com/support/faq/).*

[[Introduction]{.underline}](#introduction)

[[1. Getting started]{.underline}](#getting-started)

> [[1.1 Install USB driver]{.underline}](#install-usb-driver)
>
> [[Linux]{.underline}](#linux)
>
> [[Mac Os X]{.underline}](#mac-os-x)
>
> [[Windows (win7, win 8)]{.underline}](#windows-win7-win-8)
>
> [[Serial Number]{.underline}](#serial-number)

[[2. Dynap-se system]{.underline}](#_jb3am9z32btj)

> [[2.1 Board overview]{.underline}](#board-overview)
>
> [[2.2 Analog monitors]{.underline}](#analog-monitors)
>
> [[2.3 AER/GPIO Connector]{.underline}](#aergpio-connector)
>
> [[2.4 PAER/Gpio Cable]{.underline}](#paergpio-cable)
>
> [[2.5 AER input/output interfaces and routing
> scheme]{.underline}](#aer-inputoutput-interfaces-and-routing-scheme)
>
> [[Low-level Routing Example]{.underline}](#low-level-routing-example)
>
> [[2.6 Neural Network Manager. The NetParser cAER
> module.]{.underline}](#neural-network-manager.-the-netparser-caer-module.)
>
> [[2.7 Multi-board AER
> connectors]{.underline}](#multi-board-aer-connectors)
>
> [[2.8 Multi-board configuration
> bus]{.underline}](#multi-board-configuration-bus)

[[3. Upload logic and or firmware via USB using
Flashy]{.underline}](#upload-logic-and-or-firmware-via-usb-using-flashy)

[[4. Running cAER]{.underline}](#running-caer)

> [[4.1 Compile cAER for
> Dynap-se]{.underline}](#compile-caer-for-dynap-se)
>
> [[4.2 Storing cAER recordings]{.underline}](#storing-caer-recordings)
>
> [[4.3 Playing back cAER dynap-se
> recordings]{.underline}](#playing-back-caer-dynap-se-recordings)
>
> [[4.4 Parsing cAER dynap-se
> recordings]{.underline}](#parsing-caer-dynap-se-recordings)
>
> [[4.5 Visualizer]{.underline}](#visualizer)
>
> [[Keyboard and mouse
> shortcuts]{.underline}](#keyboard-and-mouse-shortcuts)
>
> [[4.6 Caer-ctl utility for controlling
> parameters]{.underline}](#caer-ctl-utility-for-controlling-parameters)
>
> [[4.7 Control biases:]{.underline}](#control-biases)
>
> [[4.8 Control mean rate activity:
> MeanRateFilter]{.underline}](#control-mean-rate-activity-meanratefilter)
>
> [[4.9 Control monitor output neurons:
> MonitorNeuFilter]{.underline}](#control-monitor-output-neurons-monitorneufilter)
>
> [[4.10 Stimulating neurons with Spike Generator (via
> USB)]{.underline}](#stimulating-neurons-with-spike-generator-via-usb)
>
> [[4.11 Stimulating neurons with the
> FPGA-SpikeGen]{.underline}](#stimulating-neurons-with-the-fpga-spikegen)
>
> [[4.12 Stimulating neurons with the
> FPGA-PoissonSpikeGen]{.underline}](#stimulating-neurons-with-the-fpga-poissonspikegen)

[[5. Biasing user guide]{.underline}](#biasing-user-guide)

> [[5.1 Starting the
> caerctl-gui]{.underline}](#starting-the-caerctl-gui)
>
> [[5.2 Neuron' soma parameters]{.underline}](#neuron-soma-parameters)
>
> [[5.2.1 Injected Current]{.underline}](#injected-current)
>
> [[5.2.2 Refractory Period]{.underline}](#refractory-period)
>
> [[5.2.3 Tau]{.underline}](#tau)
>
> [[5.2.4 Threshold]{.underline}](#threshold)
>
> [[5.3 Recording Spiking Data]{.underline}](#recording-spiking-data)
>
> [[5.4. Neuron's behaviors and parameters
> tuning]{.underline}](#neurons-behaviors-and-parameters-tuning)
>
> [[5.5 Main Neuron's Parameters]{.underline}](#main-neurons-parameters)
>
> [[5.5.1 Injection Current]{.underline}](#injection-current)
>
> [[5.5.2 Neuron's threshold]{.underline}](#neurons-threshold)
>
> [[5.5.3 Neuron's leak (tau)]{.underline}](#neurons-leak-tau)
>
> [[5.5.4 Neuron's refractory
> period]{.underline}](#neurons-refractory-period)
>
> [[5.6 Synaptic efficacy]{.underline}](#synaptic-efficacy)
>
> [[5.7 Examples of different synaptic
> efficacies]{.underline}](#examples-of-different-synaptic-efficacies)
>
> [[5.7.1 One synapse]{.underline}](#one-synapse)
>
> [[5.7.2 Using 32 CAMs]{.underline}](#using-32-cams)
>
> [[5.7.3 Tuning different synaptic efficacies - Fast
> Excitatory]{.underline}](#tuning-different-synaptic-efficacies---fast-excitatory)
>
> [[5.7.4 Tuning different synaptic efficacies - Slow
> Excitatory]{.underline}](#tuning-different-synaptic-efficacies---slow-excitatory)
>
> [[5.7.5 Tuning different synaptic efficacies - Fast
> Inhibitory]{.underline}](#tuning-different-synaptic-efficacies---fast-inhibitory)

[[6. Connecting a Davis240B/C Dynamic Vision Sensor to the Dynap-se
board via the
GPIO/AER]{.underline}](#connecting-a-davis240bc-dynamic-vision-sensor-to-the-dynap-se-board-via-the-gpioaer)

> [[6.1 Control Davis240B/C to Dynap-se mapping: SynapseReconfig
> Filter]{.underline}](#control-davis240bc-to-dynap-se-mapping-synapsereconfig-filter)
>
> [[Using a global kernel
> file]{.underline}](#using-a-global-kernel-file)
>
> [[Using SRAM kernels]{.underline}](#using-sram-kernels)

[[7. Troubleshooting]{.underline}](#troubleshooting)

> [[7.1 Failed to send chip config, USB transfer failed on
> verification]{.underline}](#failed-to-send-chip-config-usb-transfer-failed-on-verification)
>
> [[7.2 CRITICAL: dynapseOpen: Failed to open Dynap-se
> device]{.underline}](#critical-dynapseopen-failed-to-open-dynap-se-device)
>
> [[7.3 Wrong configuration at
> startup]{.underline}](#wrong-configuration-at-startup)

This user guide covers the Dynap-se neuromorphic processor:

![](media/image79.jpg){width="6.267716535433071in" height="3.375in"}

**Figure 0.1** Dynap-se Asynchronous Neuromorphic Processor (VERSION
DYNAP-SE-1)

![](media/image113.jpg){width="6.267716535433071in"
height="1.4861111111111112in"}

**Figure 0.2** Analog Interfaces: sixteen analog monitor outputs. From
these outputs it is possible to simultaneously monitor sixteen analog
neurons (their membrane potential). All neurons in the board (4096) can
be monitored.

![](media/image92.jpg){width="6.267716535433071in" height="1.4444444444444444in"}
=================================================================================

**Figure 0.3** Digital interfaces: USB High Speed Interface (used for
power and data), power and service LEDs, 40 PIN AER/GPIO connector. Any
Dynamic Vision Sensor can natively connect to it. The mapping between
AER devices and Neuromorphic Processors can be stored into
[[SRAM]{.underline}](http://www.issi.com/WW/pdf/61WV102416ALL.pdf). An
FPGA
([[XC6SLX25-2CSG324C]{.underline}](https://www.xilinx.com/support/documentation/data_sheets/ds160.pdf))
can be used to route spikes and or for implementing algorithm and ad-hoc
solutions.

Introduction
============

The Dynap-se prototype has a USB2.0 interface, a programmable parallel
Address Event Interface (GPIO input/output), and 16 analog SMA outputs
used to monitor neuron's membrane potential. The Dynap-se neuromorphic
processor is a beta prototype in active development. To ensure the best
results out of your device, obtain the latest version of the libcaer and
caer software and preferably use an integrated developer environment
(IDE) (e.g. eclipse/netbeans) to run the latest code base.

For specifications see the [[specifications
page]{.underline}](http://inilabs.com/products/dynamic-and-active-pixel-vision-sensor/davis-specifications/).

The Dynap-se can be used out of the box with our open-source C/C++ based
software libcaer and cAER. See below for cAER examples and
configurations.

1. Getting started
==================

1.  Unpack your Dynap-se. You should have a Dynap-se board inside an
    > aluminum case and a usb-micro 2.0 cable.

2.  Install libcaer, following the instructions in the [[user
    > guide]{.underline}](http://inilabs.com/support/software/libcaer/).

3.  Install drivers - see the install USB section, [[just
    > below]{.underline}](#install-usb-driver).

4.  Install cAER, following the instruction in the [[user
    > guide]{.underline}](https://github.com/inilabs/caer#caer).

5.  Run cAER and make recordings

6.  Write cAER filters and experiments

**1.1 Install USB driver**
--------------------------

Begin by plugging in the Dynap-se processor into your computer using the
USB2.0 micro cable. USB2.0 is used for both power and data, therefore
the 5V DC power input is not needed in normal operations.

### **Linux **

Access to Dynap-se devices under Linux is provided by the standard
kernel USB drivers and the libusb library. The library is part of most
of the linux distributions and it usually requires no further
installation. If you wish to install if from source, please download it
from from
[[here]{.underline}](https://sourceforge.net/projects/libusb/files/).

Your user must have access to the USB device. This can be achieved by
creating, as root, an udev rule file such as:

/etc/udev/rules.d/65-inilabs.rules

You can find ready-to-use udev rules files in our [[Git
repository]{.underline}](https://github.com/inilabs/devices/tree/master/drivers/linux/udev-rules).
The content of 65-inilabs.rules is similar to the following:

\# All DVS/DAVIS/Dynap-se systems

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", MODE=\"0666\"

If you're using a distribution that supports SELinux tags (i.e. Fedora
since Fedora Core 2; Debian as of the etch release; Ubuntu as of 8.04
Hardy Heron; openSUSE contains SELinux \"basic enablement\" as of
version 11.1; SUSE Linux Enterprise 11 features SELinux as a
\"technology preview\"), then please use the udev rules files in the
selinux/ sub-folder. These are:

\# All DVS/DAVIS/Dynap-se systems

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", TAG+=\"uaccess\"

To reload the udev system without rebooting type:

\$ sudo udevadm control \--reload-rules

or, for newer udev versions:

\$ sudo udevadm control \--reload

Sometimes, it may also help to run:

\$ sudo udevadm control \--trigger

Or otherwise reboot.

Now unplug and replug the Dynap-se into your computer by disconnecting
and reconnecting the USB cable. You're done!

To make sure you have successfully installed the driver dmesg should
show similar output:

\$ dmesg

\[163338.841961\] usb 3-10.2.4.1: new high-speed USB device number 20
using xhci\_hcd

\[163338.930364\] usb 3-10.2.4.1: New USB device found, idVendor=152a,
idProduct=841d

\[163338.930368\] usb 3-10.2.4.1: New USB device strings: Mfr=1,
Product=2, SerialNumber=3

\[163338.930371\] usb 3-10.2.4.1: Product: Dynap-se

\[163338.930373\] usb 3-10.2.4.1: Manufacturer: iniLabs

\[163338.930375\] usb 3-10.2.4.1: SerialNumber: 00000XXX

### **Mac Os X**

Access to Dynap-se devices under Mac OS X is provided by the standard
kernel USB drivers and the libusb library. Users should automatically be
able to access USB devices.

However, in case it is not installed in your system you could use
[[macport]{.underline}](http://www.macports.org) and install libusb.

You could use the command:

\$ sudo port install libusb

Or you could use [[brew]{.underline}](http://brew.sh/) and install the
following package

\$ brew install libusb-compat

At successful installation, you should see something like:

\$ system\_profiler SPUSBDataType

USB:

USB 3.0 Bus:

Host Controller Driver: AppleUSBXHCIWPT

PCI Device ID: 0x9cb1

PCI Revision ID: 0x0003

PCI Vendor ID: 0x8086

Dynap-se:

Product ID: 0x841d

Vendor ID: 0x152a

Version: 0.01

Serial Number: 00000XXX

Speed: Up to 480 Mb/sec

Manufacturer: iniLabs

Location ID: 0x14200000 / 4

Current Available (mA): 500

Current Required (mA): 400

Extra Operating Current (mA): 0

### **Windows (win7, win 8)**

Installation should proceed automatically and after several seconds you
should see a message in the control panel say "Device driver installed
successfully".

If this doesn't work you will need to use the "zadig" tool to install
the correct driver. In this case, please follow the instructions for
zadig in the [[reflashing
guide]{.underline}](http://www.inilabs.com/support/reflashing).

### **Serial Number**

For support, we may ask you to identify the device by serial number.

2. Dynap-se system
==================

In order to use the DYNAP-se system most effectively it is necessary to
understand the hierarchical organization of the analog neurons

on the individual DYNAP chips. Here is a quick overview of the most
important device characteristics.

Every chip contains 1024 spiking neurons organized into four cores of
256 neurons each.

Each neuron listens to input events in the form of output spikes
(events) emitted by other neurons, or injected into the system from the
outside as a stimulus.

Input events are consumed by one or more of the neuron\'s 64 synapses
which can be programmed to listen to output events from individual
neurons.

These synapses can be also be programmed to affect the neuron in 4
distinct ways, 2 of them excitatory and 2 of them inhibitory.

The actual weights are set using analog biases which are set on the
core-level and shared by every neuron in a core.

Output events emitted by neurons contain the address of the neuron that
emitted them and are always sent to between 0 and 4 cores in a single
chip.

When the output event reaches its target cores, it is broadcast to all
synapses in that core.

If the synapse has been programmed to listen to the address contained in
the event, it will be activated.

Output destinations are stored in the neuron\'s four SRAM cells.

Each cell holds the routing path to the destination chip, as well as
which of the 4 cores in that chip will receive the event.

Analog bias settings are applied on the core-level, meaning that for
example setting the synaptic weight bias of a core will affect all
neurons in that core.

The following sections explain these points in more detail.

2.1 Board overview
------------------

The board is a rectangular PCB of size 184mm (wide) x 200mm (length).
The board has cut outs to allow the routing of extension cables when
multiple PCBs are stacked up.

All the exposed pins and port have ESD protection circuits and EMI
filters.

![](media/image143.jpg){width="6.267716535433071in" height="5.472222222222222in"}
---------------------------------------------------------------------------------

**Figure 1.1.1**

1)  USB 2.0 High-Speed for power and data

2)  PAER Interface, native connection to DAVIS sensors and or to other
    > AER devices as silicon cochlea

3)  AER Expansion slots, for interconnecting multiple boards

4)  Analog Monitors, to monitor neurons in the board, they can be picked
    > by programming the monitor outputs at run time

2.2 Analog monitors
-------------------

The analog monitors enable to monitor all neurons in the board. One
neuron per core can be selected and its membrane potential is sent to
its respective SMA output port. The SMA connector drawings can be found
[[here]{.underline}](http://www.amphenolrf.com/downloads/dl/file/id/2775/product/2917/132289_customer_drawing.pdf);
(sma to BNC connector for easy monitoring can be purchased in
[[here]{.underline}](https://www.digikey.com/products/en/cable-assemblies/coaxial-cables-rf/456?k=cable+sma&k=&pkeyword=cable+sma&s=30871&FV=ffe001c8&mnonly=0&ColumnSort=0&page=1&quantity=0&ptm=0&fid=0&pageSize=25))
it is a standard SMA connector. The membrane potential is a signal in
the range \[0,1.8\] Volt.

If you use caer with its visualizer, you can simply click on the neuron
and its membrane potential will be available in its respective output
port.

![](media/image91.jpg){width="6.267716535433071in"
height="1.4861111111111112in"}

+-----------------------+-----------------------+-----------------------+
| ![](media/image120.jp | ![](media/image152.jp | ![](media/image84.jpg |
| g){width="1.927083333 | g){width="1.927083333 | ){width="1.9270833333 |
| 3333333in"            | 3333333in"            | 333333in"             |
| height="2.375in"}     | height="1.40277777777 | height="1.41666666666 |
|                       | 77777in"}Dynap-se     | 66667in"}neuron       |
|                       | U0 core 3             | number 66             |
|                       |                       |                       |
|                       |                       | \- active neuron -    |
+=======================+=======================+=======================+
| ![](media/image172.jp | ![](media/image147.jp | ![](media/image187.jp |
| g){width="1.818151793 | g){width="1.927083333 | g){width="1.927083333 |
| 5258094in"            | 3333333in"            | 3333333in"            |
| height="2.31770888013 | height="1.40277777777 | height="1.40277777777 |
| 99823in"}             | 77777in"}Dynap-se     | 77777in"}neuron       |
|                       | U0 core 3             | number 152            |
|                       |                       |                       |
|                       |                       | \- inactive neuron -  |
+-----------------------+-----------------------+-----------------------+

You can also use the command line, and set the property of the
*monitorneufilter*.

yourshell\$ ./utils/caerctl/caer-ctl

cAER @ 127.0.0.1:4040 \>\> put /1/6-MonitorNeu/ dynapse\_u0\_c3 int 66

2.3 AER/GPIO Connector
----------------------

The GPIO connector can be used to interface a Dynamic Vision Sensor with
the DYNAP-SE processors. The pinout of the connector for native
communication with
[[DAVIS240C]{.underline}](http://drive.google.com/open?id=13ge3ihykzzViDrwhMN-uvJgHKmOABhJmwyzYSBs2kJI)
is the following:

  39   37   35   33   31   29   27   25   23   21   19   17   15   13   11   9    7   5   3   1
  ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- --- --- --- ---
  40   38   36   34   32   30   28   26   24   22   20   18   16   14   12   10   8   6   4   2

  **GPIO PIN **   **Function**
  --------------- --------------
  40              DAVIS ACK
  39              DAVIS REQ
  37              GND
  35              Address 0
  33              Address 2
  31              Address 4
  29              Address 9
  27              Address 6
  34              Address 1
  32              Address 3
  30              Address 5
  28              Address 7
  26              Address 8

Logic versions \>= 4 (available
[[here]{.underline}](https://github.com/inilabs/devices/tree/master/logic/SystemLogic2/bin/Spartan6_Dynapse))
implements a native connection by using an fpga base mapper that
exploits the on board SRAM to route spikes to the Dynap-se device. See
also the section on how to connect a Davis to a Dynap-se board,
[[here]{.underline}](https://inilabs.com/support/hardware/user-guide-dynap-se/#h.vbnwiunficwt).
There is a software module that let you configure the kernels used to
map the DAVIS240C to a selected Dynap-se chip. To update the logic on
the Dynap-se device see section [[Upload logic and or firmware via USB
using
Flashy]{.underline}](#upload-logic-and-or-firmware-via-usb-using-flashy).

2.4 PAER/Gpio Cable
-------------------

The Dynap-se board comes with a Parallel Address Event Representation
and or General Porpoise Input Output connector.

The SAMTEC FFSD-20-D-X-01-N can connect the PAER/GPIO connector with
another device, as for example Dynamic Vision Sensors.

![](media/image89.png){width="5.84375in" height="1.8958333333333333in"}

**Figure 2.4.1**

In the SAMTEC product codes, X is the length of the cable in inches.

**BOARD CONN / FPGA PIN**

  1    E13
  ---- -----
  2    GND
  3    A16
  4    A15
  5    D14
  6    B16
  7    C17
  8    C15
  9    D17
  10   C18
  11   F13
  12   D18
  13   E16
  14   F14
  15   E18
  16   F15
  17   P16
  18   F17
  19   G16
  20   F16

  21   G14
  ---- -----
  22   F18
  23   G18
  24   G13
  25   H18
  26   H17
  27   K12
  28   J18
  29   K17
  30   K18
  31   L17
  32   L18
  33   N18
  34   M18
  35   P18
  36   N17
  37   GND
  38   P15
  39   T17
  40   T18

This pinout is compatible with DAVIS240C sensors, and is supported with
software/firmware for connecting a DAVIS240C sensor. The reserved PINs
for the DAVIS240C have been highlighted in the table above. The
remaining GPIO pins are currently unused.

2.5 AER input/output interfaces and routing scheme
--------------------------------------------------

The Dynap-se devices are event-based devices. Every device can be
programmed to route spikes to other neurons in the same core, in a
different core (onto the same device), or to a different device. This is
achieved thanks to an asynchronous 3-level routing scheme.

Every event can be sent to at most 4 destination addresses. These
destinations addresses are stored in SRAM cells of the presynaptic
neurons (every neuron has 4 SRAM cells). When the content of all four
SRAM cells is 0 for a particular neuron then the spikes, from that
neuron, are not routed anywhere.

The SRAM addresses are composed of three parts (see figure 2.4.1 for
details):

1.  Bits \<30:33\> are used to select the chip that will be programmed

2.  Bits \<0:16\> are used to select the source neuron and which sram
    > cell to program

3.  Bits \<18:19\> represent the content of the SRAM and define the
    > target destination address towards which the spike will be
    > directed. The address is unique but one spike can be broadcasted
    > to at maximum 1024 neurons (all cores, all neurons of one chip)

Once the spike is routed toward the correct destination address, the
content of the CAM of the target neuron (Address \<7:0\>) is compared to
the address of the source neuron. If the two addresses match, then a
current pulse is sent to the destination neuron. The current pulse can
be excitatory or inhibitory (E/I) and its weight (F/S, fast/slow) can be
programmed by setting the digital bits values and the analog bias
generator settings (NPDPIX\_TAU\_X\_X, WEIGHT\_INH\_X\_N,
WEIGHT\_EXC\_X\_N). Note that every core can be programmed to have
different bias values.

The AER input interface supports the following operations:

-   Program CAM or SRAM content for all neurons (program SRAM/CAM)

-   Program the on-chip bias generator to fine tune 25 parameters per
    > core, 100 parameters per chip (BiasGen)

-   Send events to specific destinations (event)

-   Set time constants tau tau1/tua2 of neurons by core, set specific
    > neurons to tau2 (tau2 core set) and reset neurons to use tau1
    > (tau1 core set)

-   Monitor one neuron\'s membrane potential per core, 4 neurons in one
    > chips can be monitored at the same time. The monitoring of one
    > neuron requires first to reset the monitor for a specific core
    > (monitor core rst), then it is required to select which neuron to
    > monitor from the core (monitor set)

![](media/image115.png){width="6.348958880139983in"
height="1.5111734470691163in"}

**Figure 2.4.1:** There are 4 SRAM memory cells per neuron.

The SRAM row address is composed of neuronid \<7:14\>, and SRAM address
\<5:6\>. Destination\_Core\_ID is hot coded (0-\>1, 1-\>2, 2-\>4,
3-\>8).

The CAM row address is composed of \<0:3\> column, \<5:10\> cam address,
\<11:14\> row address.

  *\#define in libcaer, printed on the Board*   *Numerical values*
  --------------------------------------------- ---------------------------------------
  DYNAPSE\_CONFIG\_DYNAPSE\_U0                  output chipId = 0, input chipId =0
  DYNAPSE\_CONFIG\_DYNAPSE\_U1                  output chipId = 4, input chipId = 4
  DYNAPSE\_CONFIG\_DYNAPSE\_U2                  output chipId = 8, input chipId = 8
  DYNAPSE\_CONFIG\_DYNAPSE\_U3                  output chipId = 12, input chipId = 12

Chip: 0,1,2,3

Cores: 0,1,2,3

Neurons: 0,255

Cam: 64 per neurons

Sram: 4 per neurons (1 already used for visualization - number 0 -)

![](media/image54.png){width="2.6494838145231845in"
height="3.9194838145231845in"}

**Figure 2.4.2:** Dynap-se architecture.

### Low-level Routing Example

If you do not need to do low-level routing of events, s[[ection 2.6
Neural Network
Manager]{.underline}](#neural-network-manager.-the-netparser-caer-module.)
provides a higher-level interface for specifying connections between
neurons.

Assume it is required to route every neuron in chip U3 to a target
neuron in chip U1 and U2. To achieve this, we first program the SRAMs
(1,2) of all neurons in chip U3 with the target destination content.
After that, we program the CAMs of chip U1,U2 to accept incoming spikes
from source neuron addresses.

In cAER this can be achieved with the following snipped of code:

1)  Program SRAM, outgoing events from chip U3

// we first select which chip we want to program, this is done using
libcaer function caerDeviceConfigSet.

caerDeviceConfigSet(usb\_handle, DYNAPSE\_CONFIG\_CHIP,
DYNAPSE\_CONFIG\_CHIP\_ID, DYNAPSE\_CONFIG\_U3);

// we then program only sram 1,2 as sram number 0 is used to map
neuron's out for monitoring via the USB

for (int sramId = 1; sramId \< 3; sramId++) {

// we loop over all neurons

for (int neuronId = 0; neuronId \< DYNAPSE\_CONFIG\_NUMNEURONS\_CORE;
neuronId++) {

// we loop over all cores

for (int coreId = 0; coreId \< DYNAPSE\_CONFIG\_NUMCORES; ++coreId) {

uint8\_t dx = 0;

uint8\_t sx = 0;

uint8\_t dy = 0;

uint8\_t sy = 0;

uint32\_t bits;

uint16\_t destinationcoreId;

if (sramId == 2) {

// TO NORTH 1 HOP

dx = 0;

sx = 0;

dy = 1; //1;

sy = 0;

> }

else if (sramId == 1) {

> // TO WEST 1 HOP

dx = 1; //1;

sx = 1; //1;

dy = 0;

sy = 0;

> }
>
> // destination cores are hot coded (15 means to all cores 0,1,2,3)

if (coreId == 0) {

destinationcoreId = 1; // to core 0 'hot coded'

}

else if (coreId == 1) {

destinationcoreId = 2; // to core 1 'hot coded'

}

else if (coreId == 2) {

destinationcoreId = 4; // to core 2 'hot coded'

}

else if (coreId == 3) {

destinationcoreId = 8; // to core 3 'hot coded'

}

bits = neuronId \<\< 7 \| sramId \<\< 5 \| coreId \<\< 15 \| 1 \<\< 17
\| 1 \<\< 4 \| destinationcoreId \<\< 18 \| sy \<\< 27 \| dy \<\< 25 \|
dx \<\< 22 \| sx \<\< 24 \| coreId \<\< 28;

// send data via usb (note that chip id has been selected previously)

caerDeviceConfigSet(usb\_handle, DYNAPSE\_CONFIG\_CHIP,
DYNAPSE\_CONFIG\_CHIP\_CONTENT, bits);

}

}

}

2\) Program destination addresses in the CAM for chips U1,U2

// configuring chip U1

caerDeviceConfigSet(usb\_handle, DYNAPSE\_CONFIG\_CHIP,
DYNAPSE\_CONFIG\_CHIP\_ID, DYNAPSE\_CONFIG\_U1);

for (size\_t coreId = 0; coreId \< 4; coreId++) {

for (size\_t neuronId = 0; neuronId \< 256; neuronId++) {

for (size\_t camId = 0; camId \< 64; camId++) {

uint32\_t ei = 1; // excitatory

uint32\_t fs = 1; // fast

uint32\_t address = neuronId; // cam content match source id

uint32\_t source\_core = coreId; // source core id

uint32\_t neuron\_row = (neuronId & 0xf0) \>\> 4; // transform

uint32\_t synapse\_row = camId; // cam ID

uint32\_t row = neuron\_row \<\< 6 \| synapse\_row; // 0 - 1023

uint32\_t column = neuronId & 0xf; // 0 - 15

bits = ei \<\< 29 \| fs \<\< 28 \| address \<\< 20 \| source\_core \<\<
18 \| 1 \<\< 17 \| coreId \<\< 15 \| row \<\< 5 \| column;

> caerDeviceConfigSet(usb\_handle, DYNAPSE\_CONFIG\_CHIP,
> DYNAPSE\_CONFIG\_CHIP\_CONTENT, bits);

}

}

}

For chip U2 is identical. The only difference is that you need to select
chip U2 ( - caerDeviceConfigSet(usb\_handle, DYNAPSE\_CONFIG\_CHIP,
DYNAPSE\_CONFIG\_CHIP\_ID, DYNAPSE\_CONFIG\_U2) -) before programming
the content of the cam.

![](media/image166.png){width="3.199475065616798in"
height="3.3362051618547683in"}

**Figure 2.4.1**. The result of the routing example. The figure shows
the activity from the 4 chips on the board. Spikes are colored pixels.
Every quadrant contains 1024 neurons as it is a single chip - U0, U1,
U2, U3 -. The 4 colors represent different cores, containing 256 neurons
each. Activity from chip U3 is sent to U1 and U2. Their biases have been
tuned such that they make a copy, with 1 ms delay, of the spiking
activity from chip U3.

Programming the connection in such a low-level manner it is tedious and
not efficient for complicated networks. For this reason we distribute,
along with cAER and higher level module, that can be used to program
connections among neurons and build complicated network by simply
describing them with a higher level semantic. See s[[ection 2.6 Neural
Network
Manager]{.underline}](#neural-network-manager.-the-netparser-caer-module.)
for more information about it.

2.6 Neural Network Manager. The NetParser cAER module. 
-------------------------------------------------------

To abstract and simplify the creation of connection among neurons, a c++
module has been written: the netparser module. The netparser module is
fully integrated in cAER.

The netparser is a neural network manager. It serves two main functions:

1.  It abstracts away having to manually set the SRAM and CAM registers
    > to connect two neurons.

2.  It keeps a map off all connections made through it, enabling
    > connection queries.

For more information about the module, please read its documentation,
complete with a tutorial and some examples in the module source
repository, at the following link.
[[https://github.com/inilabs/caer/tree/master/modules/netparser/documentation]{.underline}](https://github.com/inilabs/caer/tree/master/modules/netparser#netparser-caer-module)

2.7 Multi-board AER connectors 
-------------------------------

It is possible to extend the Dyanp-se to a multi-board system. In such
situation, one can use cables to make board to board connections. Every
Dynap-se chip has 4 interfaces: north, south, east and west. At the side
of the board there are 8 AER expansion slots that can be used to make
connections among different boards, or even among AER interfaces on the
same board.

The cable that we use is a 51 Position Flat Flex Cable Assembly
Receptacle with Latch to Receptacle with Latch 15.75\" (400mm). For the
20 cm long cable, the model number is JF08R0R051020MA and it is
manufactured by JAE Electronics.

![](media/image158.png){width="5.373622047244094in"
height="2.901042213473316in"}

**Figure: 2.5.1**

Once the cable is plugged, remember to remove the corresponding jumper
at the bottom of the board (below the connector). These jumpers are the
jumper number: J16, J17, J15, J14, SW1, SW2, J13, J168. They normally
short request and acknowledge signals, however if a cable is used to
connect the AER interface to another Dynap-se processor, the handshake
is handled by the Dynap-se chip and the jumpers are not used anymore.

2.8 Multi-board configuration bus
---------------------------------

It is possible to configure parameters, cam/sram content up to 4 board
via a single configuration bus, using a single USB connection from a
'master' DYANP-SE board.

In such scenario it is required to set the Board-ID by changing the two
lower bits of the DIP switch situated at the side of the AER/GPIO
connector, on the front side. This board id is used to identify chips in
different boards. The connections among boards can be done by using a
standard 40 pin

![](media/image108.png){width="3.75in" height="6.25in"}

**Figure 2.6.1**

3. Upload logic and or firmware via USB using Flashy
====================================================

Flashy is a utility that can be used to upload firmware and logic into
the FX2 USB chip and into the FPGA. Flashy is a java utility that can be
downloaded
[[here]{.underline}](https://github.com/inilabs/flashy/releases), it
requires java Oracle 8 (download it from
[[here]{.underline}](http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html))
and can be executed by typing:

*\$ java -jar
[Flashy-0.9.6-jar-with-dependencies.jar](https://github.com/inilabs/flashy/releases/download/0.9.6/Flashy-0.9.6-jar-with-dependencies.jar)*

Once Flashy is fired up, select the Dynap-se device from the device list
tab. Navigate to the Device Specific. See figure below.

The latest FPGA logic can be downloaded from
[[here]{.underline}](https://github.com/inilabs/devices-bin/tree/master/logic/SystemLogic2/Spartan6_Dynapse),
note that there are two versions of the logic file (one works with the
Davis240C while the other works with the Davis240B, it just map
differently the GPIO port). To update the logic, press the button
"select file" under the Select CPLD logic file line (the file you will
load needs to to have .xsvf extension). After selecting the logic file,
press upload CPLD bitstream. Note that when you upload your bitstream
with flashy the logic is programmed into the UEEPROM, please be patient
at this can take up several minutes. When the upload has finished, you
will need to reboot the board in order to start with the newly uploaded
logic (just unplug and replug the usb cable). Alternatively, you can
program the board with a Xilinx Cable Programmer (with ISE 14.7
installed). To do this, you will need to connect to the JTAG port on top
of the board (this will require you to open the Dynap-se case by
unscrewing the 4 screws at the back together with the 16 sma screws).
The UEEPROM model to select is M25P128. (Micron Technology
M25P128-VMF6TPB)

![](media/image119.png){width="6.267716535433071in"
height="2.486111111111111in"}

**Figure 3.0.1**

To upload a new firmware version, select the .iic binary file and press
flash FX2 firmware. The default firmware can be download from
[[here]{.underline}](https://svn.code.sf.net/p/jaer/code/devices/firmware/CypressFX2/SeeBetterLogic_Dynapse/).

![](media/image50.png){width="6.267716535433071in"
height="0.6111111111111112in"}

4. Running cAER 
================

Please refer to the [[cAER
readme]{.underline}](https://github.com/inilabs/caer#caer) to install
cAER with all dependencies. Once that is done please come back here for
tuning cAER for the Dynap-se.

4.1 Compile cAER for Dynap-se
-----------------------------

Once cAER has been checked out from out github repository and you have
installed all the required packages, you will need to rename the file
main\_dynapse.c into main.c.

INSTALLATION:\
\
0) rename main\_dynapse.c in main.c\
\
*\$ mv main\_dynapse.c main.c\
*\
1) configure:

*\$* cmake -DDYNAPSE=1 -DSTATISTICS=1 -DVISUALIZER=1 -DINPUT\_FILE=1
-DOUTPUT\_FILE=1 -DINPUT\_NETWORK=1 -DOUTPUT\_NETWORK=1
-DMEANRATEFILTER=1 -DSYNAPSERECONFIG=1 -DFPGASPIKEGEN=1
-DPOISSONSPIKEGEN=1 .

Useful options:

-DCMAKE\_BUILD\_TYPE=Debug \-- enable debug build , you can then use gdb
to debug your code

2\) build:\
\
*\$ make\
*\
3) install:\
\
*\$ make install\
*\
USAGE:\
\
*\$ caer-bin* (see docs/ for more info on how to use cAER)\
\$ ./utils/caerctl/caer-ctl (run-time settings control program,
optional)

You will need a \'caer-config.xml\' file that specifies which and how
modules should be interconnected. A good starting point is
\'docs/dynapse-config.xml\', please also read through
\'docs/modules.txt\' for an explanation of the modules system and its
configuration syntax.

You can copy the docs/dynapse-config.xml into caer-config.xml and then
start caer.

Once cAER starts it first initializes the default biases that make all
the neurons spike, in addition it programs one SRAM per neuron to route
neuron's spike to the usb interface for monitoring. The default
visualizer display one neuron per pixel and colors differently every
core.

Note that the fileOutput module will start recording automatically an
aedat file in your home directory. If you wish to disable the fileOutput
module, you can do so by setting the 'runAtStartup' option false in the
caer-config.xml file, or by disabling the -DOUTPUT\_FILE=0 module.

4.2 Storing cAER recordings 
----------------------------

cAER enables you to store the spikes from / to the device using the
OUTPUT\_FILE module. Just enable this option while compiling cAER (cmake
-DOUTPUT\_FILE=1) and set its options via the caer-ctl command line
utility or via the caer-ctl-gui (also available in gihub
[[here]{.underline}](https://github.com/inilabs/caerctl-gui-javafx)).

The options of the file output module are the following:

\<node name=\"7-FileOutput\" path=\"/1/7-FileOutput/\"\>

\<attr key=\"directory\"
type=\"string\"\>/media/federico/space/inilabs/caer/recordings\</attr\>

\<attr key=\"keepPackets\" type=\"bool\"\>false\</attr\>

\<attr key=\"prefix\" type=\"string\"\>caerOut\</attr\>

\<attr key=\"ringBufferSize\" type=\"int\"\>128\</attr\>

\<attr key=\"runAtStartup\" type=\"bool\"\>true\</attr\>

\<attr key=\"validOnly\" type=\"bool\"\>false\</attr\>

\</node\>

Relevant parameters are:

*directory* is the directory in which the files will be stored

*prefix* is the prefix of the filename

*runAtStartup* if true the filter starts recording at startup. The user
can change the running value (start/stop) via caer-ctl or via
caer-ctl-gui.

*validOnly* records only valid events (some event might be invalidated
by running modules)

4.3 Playing back cAER dynap-se recordings
-----------------------------------------

Once you have recorded a file, it can be played back using the
INPUT\_FILE module. To enable this input mode, cAER needs to be compiled
with the -DINPUT\_FILE=1. No need to recompile caer if you have already
compiled it with this module enable.

Once cAER has been started with the input from file, you will need to
edit the 'filepath' of the input\_file module using caer-ctl utils (via
GUI or command line). The following error will appear in the console if
the filepath is not specified:

*'ERROR: 10-FileInput: No input file given, please specify the
\'filePath\' parameter.'*

Example of selection of the file input:

cAER @ 127.0.0.1:4040 \>\> put /1/10-FileInput/ filePath string
/home/federico/caerOut-2017\_01\_23\_13\_31\_18.aedat

The options for the FILE\_INPUT module are:

\<node name=\"10-FileInput\" path=\"/1/10-FileInput/\"\>

\<attr key=\"PacketContainerDelay\" type=\"int\"\>10000\</attr\>

\<attr key=\"PacketContainerInterval\" type=\"int\"\>10000\</attr\>

\<attr key=\"PacketContainerMaxPacketSize\" type=\"int\"\>8192\</attr\>

\<attr key=\"autoRestart\" type=\"bool\"\>true\</attr\>

\<attr key=\"bufferSize\" type=\"int\"\>65536\</attr\>

\<attr key=\"filePath\"
type=\"string\"\>/home/federico/caerOut-2017\_01\_23\_13\_31\_18.aedat\</attr\>

\<attr key=\"keepPackets\" type=\"bool\"\>false\</attr\>

\<attr key=\"pause\" type=\"bool\"\>false\</attr\>

\<attr key=\"runAtStartup\" type=\"bool\"\>true\</attr\>

\<attr key=\"transferBufferSize\" type=\"int\"\>128\</attr\>

\<attr key=\"validOnly\" type=\"bool\"\>false\</attr\>

\</node\>

The recording can also be played in a slow-motion mode or in fast mode
by changing the PacketContainerInterval and the PacketContainerDelay
settings.

4.4 Parsing cAER dynap-se recordings
------------------------------------

Once a recording file has been taken, one could parse the recording file
and analyze the data.

The header of the cAER aedat file for a Dynap-se recording is the
following:

\#!AER-DAT3.1

\#Format: RAW

\#Source 1: DYNAPSEFX2

\#Start-Time: 2016-11-20 10:40:45 (TZ+0100)

\#!END-HEADER

If you wish to know more about the AEDAT 3.1 file format please refer to
our user guide
[[here]{.underline}](http://inilabs.com/support/software/fileformat/).

A simple way of parsing the binary file is to write a **python** script.
An example of such script can be found
[[here]{.underline}](https://github.com/federicohyo/dynap-se/blob/master/aedat-python/aedat_dynapse.py)

An example of a raster plot for spikes coming from a single dynap-se
chip (1024 neurons).

![](media/image118.png){width="5.465100612423447in"
height="4.0891349518810145in"}

**Figure 4.4.1**: Raster plot of events from one Dynap-se chip. The
colors represents events coming from 4 distinct cores. In each core
there are 256 neurons.

4.5 Visualizer 
---------------

The visualizer module can be enabled by compiling caer with the option
"-DVISUALIZER=1 -DSTATISTICS=1". The visualizer module requires the
statistics module as dependency. Once caer-bin is started a window
similar to the following is displayed. In which colors represents the
core id of the 4 processors, as indicated in the picture on the right.

  ------------------------------------------------------------------------------------- -------------------------------------------------------------------------------------
  ![](media/image163.png){width="2.9791666666666665in" height="3.1944444444444446in"}   ![](media/image121.png){width="2.9791666666666665in" height="3.1944444444444446in"}
  ------------------------------------------------------------------------------------- -------------------------------------------------------------------------------------

**Figure 4.5.1**

Colors refers to different cores CO, C1, C2, C3. Every core has its own
bias-generator and this allows the synaptic and neuron parameters to be
set independently. In this simple example has we have been changing the
parameters with "caer-ctl" command line utility.

### Keyboard and mouse shortcuts

-   You can enable and disable the top statistics which shows total
    > event/second by pressing the 'q' key.

![](media/image180.png){width="6.267716535433071in"
height="2.3194444444444446in"}

**Figure 4.5.2**

-   The visualizer can be increased/decreased in size by using the mouse
    > wheel or the 'up'/'dn' key arrows.

-   You can pause a play of a recording with the 'spacebar'.

-   You can select which neuron to monitor by clicking on it in the
    > visualizer. Your click will trigger the setting of the analog
    > monitors.

All hotkeys work in all visualization types.

4.6 Caer-ctl utility for controlling parameters
-----------------------------------------------

From the caer forder one can run the caer-ctl utility program

\$ ./utils/caer-ctl/caer-ctl

This opens a shell to the caer server that listens for parameters
updates. Once connected we can tune the injection current for neurons in
different cores and processors, we simply type:

![](media/image170.png){width="6.267716535433071in"
height="1.9444444444444444in"}

The command is composed by navigating the xml tree, the shell is
interactive and uses the "TAB" key to pass from one node to the next.
Once a node is selected, we can use the "SPACE BAR" key to enter into
the node and then select with the "TAB" its element.

In addition to the command line tool, it exists a Graphical User
Interface that can be used to set the bias parameters, the software
filters parameters, and for the general cAER settings. See the
[[this]{.underline}](#_tyyqznelo5x1) section to learn more about the
GUI.

4.7 Control biases: 
--------------------

The biases can be controlled via the caer-ctl utility interface (using
the JavaFX2 GUI or the command line utility - ./utils/caerctl/caer-ctl
-).

The biases are used to set the different parameters as injection
current, refractory period, synaptic efficacy etc. These currents can be
programmed by setting the coarse value and the fine value of a
particular parameter.

![](media/image154.png){width="4.364583333333333in" height="3.15625in"}

**Figure 4.7.0:** Bias setting - from cAER Control Utility (JavaFX2 GUI)

![](media/image107.png){width="6.267716535433071in"
height="4.333333333333333in"}

**Figure 4.7.1**: These plots show the ideal conversion between coarse
and fine values; on the x-axis the fine value is swept, on the y-axis
the current value is calculated. The coarse digital bit is indicated in
the legend. The bias generator is capable of providing currents from
pico-ampere to microampere.

The conversion can be obtained using the following formula:

coarse = \[\'24u\', \'3.2u\', \'0.4u\', \'50n\', \'6.5n\', \'820p\',
\'105p\', \'15p\'\]

fine = range(0, 255)

def updateCurrent(index\_coarse,fine):

unit = coarse\[index\_coarse\]

maxCurrent = float(unit.split(unit\[-1\])\[0\])

current = fine \* maxCurrent / 256

current\_str = str(round(current, 4)) + unit\[-1\]

if(unit\[-1\] == \'u\'):

multiplier = 10e-6

if(unit\[-1\] == \'p\'):

multiplier = 10e-12

if(unit\[-1\] == \'n\'):

multiplier = 10e-9

current\_final = current \* multiplier

return current\_final

4.8 Control mean rate activity: MeanRateFilter 
-----------------------------------------------

The mean rate filter can be enabled by compiling caer with the option
"-DMEANRATEFILTER=1". If the visualizer module is also enabled it will
appear a second window. In this window it is displayed the mean rate
frequency of neurons with a jet color map.

![](media/image52.png){width="5.354166666666667in" height="6.0in"}

The parameters for the mean rate filter are:

-   **colorscaleMax** int

-   **colorscaleMin** int

-   **doSetFreq** bool

-   **measureMinTime** float

-   **targetFreq** float

-   **runAtStartup** bool

-   **running** bool

The value of *colorscaleMax* and *colorscaleMin* defines the minimum and
maximum frequency of the jet color map, which looks as follow.

![](media/image55.png){width="5.817708880139983in"
height="0.8020833333333334in"}

The *measureMinTime* define a period of time used to measure the
frequency (in seconds).

  ------------------------------------------------------------- -------------------------------------------------------------------------
  ![](media/image174.png){width="2.96875in" height="3.125in"}   ![](media/image188.png){width="2.96875in" height="3.138888888888889in"}
  ------------------------------------------------------------- -------------------------------------------------------------------------

Spike Visualizer Mean Rate Filter Visualizer

In addition to measure the current mean rate frequency the filter can be
used to set all neurons to a target frequency. The target frequency can
be set by typing the target value in the *targetFreq* parameters and by
enabling to true the *doSetFreq* parameters. Once the *doSetFreq* has
been enabled the software changes the injection currents for all the
cores and tries to match the mean rate frequency to the target
frequency.

For example by typing in the caer-ctl utility program:

\$ put /1/4-MRFilter/ targetFreq float 40

\$ put /1/4-MRFilter/ doSetFreq bool true

The filter will start to set all neurons to the target frequency of 40
Hz.

  ------------------------------------------------------------------------ ------------------------------------------------------------
  ![](media/image14.png){width="2.96875in" height="3.138888888888889in"}   ![](media/image81.png){width="2.96875in" height="3.125in"}
  ------------------------------------------------------------------------ ------------------------------------------------------------

From the plot on the right it is visible that some neurons of few cores
(4) are set far below the target frequency (blue dots). This is because
the IF\_DC\_TAU parameters of these core is set to a very small value
and therefore the mismatch it is higher for these core than others. If
interested in more in depth characterization of neurons properties
please have a look at the section about [[neuron's soma
parameters]{.underline}](#_emza7unb87mk).

4.9 Control monitor output neurons: MonitorNeuFilter
----------------------------------------------------

The monitor neuron filter can be enabled by compiling caer with the
option "-DMONITORNEUFILTER=1". This filter controls which neuron is
currently being monitored and whose membrane potential is sent at the
SMA connector output at the back of the board.

![](media/image191.png){width="6.668790463692038in"
height="2.8802088801399823in"}

This filter has 16 parameters, each associated to each output SMA
connector:

-   dynapse\_u0\_c0 int

-   dynapse\_u0\_c1 int

-   dynapse\_u0\_c2 int

-   dynapse\_u0\_c3 int

-   dynapse\_u1\_c0 int

-   dynapse\_u1\_c1 \...

-   ...

-   dynapse\_u3\_c3 int

The integer value of these parameters represent the neuron id that is
currently being monitored and span from 0 to 255. Incorrect values will
not be set.

![tau\_changes.png](media/image16.png){width="4.051714785651794in"
height="3.2968755468066493in"}

Monitoring output example: membrane potentials

4.10 Stimulating neurons with Spike Generator (via USB)
-------------------------------------------------------

With the spike generator it is possible to inject spikes trains. These
spike trains can be of fixed durations or can run indefinitely. The
spike generator is highly configurable via several settings, these
settings are:

![](media/image155.png){width="3.8854166666666665in"
height="6.885416666666667in"}

Address -\> is neuron address \[0,255\]

Chip\_id -\> to which chip the spike is sent (the chip id that will ack)
(0,4,8,12)

Core\_d -\> it will appear as source of the event \[0,16\]

Core\_s -\> as core source id \[0,3\]

Dx -\> number of hops in the west or east direction

Sx -\> sign positive east (box checked), (**not allowed on version
DYNAP-SE-1**), negative west (box unchecked)

Dy-\> number of hops in north or south direction

Sy -\> sign positive north (checked), negative south (unchecked)

Stim\_avr -\> mean freq of stimulation (Hz)

stim\_duration-\> duration stimulus (sec)

Stim\_type -\> 2 regular

Stim\_std -\> standard deviation for gaussian (type 1)

To generate test stimuli pattern for chip DYNAPSE\_U0, after starting
cAER with the default configurations, (remove caer-config.xml to start
from the default configuration).

1)  click the button 'clearAllCam' to clear all the CAMs in the first
    > chip. Check the console for the SpikeGen status to be finished.
    > "SpikeGen: Started clearing cam..", "SpikeGen: CAM cleared
    > successfully". It can take up to 30 sec.

2)  click the button 'setCam' to write the CAMs in chip 1 for receiving
    > spikes. Wait for the message "SpikeGen: CAM programmed
    > successfully" in the console

3)  Then set the stimuli type 'stim\_type' as 4 or 5 or 6, they
    > represent the patterns: circle, diamond and cross.

4)  Make sure you load the default stimuli biases, by pressing
    > 'loadDefaultBiases' button.

5)  Finally click the button 'doStim' to send spikes into the first
    > chip. If you wish the stimulation to be permanent press the
    > 'repeat' button.

![](media/image149.png){width="1.9726323272090989in"
height="2.0989588801399823in"}![](media/image164.png){width="1.9635422134733158in"
height="2.096663385826772in"}![](media/image192.png){width="1.9322922134733158in"
height="2.088964348206474in"}

Example of test stimulation patterns: circle, diamond, cross.

NB: if the pattern does not seem to be complete, or if there are
spurious neurons firing, please adjust the biases. The biases can be
slightly different from core to core, specifically the
'loadDefaultBiases' button set the values of these parameters (to be the
same for all cores of DYNAPSE\_U0 chip) :

The most effective one are: IF\_TAU1\_N (leakage current of the
neurons), IF\_DC\_P (constant injection current in the neuron\'s soma),
IF\_THR\_N (spiking thresholds), and PS\_WEIGHT\_EXC\_F\_N (fast
excitatory weight).

setBiasBits(state, chipId, coreId, \"IF\_AHTAU\_N\", 7, 35, \"LowBias\",
\"NBias\");

setBiasBits(state, chipId, coreId, \"IF\_AHTHR\_N\", 7, 1, \"HighBias\",
\"NBias\");

setBiasBits(state, chipId, coreId, \"IF\_AHW\_P\", 7, 1, \"HighBias\",
\"PBias\");

setBiasBits(state, chipId, coreId, \"IF\_BUF\_P\", 3, 80, \"HighBias\",
\"PBias\");

setBiasBits(state, chipId, coreId, \"IF\_CASC\_N\", 7, 1, \"HighBias\",
\"NBias\");

**setBiasBits(state, chipId, coreId, \"IF\_DC\_P\", 5, 2, \"HighBias\",
\"PBias\");**

setBiasBits(state, chipId, coreId, \"IF\_NMDA\_N\", 7, 1, \"HighBias\",
\"NBias\");

setBiasBits(state, chipId, coreId, \"IF\_RFR\_N\", 2, 180, \"HighBias\",
\"NBias\");

**setBiasBits(state, chipId, coreId, \"IF\_TAU1\_N\", 4, 255,
\"LowBias\", \"NBias\");**

setBiasBits(state, chipId, coreId, \"IF\_TAU2\_N\", 6, 15, \"HighBias\",
\"NBias\");

**setBiasBits(state, chipId, coreId, \"IF\_THR\_N\", 2, 180,
\"HighBias\", \"NBias\");**

setBiasBits(state, chipId, coreId, \"NPDPIE\_TAU\_F\_P\", 6, 150,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPIE\_TAU\_S\_P\", 7, 40,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPIE\_THR\_F\_P\", 0, 220,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPIE\_THR\_S\_P\", 7, 0,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPII\_TAU\_F\_P\", 7, 40,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPII\_TAU\_S\_P\", 7, 40,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPII\_THR\_F\_P\", 7, 40,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"NPDPII\_THR\_S\_P\", 7, 40,
\"HighBias\", \"PBias\");

**setBiasBits(state, chipId, coreId, \"PS\_WEIGHT\_EXC\_F\_N\", 0, 250,
\"HighBias\", \"NBias\");**

setBiasBits(state, chipId, coreId, \"PS\_WEIGHT\_EXC\_S\_N\", 7, 1,
\"HighBias\", \"NBias\");

setBiasBits(state, chipId, coreId, \"PS\_WEIGHT\_INH\_F\_N\", 7, 1,
\"HighBias\", \"NBias\");

setBiasBits(state, chipId, coreId, \"PS\_WEIGHT\_INH\_S\_N\", 7, 1,
\"HighBias\", \"NBias\");

setBiasBits(state, chipId, coreId, \"PULSE\_PWLK\_P\", 3, 50,
\"HighBias\", \"PBias\");

setBiasBits(state, chipId, coreId, \"R2R\_P\", 4, 85, \"HighBias\",
\"PBias\");

4.11 Stimulating neurons with the FPGA-SpikeGen
-----------------------------------------------

The FPGA spike generator (-DFPGASPIKEGEN) offers better performance in
term of time precision ( Inter-Spike-Iinterval precise \<20ns), also it
does not consume USB bandwidth.

![](media/image116.png){width="4.322916666666667in"
height="5.802083333333333in"}

It is possible to send events from a single source address at a constant
rate or from multiple addresses at different constant rates.

If you want to use multiple source addresses you will need to prepare a
file with a single source address (neuron pre, and virtual chip ID) and
destination information (core select) per line. The integer (E)
represents a source neuron address, a virtual chip id and one or more
hot-encoded destination cores. The integer bits are the following:

  13                       12                           11            10   9   8   7   6   5   4   3   2   1   0
  ------------------------ ---------------------------- ------------- ---- --- --- --- --- --- --- --- --- --- ---
  **Neuron Address Pre**   **Virtual Source Chip ID**   **CORE\_D**                                            

The timing of each spike in output is in unit of "ISIBase". One ISIBase
is 1/90 Mhz = 11.11 ns.

For example an ISI =2 mean a spike every 22.22 ns.

If you want to have different ISI per source neuron, you need to select
the option VariableISI (bool true) and insert two integers in the file.
The first integer represent the source address as table above, insert a
comma and a second integer with a time (always in terms of ISIBase).
This time refers to the wait time from the start before the spike is
sent.

Example a file like this one:

E~0~,T~0~

E~1~,T~1~

...

E~n~,T~n~

In this example, from when the start button is pressed. The module will
send a spike after T0 from E0, then it will wait T1 before sending a
spike to E1 and so on till the end of the file. If the repeat option is
selected, then the process is repeated from the top.

See: this
[[link]{.underline}](https://github.com/inilabs/caer/tree/master/modules/fpgaspikegen/data)
for more info and a spike train generation example (in python)

4.12 Stimulating neurons with the FPGA-PoissonSpikeGen
------------------------------------------------------

The FPGA Poisson spike generator (-DPOISSONSPIKEGEN) offers better
performance in term of time precision (precise Inter-Spike-Iinterval
\<20na), also it does not consume usb bandwidth.

![](media/image117.png){width="5.927083333333333in"
height="5.385416666666667in"}

The FPGA based Poisson generator has at most 1024 source Poisson
generators that send spikes accordingly to a Poisson process of mean
rate defined by the "Rate" parameter.

You can stimulate a single address by selecting and address in the
"targetNeuronAddress" integer parameters, select the "Rate" and press
the "Run" button, the poisson spike generator will start running. (Note
that you will have to reset an address to rate 0 to stop it from being
used\...)

This module also support input from file. In the file you can give a
list of rates, one per line, and you will need to specify 1024 lines in
the file (note that lines can be of value 0). The values in the lines
are in Hz unit.

Once you selected the input file, remember to press the button write
SRAM, to transfer the content of the SRAM before it can be used. If the
repeat option is on, the stimulation will never stop.

5. Biasing user guide
=====================

5.1 Starting the caerctl-gui
----------------------------

Start first cAER then the GUI (available for download
[[here]{.underline}](https://github.com/inilabs/caerctl-gui-javafx/releases)).
cAER opens a configuration server to which the GUI client can connect.

\$ ./caer-bin -c docs/dynapse-config.xml

\$ java -jar caerctl-gui-javafx-0.5.2-jar-with-dependencies.jar

It will appear a window as the following one; click on connect

![1.png](media/image178.png){width="6.270833333333333in"
height="1.03125in"}

Ip address is the ip address of the host computer that is running cAER.
By default it is 127.0.0.1 and the default (TCP) port is 4040. These
parameters can be changed by editing caer-config.xml file (server
section) before starting cAER. (note that caer-config.xml is
automatically created after caer-bin is executed once and then closed by
pressing ctrl+c). In this particular case we are using the default
dynapse-config.xml configuration file.

Once completed the connection, (it might take few seconds) a GUI will be
created and for the dynap-se board it will look as in the next image.

![](media/image105.png){width="5.703125546806649in"
height="4.366597769028871in"}

The first two buttons are useful to either save the current
configuration in a .xml file, or load a precedent configuration the user
wants to utilize again.

If running is un-selected, cAER will stop.

The logger module let you define the log levels: 0=no logs, 5=info,
6=warnings, 7=verbose debug.

From the server tab you can select the ip address and port for the
configuration server, if these options change then cAER must be
restarted in order to apply these changes.

In the next figure, the highlighted blue tab let the user access to a
specific dynap-se processor, DYNAPSE\_U0, DYNAPSE\_U1, DYNAPSE\_U2,
DYNAPSE\_U3.

The tabs highlighted in red let the user access neurons and synapses
parameters. Every chip is composed of four distinct cores that can be
tuned independently. These cores are composed of 256 neurons each.

![4.png](media/image75.png){width="6.267716535433071in"
height="4.472222222222222in"}

5.2 Neuron' soma parameters 
----------------------------

The 256 neurons composing each core of a Dynap-se chip have different
properties which relate to the biological properties of neurons. As
shown in the image of the GUI (above), the arrow highlighted in green
will open a window which will allow the changing of the different
parameters which will define the neuron's behaviour. There are 25
parameters which are modifiables, related to different components of the
neurons (synapses, soma, etc..).

The focus of the first part of this guide will be on the four main
properties of the neuron soma:

-   Injected current: C0\_IF\_DC\_P

-   Refractory period: C0\_IF\_RFR\_N

-   Leak/Membrane time constant: C0\_IF\_TAU1\_N

-   Threshold: C0\_IF\_THR\_N

Where C0 indicates that the properties changes will affect the Core 0 of
the Dynap-se chip. It is possible for example to change the refractory
period of the Core 2 by selecting C2\_IF\_RFR\_N.

### 5.2.1 Injected Current

The first parameter which will be discussed is the current
(C0\_IF\_DC\_P) injected into the neuron soma; the three other
properties (refractory period, leak and threshold) will remain fixed in
order to analyse how the current alone affects the spiking frequencies
of the neurons.

The two parameters modifiables are:

-   coarseValue (cV) : 0 to 7 (0 max)

-   fineValue (fV): 0 to 255 (255 max)

This type of operation is possible with all the different properties of
the Dynap-se.

We can resume the different values with the following image:

![](media/image94.png){width="5.114583333333333in"
height="0.9895833333333334in"}

There is an overlapping of the values of the currents injected between
the minimal and the maximal of the fV which will be represented better
graphically in the next pages.

In order to analyse the frequencies the spiking events must be recorded,
we will discuss the recording procedure
[[here]{.underline}](#recording-spiking-data).

A

  ![Screen Shot 2016-12-15 at 14.10.57.png](media/image150.png){width="6.09375in" height="1.0138888888888888in"}   
  ---------------------------------------------------------------------------------------------------------------- ------------------------------------------------------------------------------------------------
  B![neurons\_core\_0.png](media/image157.png){width="2.96875in" height="2.388888888888889in"}                     ![neurons\_core\_1.png](media/image49.png){width="2.96875in" height="2.388888888888889in"}
  C![mean\_freq\_core\_0.png](media/image184.png){width="2.96875in" height="2.388888888888889in"}                  ![mean\_freq\_core\_1.png](media/image179.png){width="2.96875in" height="2.388888888888889in"}

**Figure 5.1.1** A) Valors of the different properties of the neuron
soma applied to 2 different cores (Core 0 and Core 1) of a Dynap-se
board with two different DC coarse Values. In this case the x-axis
represent different fine Values of DC. B) Variation of spiking
frequencies in function of a an increase of the fValue. Each one of the
256 neurons of the is represented with a different color. C) Mean
frequency of the 256 neurons for the fValue variation.

### 

### 5.2.2 Refractory Period

Another property which can be modifiable is the refractory period which
have the same value range as presented before in 2.1.

  A![Screen Shot 2016-12-15 at 14.11.07.png](media/image153.png){width="6.09375in" height="0.9444444444444444in"}   
  ----------------------------------------------------------------------------------------------------------------- ------------------------------------------------------------------------------------------------
  B![neurons\_core\_0.png](media/image175.png){width="2.96875in" height="2.6527777777777777in"}                     ![neurons\_core\_1.png](media/image151.png){width="2.96875in" height="2.6527777777777777in"}
  C![mean\_freq\_core\_0.png](media/image56.png){width="2.96875in" height="2.388888888888889in"}                    ![mean\_freq\_core\_1.png](media/image142.png){width="2.96875in" height="2.388888888888889in"}

**Figure 5.2.1** A) Valors of the different properties of the neuron
soma applied to 2 different cores (Core 0 and Core 1) of a Dynap-se
board with two different RFR coarse Values. In this case the x-axis
represent different fine Values of DC. B) Variation of spiking
frequencies in function of a an increase of the fValue. Each one of the
256 neurons of the is represented with a different color. C) Mean
frequency of the 256 neurons for the fValue variation.

### 5.2.3 Tau

  A![Screen Shot 2016-12-15 at 14.11.13.png](media/image186.png){width="6.09375in" height="1.0138888888888888in"}   
  ----------------------------------------------------------------------------------------------------------------- -----------------------------------------------------------------------------------------------
  B![neurons\_core\_0.png](media/image182.png){width="2.96875in" height="2.6527777777777777in"}                     ![neurons\_core\_1.png](media/image190.png){width="2.96875in" height="2.6527777777777777in"}
  C![mean\_freq\_core\_0.png](media/image15.png){width="2.96875in" height="2.388888888888889in"}                    ![mean\_freq\_core\_1.png](media/image87.png){width="2.96875in" height="2.388888888888889in"}

**Figure 5.3.1** A) Valors of the different properties of the neuron
soma applied to 2 different cores (Core 0 and Core 1) of a Dynap-se
board with two different TAU1 coarse Values. In this case the x-axis
represent different fine Values of DC. B) Variation of spiking
frequencies in function of a an increase of the fValue. Each one of the
256 neurons of the is represented with a different color. C) Mean
frequency of the 256 neurons for the fValue variation.

### 5.2.4 Threshold

  A![Screen Shot 2016-12-15 at 14.11.18.png](media/image160.png){width="6.09375in" height="1.0in"}   
  -------------------------------------------------------------------------------------------------- -----------------------------------------------------------------------------------------------
  B![neurons\_core\_0.png](media/image146.png){width="2.96875in" height="2.6527777777777777in"}      ![neurons\_core\_1.png](media/image159.png){width="2.96875in" height="2.6527777777777777in"}
  C![mean\_freq\_core\_0.png](media/image53.png){width="2.96875in" height="2.388888888888889in"}     ![mean\_freq\_core\_1.png](media/image83.png){width="2.96875in" height="2.388888888888889in"}

**Figure 5.2.4** A) Valors of the different properties of the neuron
soma applied to 2 different cores (Core 0 and Core 1) of a Dynap-se
board with two different THR coarse Values. In this case the x-axis
represent different fine Values of DC. B) Variation of spiking
frequencies in function of a an increase of the fValue. Each one of the
256 neurons of the is represented with a different color. C) Mean
frequency of the 256 neurons for the fValue variation.

5.3 Recording Spiking Data
--------------------------

To record spike data, click on the File Output filter. This will show a
window in which the different parameters of the recording filter can be
set, these parameters are shown in the image below.

The text entry highlighted in blue allows to set the name of the output
file (.aedat, documentation about the format can be found
[[here]{.underline}](http://inilabs.com/support/software/fileformat/))
date and time will be automatically added in the filename.

The other options, highlighted in green, represent the possibility to
run directly the recording of the spike data at the starting of cAER
(*runAtStartup*) and to switch on or off the recording (*running*).

We recommend to leave both of the boxes unselected, in order to be able
to decide when start and stop the recording. The recording running
directly at the start of the program for several minutes could lead to
the creation of .aedat of several hundreds of megabytes.

![7.png](media/image76.png){width="5.431563867016623in"
height="3.557292213473316in"}

The AEDAT files can be easily parsed, see section [[Parsing cAER
dynap-se recordings]{.underline}](#parsing-caer-dynap-se-recordings).
Recording multiples files while changing (ex. increasing/decreasing)
gradually the parameters, is explained in the next section, this is done
in order to characterize neuron's behaviour.

The analysis of the frequencies has been done using the software R
([[https://www.r-project.org/]{.underline}](https://www.r-project.org/))
for which various scripts be found
[[here]{.underline}](https://github.com/AdenosinTP/project_ETH).

The result are the following graphs which represent the frequencies of
three neurons for different fV (cV = 0 on the top and cV = 1 on the
bottom). On the bottom of the graphs are shown the parameters of the
neuron's soma.

5.4. Neuron's behaviors and parameters tuning
---------------------------------------------

It is possible to observe the behaviour of neurons of a Dynap-se chip by
connecting the board to an oscilloscope via the SMA connector at the
back of the DYNAP-SE box.

5.5 Main Neuron's Parameters
----------------------------

### 5.5.1 Injection Current

By changing the current injected into the neuron's soma the spiking
frequency can be regulated. The following picture shows three neurons
membrane potentials with different injection current values (the one on
the top has a current's coarse value of 0 (IF\_DC cV = 0) the one in the
middle has IF\_DC cV = 3 and the one on the bottom has IF\_DC cV = 6). A
summarization of the neuron's values is represented in the table on the
right of the image.

  ----------------------------------------------------------------------------------------- --------------------------------------------------------------------------------------------------------------------------
  ![dc\_changes.png](media/image183.png){width="2.96875in" height="2.4027777777777777in"}   ![Screen Shot 2016-12-14 at 13.57.44.png](media/image161.png){width="2.921930227471566in" height="1.0364588801399826in"}
  ----------------------------------------------------------------------------------------- --------------------------------------------------------------------------------------------------------------------------

### 5.5.2 Neuron's threshold

The threshold determines at which point the neuron will spike. The
following picture shows three neurons' membrane potentials with their
respective rates. The different spiking frequencies are due to the fact
that by increasing the threshold (and keeping the current at a constant
value), it takes a longer period of time to the neuron to reach it, and
thus to spike. Three different values were assigned to the threshold
(the one on the top has a threshold coarse value of 0 (IF\_THR cV = 0),
the one in the middle IF\_THR cV = 3 and the one on the bottom has
IF\_THR cV = 6). A summarization of the neuron's values is represented
in the table on the right of the image.

  ----------------------------------------------------------------------------------------- ---------------------------------------------------------------------------------------------------------------------------
  ![thr\_changes.png](media/image85.png){width="2.96875in" height="2.4027777777777777in"}   ![Screen Shot 2016-12-14 at 13.58.05.png](media/image173.png){width="2.7656255468066493in" height="0.9591229221347332in"}
  ----------------------------------------------------------------------------------------- ---------------------------------------------------------------------------------------------------------------------------

### 5.5.3 Neuron's leak (tau)

The leak (or 𝜏 from the membrane time constant) determines the rate of
discharge of the membrane potential. The next picture shows three
neurons' membrane potentials spiking rates with three different values
for 𝜏. It is possible to see a little variation in the time at which the
voltage reaches his peak: from the top through the bottom of the image,
it is possible to see how an decrease of the fine bias's value (150; 90;
10) results in an increase in the Δt necessary to reach the peak. A
summarization of the neuron's values is represented in the table at the
right of the image.

  ---------------------------------------------------------------------------------------------------------------- ---------------------------------------------------------------------------------------------------------------------------
  ![Screen Shot 2017-02-21 at 15.40.58.png](media/image176.png){width="2.96875in" height="2.4027777777777777in"}   ![Screen Shot 2017-02-21 at 11.51.04.png](media/image171.png){width="2.7552088801399823in" height="0.9702723097112861in"}
  ---------------------------------------------------------------------------------------------------------------- ---------------------------------------------------------------------------------------------------------------------------

### 5.5.4 Neuron's refractory period

The refractory period is an important property of neurons; it defines
the time after a spike during which the neuron is not sensitive to
incoming spikes and the potential of the membrane stays at resting
value. The next picture shows two neurons' membrane potentials with two
different values assigned to the refractory period (the one on the top
has a refractory period coarse value of 2 (IF\_RFR cV = 2) and the one
on the bottom has IF\_RFR cV = 3). It is possible to see a graphic
variation of the refractory period; the bottom side of the image
represent an higher value of the refractory period and thus a decreased
frequency of spiking. A summarization of the neuron's values is
represented in the table on the right of the image.

  ------------------------------------------------------------------------------------------ -------------------------------------------------------------------------------------------------------------------------
  ![rfr\_changes.png](media/image165.png){width="2.96875in" height="2.4027777777777777in"}   ![Screen Shot 2016-12-14 at 13.57.53.png](media/image95.png){width="2.869792213473316in" height="0.9565977690288714in"}
  ------------------------------------------------------------------------------------------ -------------------------------------------------------------------------------------------------------------------------

5.6 Synaptic efficacy
---------------------

In the previous section we talked about the different parameters of the
neurons the user can modify. We will now focus synapses, which are the
main component of learning and adaptation. Synapses have likely an
efficacy \<1, which means that the receptor potential triggered by a
single synapse (1 stimulus) doesn't reach the threshold and thus the
action potential is not fired. Nevertheless, the threshold is possible
to attain if the synapses are activated with specific parameters and at
a certain frequency of the stimulus.

In this case, the receptor potentials triggered by subsequent stimuli
sums themselves making possible the reaching of the threshold.

This type of activation of the action potential is shown in the next
figure, and the parameters of the neurons and the synapses are
represented in table below.

![](media/image96.png){width="4.616141732283465in"
height="3.7512904636920386in"}

**Figure 5.6.1** Neuron membrane potential resulting from a stimulation
with a regular spike train at about 10 Hz.

![Screen Shot 2017-03-08 at
11.45.41.png](media/image48.png){width="6.267716535433071in"
height="5.930555555555555in"}

**Figure 5.6.2** Parameters of the neuron and synapses used to achieve
the membrane potential response showed in the image 8.5.1

5.7 Examples of different synaptic efficacies
---------------------------------------------

### 5.7.1 One synapse

By modifying various parameters (see the table above) it is possible to
control the synaptic efficacy of the synapses. In the following
demonstration only one CAM (synapse) of the 64 available is used and the
type of the synapse is Fast Excitatory (parameters: NPDPIE\_TAU\_F\_P,
NPDPIE\_THR\_F\_P, PS\_WEIGHT\_EXC\_S\_N).

The following plots are constructed by measuring the output frequency of
all neurons in a Dynap-se chip while at the input a variable regular
spike train was used to stimulate all the neurons. The input frequencies
were swept from 50 to 150 Hz.

  A![c3\_synaptic\_eff\_mean.png](media/image169.png){width="2.96875in" height="2.9722222222222223in"}   B![c3\_synaptic\_eff3.png](media/image189.png){width="2.96875in" height="2.9722222222222223in"}
  ------------------------------------------------------------------------------------------------------ -------------------------------------------------------------------------------------------------
  C![c3\_synaptic\_eff4.png](media/image51.png){width="2.96875in" height="2.9722222222222223in"}         D![c3\_synaptic\_eff5.png](media/image106.png){width="2.96875in" height="2.9722222222222223in"}

**Figure 5.7.1.1** A) Representation of the transfer function for five
different stimulating frequencies. The error bars represents confidence
interval of 97.5 % B) Count of the neurons synaptic efficacies (for a
total of 256 neurons) for a stimulating frequency of 100 Hz. C) Same as
before for a stimulating frequency of 125 Hz. D) Same as before for a
stimulating frequency of 150 Hz.

As you can see from these plots, the synaptic efficacies results
distributed around a mean value, and few neurons in the array do not
reach the spiking threshold. This diversity in the response is caused by
the mismatch in the analog circuits (synapses and neurons). In the
following table we show the parameters used.

![core3.png](media/image90.png){width="6.267716535433071in"
height="6.305555555555555in"}

**Figure 5.7.1.2** Parameters of the neuron and synapses used in the
recording of the data used in Figure 5.7.1.1

### 5.7.2 Using 32 CAMs

In this second example, 32 CAMs are being used, in order to get a lower
synapse efficacy. The type of synapses used is yet Fast Excitatory
(parameters: NPDPIE\_TAU\_F\_P, NPDPIE\_THR\_F\_P,
PS\_WEIGHT\_EXC\_S\_N).

  ![c0\_synaptic\_eff\_mean.png](media/image156.png){width="2.96875in" height="2.9722222222222223in"}   ![synaptic\_eff\_32\_3.png](media/image193.png){width="2.96875in" height="2.9722222222222223in"}
  ----------------------------------------------------------------------------------------------------- --------------------------------------------------------------------------------------------------
  ![synaptic\_eff\_32\_4.png](media/image177.png){width="2.96875in" height="2.9722222222222223in"}      ![synaptic\_eff\_32\_5.png](media/image185.png){width="2.96875in" height="2.9722222222222223in"}

**Figure 5.7.2.1** A) Representation of the transfer function for five
different stimulating frequencies. The error bars represents confidence
interval of 97.5 % B) Count of the neurons synaptic efficacies (for a
total of 256 neurons) for a stimulating frequency of 100 Hz. The x-axis
represents the mean synaptic efficacy for one of the 32 CAMs. C) Same as
before for a stimulating frequency of 125 Hz. D) Same as before for a
stimulating frequency of 150 Hz.

![core0\_64cam.png](media/image93.png){width="6.267716535433071in"
height="6.597222222222222in"}

**Figure 5.7.2.2** Parameters of the neuron and synapses used in the
recording of the data used in Figure 5.7.2.1

### 5.7.3 Tuning different synaptic efficacies - Fast Excitatory

By changing the weight of the synapses (PS\_WEIGHT\_EXC\_F\_N) it is
possible to find different synaptic efficacies (SynE). In this section
it is possible to find some examples of SynE with the respective
parameters used to find them. Using different parameters for each core,
it is possible to plot four histograms having different means of
synaptic efficacies.

![histogram\_4cores\_ 150
\_hz.png](media/image145.png){width="6.267716535433071in"
height="3.486111111111111in"}

**Figure 5.7.3.1** Histograms of the synaptic efficacies for different
cores (having different parameters).

![tables.png](media/image67.png){width="6.267716535433071in"
height="5.666666666666667in"}

**Figure 5.7.3.2** Parameters of the neuron and synapses used in the
recording of the data used in Figure 5.7.3.1

The only parameter changed was PS\_WEIGHT\_EXC\_S\_N:

-   Core 0: cV = 0, fV = 10

-   Core 1: cV = 0, fV = 80

-   Core 2: cV = 0, fV = 230

-   Core 3: cV = 1, fV = 230

By looking at figure 5.8.3.1 it is possible to see that for the weight
used in Core 3, the relative synaptic efficacy fits in between Core 1
and Core 2. This is due to the overlapping values discussed
[[here]{.underline}](#injected-current).

### 5.7.4 Tuning different synaptic efficacies - Slow Excitatory

In the sections above only a type of synapses was discussed. There are
four types of CAMs which can be resumed in the next list:

-   Fast Excitatory Synapses (FES)

-   Slow Excitatory Synapses (SES)

-   Fast Inhibitory Synapses (FIS)

-   Slow Inhibitory Synapses (SIS)

The second time of CAMs which will be analyzed are the SES. As already
done for the FE, it was possible to distinguish different SynE changing
the weight (PS\_WEIGHT\_EXC\_S\_N) as showed in the following picture.

![histogram\_4cores\_ 150
\_hz.png](media/image181.png){width="6.267716535433071in"
height="3.486111111111111in"}

**Figure 5.7.4.1** Histograms of the synaptic efficacies for different
cores (having different parameters).

It is possible to observe a similarity between the results showed by
Figure 5.7.3.1 and Figure 5.7.4.1, this is due to the circuits
similarity on the chip for both CAMs.

![parameters.png](media/image112.png){width="6.267716535433071in"
height="5.472222222222222in"}

**Figure 5.7.4.2** Parameters of the neuron and synapses used in the
recording of the data used in Figure 5.9.4.1

### 5.7.5 Tuning different synaptic efficacies - Fast Inhibitory

Beside the excitatory synapses, it is possible to analyze the synaptic
efficacy of inhibitory synapses. This was possible by changing the
neuron parameters in order to have it spiking at a fixed frequency. The
chosen frequency in this recording was \~100 Hz and the input frequency
of the inhibitory stimulus was also 100 Hz.

![histogram\_4cores\_inhF\_100\_Hz.png](media/image168.png){width="6.267716535433071in"
height="3.486111111111111in"}

**Figure 5.7.5.1** Histograms of the synaptic efficacies for different
cores (having different parameters).

It was possible to achieve also with the inhibitory synapses different
levels of synaptic efficacies. In this case, a synaptic efficacy of 0.25
means that the inhibition will reduce the frequency of 0.25. For
example, if to an hypothetical neuron spiking autonomously with a
frequency of 100 Hz, a train of inhibitory inputs (100 Hz ) with an
inhibitory synaptic efficacy of 0.25 is applied, the resulting frequency
will be 75 Hz.

![Screen Shot 2017-04-10 at
10.40.26.png](media/image148.png){width="6.267716535433071in"
height="5.361111111111111in"}

**Figure 5.7.5.2** Parameters of the neuron and synapses used in the
recording of the data used in Figure 5.10.5.1

6. Connecting a Davis240B/C Dynamic Vision Sensor to the Dynap-se board via the GPIO/AER
========================================================================================

Connect the Davis240B/C to the Dynap-se via the GPIO AER connector as
shown in the following figure.

![](media/image88.png){width="4.796875546806649in"
height="2.9004363517060368in"}

**Figure. 7.0.1 AER Connectors. Left: Davis240B/C, Right: Dynap-se
rev1.**

In order to connect a Davis240B/C sensor with the Dynap-se via the AER
GPIO you will need to first set the davis sensor to AER mode. This can
be done with jAER or libcaer, as described in the Davis240B/C hw user
guide, in [[this
section]{.underline}](https://inilabs.com/support/hardware/davis240/#h.wqshnteisxep).
In addition you will need to progra with Flashy the correct logic file,
if you have a Davis240C the file is [[this
one]{.underline}](https://github.com/inilabs/devices/blob/master/logic/SystemLogic2/bin/Spartan6_Dynapse/SystemLogic2_Spartan6_Dynap-se_Davis240B.xsvf),
otherwise for the Davis240B the file is [[this
one]{.underline}](https://github.com/inilabs/devices/blob/master/logic/SystemLogic2/bin/Spartan6_Dynapse/SystemLogic2_Spartan6_Dynap-se_Davis240C.xsvf).

There is a basic cAER module that will let you select the connectivity
between the Davis240B/C pixels and a single Dyanp-se chip, the
"[[SYNAPSERECONFIG]{.underline}](https://github.com/inilabs/caer/tree/master/modules/synapsereconfig)"
filter. Remember to enable it when compiling cAER. Read next section for
information about different mapping mode of operations. An example of
configuration that uses Davis240B/C and the dynap-se can be found
[[here]{.underline}](https://github.com/inilabs/caer/blob/master/docs/davis2dynapse-config.xml).
Just copy that file as your default caer-config.xml from the caer folder
(the root of your github checkout) just type

\$ cp docs/davis2dynapse-config.xml caer-config.xml

At the next execution of caer you will have the synapsereconfig filter
enable and chained correctly to other dynap-se basic modules.

6.1 Control Davis240B/C to Dynap-se mapping: SynapseReconfig Filter 
--------------------------------------------------------------------

To start the mapping please toggle the "runDVS" bool parameters on the
GUI. (or the runDvs parameter from caer-ctl utility). Note that when
toggling the "runDVS" button you will activate mapping, however you
should make sure that the content of the CAM is programmed to zero on
the destination Dynap-se chip. If the CAM are not cleared, the
synapsereconfig filter will slowly reprogram all CAMs as the filter
programs the destination address every time an event is transmitted from
the Davis240B/C. The reprogramming sequence is the following: 1) an
event is transmitted by the Davis240B/C, 2) the FPGA sends a programming
CAM event with the chosen weight 3) the FPGA sends the actual event 4)
the FPGA send a clear CAM event. As these 4 events are digital events,
these can be send in a cycle that takes less than a microseconds.

![](media/image162.png){width="5.6875in" height="4.333333333333333in"}

Mapping is possible in two distinct ways: 1) using a single global
kernel, or 2) using many sram kernels.

### Using a global kernel file

The easiest mapping between the Davis240B/C and the Dynap-se chip is
achieved using a global kernel. This can be defined as a single kernel
of dimension 8x8 (64 as the synapses per neuron). Note that the global
file kernel input path "*KernelsDVS.csv"* is a relative path from the
location of where caer-bin has been started.

If you wish to not type any path (as in the image above), from the caer
root path (main checkout folder of github), just type:

\$ cp modules/synapsereconfig/data/KernelsDVS.csv KernelsDVS.csv

![](media/image167.png){width="6.267716535433071in"
height="2.7777777777777777in"}

**Figure. 6.1 Global Kernel mapping. Two kernels for ON and OFF events
are used. The kernels are applied with a stride of 8 pixels. The output
of one kernel map is directed to a single neuron (8x8 pixels on 64
synapses). The destination neurons on the Dynap-se chip are organized in
a map of 22x30.**

This kernel map is defined for ON and OFF events. This means that two
maps of 8x8 are present in the file: one will be applied for polarity ON
events, while the second one will be applied for OFF polarity events.
The default global kernel can be found in
*modules/synapsereconfig/data/KernelsDVS.csv*

Lines 1:8 represents the entry for the ON events (pink), while lines
9:16 are the weights for the off events (blue).

  1   1    1    1    1   1    1   1
  --- ---- ---- ---- --- ---- --- ----
  1   1    1    1    1   1    1   1
  1   1    1    1    1   1    1   -1
  1   2    1    1    0   1    1   1
  1   1    1    0    1   -1   1   1
  1   1    1    0    1   1    1   1
  1   -2   1    -1   1   -2   1   1
  1   1    -1   1    1   1    1   1

  1   1   1   1    1    1   1    1
  --- --- --- ---- ---- --- ---- ---
  1   1   1   0    1    1   1    1
  1   1   1   1    1    1   1    1
  1   1   1   1    -2   1   1    1
  1   2   1   -1   1    1   1    1
  1   1   1   0    1    1   -1   1
  1   1   1   1    1    1   1    1
  1   1   1   1    1    1   1    1

Weights can have the following values:

  2    **Exc Slow**
  ---- --------------------------
  1    **Exc Fast**
  0    **None / No connection**
  -1   **Inh Fast**
  -2   **Inh Slow**

### Using SRAM kernels

In this mode of operation an on-board SRAM is used to store the weights
for all the kernels, the kernels have fixed size (8x8), with fixed
stride (stride=8). The SRAM content is addressed by decoding the x,y
polarity from Davis240B/C.

The mapping is achieved using the following procedure:

1)  An event is emitted by the Davis240B/C, pixel ***p(x,y)*** of
    > polarity ***pol***

2)  The sram address, which maps the source Davis240B/C pixel is one of
    > the two addresses computed as the following pseudo-code:

*TwoAddresses* = x\[7\] \|\| NOT(y\[7\]) \|\| x\[6:3\] \|\|
NOT(y\[6:3\]) \|\| x\[2:0\]\|\| NOT(y\[2:1\])

Index = y\[0\] \|\| Pol

Weight =*TwoAddresses*\[Index\]

3)  The Sram word is of 12 bits. These bits represent the *TwoAddresses*
    > with 2 polarity options (ON/OFF) for each of the single address.
    > At this stage, one address and one polarity is selected, the
    > content of the sram represents the weight value that will be used
    > to stimulate the destination synapse (weight is in the interval
    > \[-2:2\])

                 **Address 0**   **Address 1**             
  -------------- --------------- --------------- --------- ---------
  **Polarity**   ON              OFF             ON        OFF
  **Bits**       \[9:11\]        \[6:8\]         \[3:5\]   \[0:2\]

4)  Once the weight is read, the event is transmitted to the synapse of
    > the target neuron. See Figure: 10.2.

![](media/image80.png){width="6.267716535433071in"
height="1.7916666666666667in"}

**Figure. 6.2 Sram Kernel mapping. 2x22x30 kernels for ON and OFF events
are used. The kernels are applied with a stride of 8 pixels. The output
of one kernel map is directed to a single neuron (8x8 pixels on 64
synapses). The destination neurons on the Dynap-se chip are organized in
a map of 22x30.**

To use this mode of operation prepare a csv file as the one provided in
the example modules/synapsereconfig/data/SramKernels.csv

The file contains 1024 lines with 128 weights (\[-2:2\]) per line
separated by a comma with no spaces.

Every line in the file represent all the weights for one target neuron,
1024 target neurons are possible.

Every line contains 128 weight entries of which 64 represent the weights
for ON kernels map while the other 64 represent the weights for OFF
kernel map (remember that the Davis240B/C has ON and OFF spikes and that
we apply different kernels for ON and OFF events).

The \[0,0\] index in the kernel map is the lower left corner. The
indexes first increase towards the right then in the up dimension (back
from the most left column).

In a line, the weights are organized as

TargetNeu0 (First Line in file):
ON~0~,OFF~0~,ON~1~,OFF~1~,ON~2~,OFF~2~,\... ON~128~,OFF~128~

TargetNeu1 (First Line in file):
ON~0~,OFF~0~,ON~1~,OFF~1~,ON~2~,OFF~2~,\... ON~128~,OFF~128~

...

TargetNeu1023 (First Line in file):
ON~0~,OFF~0~,ON~1~,OFF~1~,ON~2~,OFF~2~,\... ON~128~,OFF~128~

The target neuron 0 is also found at the lower left corner of the chip.
The neuron index first increase towards the right then in the up
dimension (back from the most left column).

7. Troubleshooting 
===================

7.1 Failed to send chip config, USB transfer failed on verification
-------------------------------------------------------------------

If you start cAER before that the board has booted and the ACT led at in
the front panel is fully switched on, you might see the following output

federico@zfractal:/media/federico/space/inilabs/caer\$ ./caer-bin

2017-01-23 14:09:15 (TZ+0100): NOTICE: Logger: Initialization successful
with log-level 5.

2017-01-23 14:09:15 (TZ+0100): NOTICE: 1-DYNAPSEFX2: Dynap-se ID-1
SN-00000008 \[3:30\] \-\-- ID: 1, Master: 1, Logic: -1, ChipID: -1.

2017-01-23 14:09:15 (TZ+0100): CRITICAL: Dynap-se ID-1 SN-00000008
\[3:30\]: **Failed to send chip config, USB transfer failed on
verification.**

To fix this, please unplug and replug the USB2.0 cable. Wait for the
'Act' LED to be fully switched on, and then start cAER.

This problem can also occur if the USB driver is old and not up-to-date
or the USB host controller fails. In such cases it might be worth trying
using a much shorter USB2.0 usb cable, we noticed that on some old
laptops the DYNAP-SE board works fine only with 30 cm USB cables (the
one that we include in the box is 1.5m long).

This problem can also be caused by a miss configuration of the jumper at
the back of the board. For DYNAP-SE-1 check that all the jumpers are
configured as the following picture.

![](media/image144.jpg){width="6.267716535433071in"
height="5.388888888888889in"}

**Figure 7.0.1**: default jumpers configuration. No cables are used to
connect multiple boards, and the FPGA is taking care of handshaking the
AER south output interface of the DYNAPSE\_U2 chip.

![](media/image141.png){width="5.780635389326334in"
height="3.2552088801399823in"}

**Figure 7.0.2**: default jumpers configuration. Power over USB..

7.2 CRITICAL: dynapseOpen: Failed to open Dynap-se device
---------------------------------------------------------

If you forget to plug in the USB to your computer you might see
something like this.

./caer-bin

2017-02-19 14:12:37 (TZ+0100): NOTICE: Logger: Initialization successful
with log-level 5.

2017-02-19 14:12:37 (TZ+0100): CRITICAL: dynapseOpen: Failed to open
Dynap-se device.

2017-02-19 14:12:38 (TZ+0100): CRITICAL: dynapseOpen: Failed to open
Dynap-se device.

To fix it. Stop cAER, plug the USB into your machine, wait till the ACT
light switched on, then start cAER again.

This problem can also occur if the USB driver is old and not up-to-date
or the USB host controller fails. In such cases it might be worth trying
using a much shorter USB2.0 usb cable, we noticed that on some old
laptops the DYNAP-SE board works fine only with 30 cm USB cables (the
one that we include in the box is 1.5m long).

7.3 Wrong configuration at startup
----------------------------------

The configuration is stored in the caer-config.xml file. If you remove
it, the default configuration is restored.
