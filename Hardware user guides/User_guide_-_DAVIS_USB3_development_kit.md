---
title: '[]{#_qdoi277fh3h7 .anchor}User Guide - DAVIS USB3 development kit'
---

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [[support
forum]{.underline}](https://groups.google.com/d/forum/davis-users/). If
your question involves confidential information, however, please use
[support@inilabs.com]{.underline}. First you could try our*
*[[troubleshooting
guide]{.underline}](https://www.inilabs.com/support/faq/).*

This user guide covers the USB3 development kit, which can be used with
a range of prototype chips, including:DAVIS346BColor/Mono, and
DAVIS640Color/Mono.

![](media/image18.jpg){width="6.25in" height="4.6875in"}

If you are confused about which device you have, please see the
[[support overview]{.underline}](http://www.inilabs.com/support).

[[Introduction]{.underline}](#introduction)

[[Getting started]{.underline}](#getting-started)

[[Chip classes]{.underline}](#chip-classes)

> [[Install USB driver]{.underline}](#install-usb-driver)
>
> [[Linux]{.underline}](#linux)
>
> [[Mac Os X]{.underline}](#mac-os-x)
>
> [[Windows (win7, win 8)]{.underline}](#windows-win7-win-8)

[[Serial number]{.underline}](#serial-number)

[[Connectors]{.underline}](#connectors)

[[Switches and jumpers]{.underline}](#switches-and-jumpers)

[[Synchronization and external
input/output]{.underline}](#synchronization-and-external-inputoutput)

[[Daughterboards]{.underline}](#daughterboards)

[[Optics]{.underline}](#optics)

[[Recorded data format]{.underline}](#recorded-data-format)

[[Firmware upgrades]{.underline}](#firmware-upgrades)

[[DAVIS640Color example
output]{.underline}](#davis640color-example-output)

Introduction
============

This user guide covers the USB3 development kit, which can be used with
a range of prototype chips, including: DAVIS240C, DAVIS346BColor/Mono,
and DAVIS640Color/Mono.

This device is a prototype in active development. To ensure the best
results out of your prototype, obtain the latest version of the jAER
software and preferably use an integrated developer environment (IDE)
(e.g. netbeans) to run the latest code base.

The camera output can be processed by jAER or cAER or libcaer; see
[[inilabs software user
guides]{.underline}](http://inilabs.com/support/software/). The Getting
Started guide here covers use in jAER.

Getting started
===============

1.  Unpack your camera. You should have a motherboard, a duaghterboard
    > with chip, a lens mount and C-CS adapter ring, a mini tripod and a
    > USB3 A - microB cable.

2.  **Make sure that the configuration of the device (switches; jumpers)
    > is correct.** [[See below]{.underline}](#switches-and-jumpers).

3.  Install jAER, following the instructions in the [[jAER user
    > guide]{.underline}](http://www.inilabs.com/support/jaer).

4.  Install drivers - see the [[install USB
    > driver]{.underline}](#install-usb-driver) section below.

5.  Run jAER.

6.  Choose the correct chip class ([[see
    > below]{.underline}](#chip-classes))

7.  Choose the correct interface, which is *DAVIS FX3 xxxxxxxx*

8.  Load a standard set of biases, as described in the [[jAER user
    > guide]{.underline}](http://www.inilabs.com/support/jaer); the
    > correct biases are found in: jAER/biasgenSettings/ and then the
    > appropriate subfolder, depending on the device you have.

Chip classes
============

  **Chip**                                                       **Class**
  -------------------------------------------------------------- -----------------------------------------------
  DAVIS240C                                                      eu.seebetter.ini.chips.davis.DAVIS240C
  DAVIS346Mono                                                   eu.seebetter.ini.chips.davis.Davis346B
  DAVIS346Color                                                  eu.seebetter.ini.chips.davis.Davis346BColor\*
  DAVIS640Mono                                                   eu.seebetter.ini.chips.davis.Davis640
  DAVIS640Color                                                  eu.seebetter.ini.chips.davis.Davis640Color\*
  Different chip? Please ask us to fill in this information ..   

\*Note that colour rendering in jAER is rather resource intensive (at
time of writing), limiting the frame rate which can effectively be
rendered. An alternative is to use the chip class for the mono version
of the chip, if you do not need to render colour.

To assist with rendering, please increase the rendering buffer size to
the maximum.

Install USB driver
------------------

Begin by plugging in the DAVIS240 camera into your computer.

### Linux 

Access to DAVIS devices under Linux is provided by the standard kernel
USB drivers and the libusb library. The library is already part of the
libusb4java packages and requires no further installation.

You must grant your user access to the USB device. This can be achieved
by creating, as root, an udev rule file such as:

/etc/udev/rules.d/65-inilabs.rules

You can find ready-to-use udev rules files in [[our Git
repository]{.underline}](https://github.com/inilabs/devices/tree/master/drivers/linux/udev-rules).

If you're using a distribution that supports SELinux tags, such as
Fedora, please use the udev rules files in the selinux/ sub-folder.

To reload the udev system without rebooting type, as root:

\$ udevadm control \--reload-rules

or, for newer udev versions:

\$ udevadm control \--reload

Sometimes, it may also help to run:

\$ udevadm control \--trigger

Or otherwise reboot.

Now unplug and replug the DAVIS240 camera into your computer. You're
done!

### Mac Os X

Access to DAVIS devices under Mac OS X is provided by the standard
kernel USB drivers and the libusb library. The library is already part
of the libusb4java packages and requires no further installation. Users
should automatically be able to access USB devices.

### Windows (win7, win 8)

Installation should proceed automatically and after several seconds you
should see a message in the control panel say "Device driver installed
successfully".

If this doesn't work you will need to use the "zadig" tool to install
the correct driver. In this case, please follow the instructions for
zadig in the [[reflashing
guide]{.underline}](http://www.inilabs.com/support/reflashing).

Serial number
=============

For support, we may ask you to identify the device by serial number.
This image shows you where to find it:

![](media/image15.jpg){width="6.25in" height="4.6875in"}

Connectors
==========

![](media/image11.png){width="6.520833333333333in"
height="4.847222222222222in"}

The CAVIAR compatible bank can also be used for connecting to TrueNorth;
some daughterboards also offer a dedicated TrueNorth connector.

Ask us for specific instructions if you wish to use any port other than
the USB3.

Aux power: as of writing we have only tested this with a 5V supply - ask
us before you use this.

Switches and jumpers
====================

The 4 bank power switches as shown above must all be set to position 1
(for 3.3V signals to daughterboard). **BE SURE TO CHECK THIS, AS IT'S
EASY TO JOG THEM**.

![](media/image13.jpg){width="6.520833333333333in"
height="2.5416666666666665in"}

The jumpers should all be pushed to the last left position.

J2-J9 (power supplies from motherboard to daughterboard) must all be
connected.

J17-J19 (supply from power regulators to motherboard) must all be
connected.

J38 selects the power level for the synchronisation ports.

J39 Must be jumpered from "Hold" to "+1.8VDD", unless the flash is
corrupted and you need to hold it in reset in order to reflash from the
FX3. In addition, when uploading the firmware to RAM with flashy remove
the jumper J39.

![](media/image14.jpg){width="6.520833333333333in"
height="5.930555555555555in"}

Default Jumper settings for DAVIS640

Synchronization and external input/output
=========================================

The synchronization and external I/O signals are mapped onto the
CAVIAR/AER connector. The following image shows the connector and how
the pins are mapped:

It is also possible to map the synchronization pins of the board to the
jack Pink (OUT) and Black (IN). Boards with serial numbers: MB-010
onwards have this option.

Daughterboards
==============

Which daughterboard you should have:

  **Chip**                                                       **Daughterboard**
  -------------------------------------------------------------- -------------------
  DAVIS240C                                                      V7
  DAVIS346Mono/Color                                             V9I2
  DAVIS640Mono/Color                                             V10I2
  Different chip? Please ask us to fill in this information ..   

Here is a picture of the motherboard with a V10I2 daughterboard, with
DAVIS640 chip installed:

![](media/image20.jpg){width="6.520833333333333in"
height="4.888888888888889in"}

Note the TrueNorth port to the top right.

Note also the jumpers for power to the left and right of the chip. These
must both be connected.

Optics
======

The lens mount is designed for CS mount lenses. If you have a C-mount
lens (which can be identified from a marking on the lens), you need to
use the C to CS converter adapter ring (supplied with the device) that
moves the lens further from the chip.

+---------+---------+---------+---------+---------+---------+---------+
| Chip    | Array   | Imager  | Suggest | Angular | Angular | Angular |
|         | dimensi | min     | ed      | field   | field   | field   |
|         | ons     | size    | lens    | of view | of view | of view |
|         | (mm)    | (inch)  | focal   |         |         |         |
|         |         |         | lengths | horizon | vertica | diagona |
|         |         |         |         | tal     | l       | l       |
|         |         |         | (mm)    |         |         | (deg)   |
|         |         |         |         | (deg)   | (deg)   |         |
+=========+=========+=========+=========+=========+=========+=========+
| DAVIS24 | 4.44x3. | 1/3     | 4.5     | 53      | 41      | 63      |
| 0C      | 33      |         |         |         |         |         |
+---------+---------+---------+---------+---------+---------+---------+
|         |         |         | 6       | > 41    | > 31    | > 50    |
+---------+---------+---------+---------+---------+---------+---------+
| DAVIS34 | 6.4x4.8 | 1/2     | 6       | > 56    | > 44    | > 67    |
| 6       | 1       |         |         |         |         |         |
+---------+---------+---------+---------+---------+---------+---------+
|         |         |         | 8       | > 44    | > 33    | > 53    |
+---------+---------+---------+---------+---------+---------+---------+
| DAVIS64 | 11.84x8 | 1       | 12      | > 53    | > 41    | > 63    |
| 0       | .88     |         |         |         |         |         |
+---------+---------+---------+---------+---------+---------+---------+
|         |         |         | 16      | > 41    | > 31    | > 50    |
+---------+---------+---------+---------+---------+---------+---------+

Recorded data format
====================

Please have a look at the [[AEDAT format
documentation]{.underline}](http://inilabs.com/support/software/fileformat).

Firmware upgrades
=================

If we advise you to upgrade your firmware, please read the [[reflashing
guide]{.underline}](http://www.inilabs.com/support/reflashing).

**DAVIS640 Example outputs**

YouTube video of output data:
[[https://www.youtube.com/watch?v=\_ihy0iOavfM]{.underline}](https://www.youtube.com/watch?v=_ihy0iOavfM)

With default cAER bias settings

![](media/image10.png){width="6.520833333333333in"
height="1.9583333333333333in"}

jAER output with biases
([[https://github.com/SensorsINI/jaer/blob/master/biasgenSettings/Davis640/DAVIS640\_TestExp.xml]{.underline}](https://github.com/SensorsINI/jaer/blob/master/biasgenSettings/Davis640/DAVIS640_TestExp.xml))

![](media/image17.png){width="6.520833333333333in"
height="3.5972222222222223in"}

DAVIS640Color example output
============================

Input:

![](media/image19.png){width="6.520833333333333in"
height="3.9027777777777777in"}

Output, in presence of gradient of illumination:

![](media/image12.png){width="6.520833333333333in"
height="5.430555555555555in"}
