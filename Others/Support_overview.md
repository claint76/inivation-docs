# Support overview

We support all of the products we sell in their intended usage as
research prototypes. We also support the open-source event-based
Dynamic Vision (DV) software platform and some related software.

We use different Google groups for all public questions and discussions regarding inivation products:
- [DAVIS Users](https://groups.google.com/d/forum/davis-users)
- [DV platform Users](https://groups.google.com/d/forum/dv-users)

If your question involves confidential information, however, please use
[support@inivation.com](mailto:support@inivation.com).
First you could try our [troubleshooting guide](https://inivation.com/support/faq/).

This document explains where to find help, with links to our user
guides.

## Table of contents
- [What are the different ways I can work with event data from my device?](#what-are-the-different-ways-i-can-work-with-event-data-from-my-device)
  - [Dynamic Vision (DV) platform](#dynamic-vision-dv-platform)
  - [jAER](#jaer)
  - [MATLAB](#matlab)
  - [Python](#python)
  - [eDVS codebase](#edvs-codebase)
  - [Unsupported software](#unsupported-software)
- [Additional user guides](#additional-user-guides)

## What are the different ways I can work with event data from my device?

All of our devices are USB enabled, so you can stream data to a PC.
There you can work with the data either in real time or offline.

The eDVS has a microcontroller on board so you can directly implement
event-based visual processing algorithms; or you can stream the events
to further hardware via UART.

### Dynamic Vision (DV) platform

You can use the Dynamic Vision software platform (dv-runtime plus dv-gui) for visualization, logging of data, and as a
platform for custom development. Here is the [user guide](https://inivation.gitlab.io/dv/dv-docs/).

### jAER

For real-time application, the easiest way to get started is with jAER,
a java-based GUI for visualisation of data and rapid development of
event-based algorithms and applications. Here is the [user guide](https://inivation.com/support/software/jaer/).

### MATLAB

You can use DV, jAER, or the SD card logging function of the eDVS
to save event data, and then work with it offline. We provide scripts
that import data from our .aedat format into MATLAB, for offline use.
Some users report using MATLAB for real-time processing of events - we
don't support this.

### Python

The jAER repository also contains scripts for importing saved data into
Python.

### eDVS codebase

The default software for the eDVS is open source, and you can use this
as a basis for reprogramming the device to perform the necessary
processing for your application.

### Unsupported software

ROS - The Robotics and Perception Group at the University of Zurich maintains a ROS driver for the DVS and DAVIS cameras.

V-REP - Coppelia Robotics have created a simulator of the DVS128 in
their V-REP software (version 3.0.4 onwards); please contact Coppelia
directly for support.

# Additional user guides

  - [Biasing sensors](https://inivation.com/support/hardware/biasing/) - How to get the best performance from your sensors by controlling their on-board electronic biases.
  - [Synchronisation](https://inivation.com/support/hardware/synchronisation/) How to work with 2 or more sensors simultaneously; also covers stereo configurations.
  - [Reflashing devices](https://inivation.com/support/software/reflashing/) - How to benefit from the latest upgrades to device firmware.
