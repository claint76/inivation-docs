---
title: '[]{#_qdoi277fh3h7 .anchor}User Guide - DAVIS240'
---

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [[support
forum]{.underline}](https://groups.google.com/d/forum/davis-users/). If
your question involves confidential information, however, please use
[support@inilabs.com]{.underline}. First you could try our*
*[[troubleshooting
guide]{.underline}](https://www.inilabs.com/support/faq/).*

This user guide covers DAVIS240 prototypes (DAVIS240A, DAVIS240B, and
DAVIS240C):

![](media/image19.jpg){width="3.454705818022747in"
height="2.963542213473316in"}

If you are confused about which device you have, please see the
[[support
overview]{.underline}](http://www.inilabs.com/support/overview).

[[Introduction]{.underline}](#introduction)

[[Getting started]{.underline}](#getting-started)

> [[Install USB driver]{.underline}](#install-usb-driver)
>
> [[Linux]{.underline}](#linux)
>
> [[Mac Os X]{.underline}](#mac-os-x)
>
> [[Windows (win10, win8, win7)]{.underline}](#windows-win10-win8-win7)

[[Serial number]{.underline}](#serial-number)

[[Optics]{.underline}](#optics)

> [[Computations of Field of
> View]{.underline}](#computations-of-field-of-view)

[[DAVIS240B array layout]{.underline}](#davis240b-array-layout)

[[Recorded data format]{.underline}](#recorded-data-format)

[[Accessories]{.underline}](#accessories)

> [[Connectors]{.underline}](#connectors)
>
> [[DAVIS to CAVIAR adapter]{.underline}](#davis-to-caviar-adapter)
>
> [[DAVIS AER cables]{.underline}](#davis-aer-cables)

[[Receiving address-events directly from the
chip]{.underline}](#receiving-address-events-directly-from-the-chip)

[[Firmware upgrades]{.underline}](#firmware-upgrades)

[[Dimensions]{.underline}](#dimensions)

> [[Overview]{.underline}](#overview)
>
> [[Bottom board]{.underline}](#bottom-board)
>
> [[Top board]{.underline}](#top-board)

Introduction
============

This user guide covers DAVIS240A, DAVIS240B, and DAVIS240C devices
(which contain the SBRet10, SBRet20, and SBRet21 vision sensor ICs).
These prototypes have USB2.0. The DAVIS camera is a beta prototype in
active development. To ensure the best results out of your DAVIS camera,
obtain the latest version of the jAER software and preferably use an
integrated developer environment (IDE) (e.g. netbeans) to run the latest
code base.

For specifications see the [[specifications
page]{.underline}](https://inilabs.com/products/dynamic-vision-sensors/specifications/).

The DAVIS240 cameras are USB devices.

The camera output can be processed by jAER or cAER or libcaer; see
[[inilabs software user
guides]{.underline}](http://inilabs.com/support/software/). The Getting
Started guide here covers use in jAER.

Getting started
===============

1.  Unpack your camera. You should have a DAVIS camera with C-mount
    > lens, C-CS adapter ring, mini tripod and USB A - microB cable.

2.  Install jAER, following the instructions in the [[jAER user
    > guide]{.underline}](http://www.inilabs.com/support/jaer).

3.  Install drivers - see the [[install USB
    > driver]{.underline}](#install-usb-driver) section below.

4.  Run jAER, choose the correct chip class, choose the correct
    > interface and load a standard set of biases, as described in the
    > [[jAER user
    > guide]{.underline}](http://www.inilabs.com/support/jaer):

    a.  The correct chip class is
        > eu.seebetter.ini.chips.davis.DAViS240(A/B/C). Choose the A, B
        > or C depending on the camera version, e.g. DAVIS240C.

    b.  The correct interface is *DAVis FX xxxxxxxx.*

    c.  The correct biases are found in:
        > jAER/biasgenSettings/Davis240a/bc depending on the device you
        > have.

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
repository]{.underline}](https://github.com/inilabs/devices-bin/tree/master/drivers/linux/udev-rules).
Here they are:

\# All DVS/DAVIS systems

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", MODE=\"0666\"

\# eDVS 4337

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"0403\", ATTR{idProduct}==\"6014\",
MODE=\"0666\"

If you're using a distribution that supports SELinux tags (i.e. Fedora
since Fedora Core 2; Debian as of the etch release; Ubuntu as of 8.04
Hardy Heron; openSUSE contains SELinux \"basic enablement\" as of
version 11.1; SUSE Linux Enterprise 11 features SELinux as a
\"technology preview\"), then please use the udev rules files in the
selinux/ sub-folder. These are:

\# All DVS/DAVIS systems

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", TAG+=\"uaccess\"

\# eDVS 4337

SUBSYSTEM==\"usb\", ATTR{idVendor}==\"0403\", ATTR{idProduct}==\"6014\",
TAG+=\"uaccess\"

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

### Windows (win10, win8, win7)

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

![](media/image26.jpg){width="6.520833333333333in"
height="3.9027777777777777in"}

It is a 12 digit number of the form: "6000840100NN". We only use the
last two digits.

Optics
======

The lens mount is designed for CS mount lenses. If you have a C-mount
lens (which can be identified from a marking on the lens), you need to
use the C to CS converter adapter ring (supplied with the device) that
moves the lens further from the chip. The chip requires lens designed
for 1/3 inch imagers (imager array area is 3.33×4.44mm).

The field of view (FOV) depends on the focal length L of the lens and
the size W of the pixel array. It is computed from geometrical optics
not accounting for any lens distortion.The angular FOV (AFOV) is given
by:

AFOV=2\*atan(W/2/L)

Where *W* is the array width \[ (number of pixels minus 1 ) \* pixel
pitch \] and *L* is the focal length. The linear FOV (LFOV) at a
distance *D* from the lens is given simply by similar triangles:

LFOV=D\*W/L

The pixel array measures:

-   Width: 240 pixels x 18.5 um/pixel = 4.44 mm

-   Height: 180 pixels x 18.5 um/pixel = 3.33 mm

The following table shows the horizontal and vertical field of view in
degrees and its size at various distances for different common focal
lengths.

Computations of Field of View
-----------------------------

+---------+---------+---------+---------+---------+---------+---------+
| DAVIS24 |         |         |         |         |         |         |
| 0       |         |         |         |         |         |         |
+=========+=========+=========+=========+=========+=========+=========+
| Lens    | Angular | Angular | Angular | Linear  |
| focal   | field   | field   | field   | field   |
| length  | of view | of view | of view | of view |
|         |         |         |         |         |
| (mm)    | horizon | vertica | diagona | horizon |
|         | tal     | l       | l       | tal     |
|         |         |         | (deg)   | (cm)    |
|         | (deg)   | (deg)   |         |         |
+---------+---------+---------+---------+---------+---------+---------+
|         |         |         |         | distanc |         |         |
|         |         |         |         | e       |         |         |
|         |         |         |         | (cm)    |         |         |
+---------+---------+---------+---------+---------+---------+---------+
|         |         |         |         | *10*    | *30*    | *100*   |
+---------+---------+---------+---------+---------+---------+---------+
| 3.5     | 64.6    | 50.6    | 76.6    | 12.6    | 37.9    | 126.3   |
+---------+---------+---------+---------+---------+---------+---------+
| 4.5     | 52.3    | 40.4    | 63.1    | 9.8     | 29.5    | 98.3    |
+---------+---------+---------+---------+---------+---------+---------+
| 6       | 40.5    | 30.9    | 49.4    | 7.4     | 22.1    | 73.7    |
+---------+---------+---------+---------+---------+---------+---------+
| 12      | 20.9    | 15.7    | 25.9    | 3.7     | 11.1    | 36.8    |
+---------+---------+---------+---------+---------+---------+---------+

\* Default length is 4.5mm lens

DAVIS240B array layout
======================

There are 20 APS test pixels to the left. The APS test pixels are
typically slightly overexposed, compared to the main array, with the
effect dependent on illumination and exposure delay. There are 50 DVS
test pixels to the right, in 4 bands, with different statistical
properties. These are turned off for normal operation, although they can
be enabled, as shown below. Some of the DVS test pixels affect the
performance of the APS readout. Thus the area of the array which is
completely homogeneous is 190 x 180 for DVS and 170 x 180 for APS and
DVS combined. The differences between these columns can be seen in this
image:

![](media/image21.png){width="6.520833333333333in"
height="4.888888888888889in"}

Recorded data format
====================

When data is logged, a file of type ".aedat " is created. Here is a
summary of the format. A ".aedat" file contains headers, where each
header line starts with \'\#\' and ends with the hex characters 0x0D
0x0A (CRLF, windows line ending). Then there are a series of 8-byte
words, of the following format:

![](media/image5.png){width="7.515625546806649in"
height="1.3376760717410323in"}

Note: An IMU sample is a subclass of an APS type event. 7 words are sent
in series, these being 3 axes for accel, temperature, and 3 axes for
gyro - look at jAER's IMUSample class for more info.

Accessories
===========

Connectors
----------

There are these connectors to the sides of the front face of the device:

![](media/image23.png){width="6.520833333333333in"
height="5.013888888888889in"}

These shows what these connectors are connected to:

![](media/image20.png){width="6.520833333333333in" height="3.7916666666666665in"}
=================================================================================

(Note that in a previous version of this documentation, AERMonAdd6 and
AERMonAdd7 were accidentally swapped)

![](media/image22.png){width="4.362755905511811in"
height="2.0989588801399823in"}

DAVIS to CAVIAR adapter
-----------------------

Optionally available is this small PCB that translates the DAVIS AER
connector to a full CAVIAR compatible connector:

![](media/image24.png){width="6.520833333333333in"
height="2.9166666666666665in"}

If you prefer to design your own adapter, a perfect match for the 40
pins connector on the DAVIS is a SAMTEC FLE-120-01-G-DV

DAVIS AER cables
----------------

The SAMTEC FFSD-20-D-X-01-N can connect the DAVIS AER connector with
another device:

![](media/image7.png){width="2.5in" height="1.875in"}

-   The SAMTEC FFSD-20-D-X-01-N-R can connect DAVIS AER connector with
    > other device with one of the connectors inverted.

-   The SAMTEC FFSD-08-D-X-01-N can connect the DAVIS I2C and POWER
    > connector with other device.

In the SAMTEC product codes, X is the length of the cable in inches.

Receiving address-events directly from the chip
===============================================

If you use the above connector to directly access the AER bus from the
DAVIS chip, the pins are at 3.3V. In order to handshake directly with
the device, you must first put the CPLD's Ack pin in tristate (otherwise
the CPLD will continue to try to consume events).

You do this in jAER by ticking the "Enable external AER control" tick
box on the "Chip configuration" tab of the "Hardware config / Biases"
window:

![](media/image9.png){width="5.822916666666667in" height="7.03125in"}

Alternatively, you can enable AER external control using libcaer as
shown in this c++ code example
[[here]{.underline}](https://github.com/inilabs/libcaer/blob/master/examples/davis_enable_aer.cpp).

Firmware upgrades
=================

If we advise you to upgrade your firmware, please read the [[reflashing
guide]{.underline}](http://www.inilabs.com/support/reflashing).

Dimensions
==========

Overview
--------

![](media/image18.png){width="6.520833333333333in"
height="4.555555555555555in"}

Bottom board
------------

![](media/image25.png){width="3.9739588801399823in"
height="3.907587489063867in"}

Top board
---------

![](media/image12.png){width="3.3975656167979005in"
height="2.838542213473316in"}
