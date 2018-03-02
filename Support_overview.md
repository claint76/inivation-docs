---
title: '[]{#_tfm8jpm5dgfd .anchor}Support overview'
---

We support all of the products we sell in their intended usage as
research prototypes. We also support the open-source event-based
software platforms jAER and cAER and some related software.

We [[use]{.underline}](https://groups.google.com/d/forum/davis-users)
[[several]{.underline}](https://groups.google.com/d/forum/jaer-users)
[[Google]{.underline}](https://groups.google.com/d/forum/caer-users)
[[Groups]{.underline}](https://groups.google.com/d/forum/dynapse-users)
for all public questions and discussions regarding inivation products.
If your question involves confidential information, however, please use
[[support@inivation.com]{.underline}](mailto:support@inilabs.com). First
you could try our [[troubleshooting
guide]{.underline}](http://www.inilabs.com/support/faq).

This document explains where to find help, with links to our user
guides.

> [[Overview of devices and user
> guides]{.underline}](#overview-of-devices-and-user-guides)
>
> [[Software for event
> processing]{.underline}](#software-for-event-processing)
>
> [[What are the different ways I can work with event data from my
> device?]{.underline}](#what-are-the-different-ways-i-can-work-with-event-data-from-my-device)
>
> [[jAER]{.underline}](#jaer)
>
> [[cAER]{.underline}](#caer)
>
> [[MATLAB]{.underline}](#matlab)
>
> [[eDVS codebase]{.underline}](#edvs-codebase)
>
> [[Unsupported software]{.underline}](#unsupported-software)
>
> [[Additional user guides]{.underline}](#additional-user-guides)

Overview of devices and user guides
===================================

If you are not sure which device you have, use this table to find the
correct user guide:

+-----------------------+-----------------------+-----------------------+
| **Image**             | **Name and brief      | **User guide**        |
|                       | description**         |                       |
+=======================+=======================+=======================+
| ![](media/image12.jpg | **DVS128 **           | [[http://www.inivatio |
| ){width="1.8906255468 |                       | n.com/support/dvs128] |
| 06649in"              | A 128x128 DVS in a    | {.underline}](http:// |
| height="1.89062554680 | strong plastic case,  | www.inivation.com/sup |
| 6649in"}              | with a USB 2.0        | port/dvs128)          |
|                       | interface, CS-mount,  |                       |
|                       | tripod mount and      |                       |
|                       | inter-camera          |                       |
|                       | synchronisation pins. |                       |
+-----------------------+-----------------------+-----------------------+
| ![DVS128\_PAER        | **DVS128\_PAER**      | [[http://www.inivatio |
| camera](media/image10 |                       | n.com/support/dvs128p |
| .jpg){width="1.990694 | A CS-mount bare-board | aer]{.underline}](htt |
| 4444444445in"         | camera, with a        | p://www.inivation.com |
| height="1.49479221347 | 128x128 DVS and with  | /support/dvs128paer)  |
| 33158in"}             | parallel AER          |                       |
|                       | interface (Rome and   |                       |
|                       | CAVIAR standards).    |                       |
+-----------------------+-----------------------+-----------------------+
| ![](media/image8.jpg) | **eDVS**              | [[http://www.inivatio |
| {width="2.01041666666 |                       | n.com/support/edvs]{. |
| 66665in"              | A credit-card-sized   | underline}](http://ww |
| height="1.15277777777 | S-mount PCB with a    | w.inivation.com/suppo |
| 77777in"}             | 128x128 DVS embedded  | rt/edvs)              |
|                       | with a 4337           |                       |
|                       | microcontroller, with |                       |
|                       | UART connectors,      |                       |
|                       | on-board IMU and      |                       |
|                       | microSD, PWM outputs, |                       |
|                       | and optional network  |                       |
|                       | adapter.              |                       |
+-----------------------+-----------------------+-----------------------+
| ![](media/image11.jpg | **Pushbot**           | [[http://www.inivatio |
| ){width="2.0104166666 |                       | n.com/support/edvs]{. |
| 666665in"             | A robotic platform;   | underline}](http://ww |
| height="2.75in"}      | ideal for working     | w.inivation.com/suppo |
|                       | with the eDVS to      | rt/edvs)              |
|                       | quickly prototype     |                       |
|                       | sensing behaving      |                       |
|                       | systems.              |                       |
+-----------------------+-----------------------+-----------------------+
| ![](media/image4.jpg) | **DAVIS240A/B/C**     | [[http://www.inivatio |
| {width="2.01041666666 |                       | n.com/support/davis24 |
| 66665in"              | A CS-mount bare-board | 0]{.underline}](http: |
| height="1.91666666666 | camera, with a        | //www.inivation.com/s |
| 66667in"}             | 240x180 DAVIS (DVS    | upport/davis240)      |
|                       | plus simultaneous     |                       |
|                       | global-shutter        |                       |
|                       | intensity frames) and |                       |
|                       | word-serial AER (10x  |                       |
|                       | higher data rates).   |                       |
|                       | It has a USB 2.0      |                       |
|                       | interface (direct AER |                       |
|                       | interface is also     |                       |
|                       | possible) and         |                       |
|                       | on-board IMU.         |                       |
+-----------------------+-----------------------+-----------------------+
| ![](media/image9.jpg) | **DAS1**              | [[http://www.inivatio |
| {width="2.01041666666 |                       | n.com/support/das]{.u |
| 66665in"              | A stereo x 64 channel | nderline}](http://www |
| height="1.20833333333 | dynamic audio sensor  | .inilabs.com/support/ |
| 33333in"}             | (silicon cochlea).    | das)                  |
+-----------------------+-----------------------+-----------------------+

Software for event processing
=============================

inivation supports the development of open-source software for real-time
event-based processing, using neuromorphic / dynamic sensors as inputs.
Most notably, we have taken over development of jAER, developed at INI,
a java-based GUI for visualisation and rapid application development of
event data and algorithms.

The software we support (jAER, cAER, MATLAB scripts) is all hosted under
the sourceforge jAER project.

What are the different ways I can work with event data from my device?
----------------------------------------------------------------------

All of our devices are USB enabled, so you can stream data to a PC.
There you can work with the data either in real time or offline.

The eDVS has a microcontroller on board so you can directly implement
event-based visual processing algorithms; or you can stream the events
to further hardware via UART.

The DVS128\_PAER and the DAS1 both have a parallel AER bus for direct
connection to other neuromorphic devices. You can also directly access
the word-serial AER bus pins on the DAVIS240.

The logic on all devices is open-source, so you have a basis for
repurposing devices to directly perform front-end visual processing - we
don't support this.

jAER
----

For real-time application, the easiest way to get started is with jAER,
a java-based GUI for visualisation of data and rapid development of
event-based algorithms and applications. Here is the [[user
guide]{.underline}](http://www.inilabs.com/support/jaer).

cAER
----

You can use cAER for lightweight streaming or logging of data, or as a
platform for your bespoke development. Here is the [[user
guide]{.underline}](http://www.inilabs.com/support/caer).

MATLAB
------

You can use jAER (or cAER, or the SD card logging function of the eDVS)
to save event data, and then work with it offline. We provide scripts
that import data from our .aedat format into MATLAB, for offline use.
Some users report using MATLAB for real-time processing of events - we
don't support this.

Python
------

The jAER repository also contains scripts for importing saved data into
Python. Furthermore, there are scripts for receiving live events from
cAER.

eDVS codebase
-------------

The default software for the eDVS is open source, and you can use this
as a basis for reprogramming the device to perform the necessary
processing for your application.

Unsupported software
--------------------

ROS - Some of our users bridge from cAER to ROS. Although we don't
support this, we can put you in touch with those users as they are
willing to share code.

V-REP - Coppelia robotics have created a simulator of the DVS128 in
their V-REP software(version 3.0.4 onwards); please contact Coppelia
directly for support.

Additional user guides
======================

-   [[Biasing
    > sensors]{.underline}](http://inilabs.com/support/biasing) - How to
    > get the best performance from your sensors by controlling their
    > on-board electronic biases.

-   [[Synchronisation]{.underline}](http://inilabs.com/support/synch) -
    > How to work with 2 or more sensors simultaneously; also covers
    > stereo configurations.

-   [[Reflashing
    > devices]{.underline}](http://inilabs.com/support/reflashing) - How
    > to benefit from the latest upgrades to device firmware.
