# Software user guides

inivation supports the development of open-source software for real-time
event-based processing, using neuromorphic / dynamic vision sensors as inputs.

The software we support (dv-runtime, libcaer, GUIs, scripts, firmware&logic)
is all hosted under the [GitLab iniVation organization](https://gitlab.com/inivation/).

jAER is now hosted under the [GitHub SensorsINI organization](https://github.com/SensorsINI/jaer/).

There are several ways to access data from the devices:

-   All of our devices are USB enabled, so you can stream data to a PC.
    There you can work with the data either in real time or offline.
-   The eDVS has a micro-controller on board so you can directly
    implement event-based visual processing algorithms; or you can
    stream the events to further hardware via UART.
-   You can also directly access the word-serial AER bus pins on the DAVIS240.

| Package     | OS platforms            | Language | Hardware                  | Targets                                                           | Support                                 |
| ----------- | ----------------------- | -------- | ------------------------- | ----------------------------------------------------------------- | --------------------------------------- |
| dv-runtime  | Windows, Linux, MacOS X | C++      | Desktop, laptop, embedded | Efficient event-based processing framework.                       | iniVation                               |
| libcaer     | Windows, Linux, MacOS X | C        | Desktop, laptop, embedded | Low-level API for hardware interfacing.                           | iniVation                               |
| rpg_dvs_ros | Linux                   | C++      | Desktop, laptop, embedded | ROS interface for DVS and DAVIS sensors.                          | Robotics and Perception Group, INI, UZH |
| eDVS4337    | eDVS4337 (NXP LPC4337)  | C        | embedded eDVS4337         | Firmware code for the eDVS4337 hardware.                          | iniVation                               |
| jAER        | Windows, Linux, MacOS X | Java     | Desktop, laptop           | Application development and algorithm exploration, visualization. | Sensors Group, INI, UZH                 |
| V-REP       | Windows, Linux, MacOS X | -        | Desktop, laptop           | DVS128 simulator.                                                 | Coppelia Robotics                       |

*VCS=version control system*

## Additional User Guides

-   [Reflashing devices](https://inivation.com/support/software/reflashing/) -
    How to benefit from the latest upgrades to device firmware using
    our device update software called Flashy.

-   [File formats](https://inivation.com/support/software/fileformat/) -
    explaining the .aedat format we use to save event-based data from
    our devices.
