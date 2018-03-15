# Software user guides

inivation supports the development of open-source software for real-time
event-based processing, using neuromorphic / dynamic sensors as inputs.

The software we support (cAER, libcaer, GUis, scripts, firmware&logic)
is all hosted under the **TO CHANGE**  [GitHub inivation organization](https://github.com/inilabs/).

jAER is now hosted under the [GitHub SensorsINI organization](https://github.com/SensorsINI/jaer/).

There are several ways to access data from the devices:

-   All of our devices are USB enabled, so you can stream data to a PC.
    There you can work with the data either in real time or offline.
-   The eDVS has a micro-controller on board so you can directly
    implement event-based visual processing algorithms; or you can
    stream the events to further hardware via UART.
-   The DVS128_PAER has a parallel AER bus for
    direct connection to other neuromorphic devices. You can also
    directly access the word-serial AER bus pins on the DAVIS240.
-   The logic on all devices is open-source, so you have a basis for
    re-purposing devices to directly perform front-end visual
    processing - support for modifying logic is only available under a
    separate R&D contract.

| Package           | OS platforms                                 | Language                                | Hardware                                                 | Targets                                                                                                                | Support                                                          | VCS |
| ----------------- | -------------------------------------------- | --------------------------------------- | -------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------- | --- |
| jAER              | Windows, Linux, MacOS X (Java 8 JRE)         | Java, with Matlab and Python utilities  | Desktop or laptop                                        | Application development and algorithm exploration, visualization. Full robots have been developed with latencies <3ms. | INI Sensors Group                                                | git |
| cAER              | Linux, MacOS X (partial, no data visualiser) | C                                       | Desktop, laptop, embedded, e.g. Raspberry Pi and ODroid  | Efficient event-based processing framework. Much smaller memory footprint and data structures.                         | inivation                                                        | git |
| libcaer           | Linux, MacOS X                               | C                                       | Desktop, laptop, embedded, e.g. Raspberry Pi and ODroid  | Low-level API for hardware interfacing.                                                                                | inivation                                                        | git |
| eDVS4337 codebase | eDVS4337                                     | C                                       | embedded eDVS4337                                        | Firmware code for the eDVS4337 hardware.                                                                               | inivation                                                        | git |
| rpg_dvs_ros       | Linux                                        | C++                                     | Desktop, laptop, embedded, e.g. Raspberry Pi and ODroid  | ROS interface for DVS128 and DAVIS240 sensors.                                                                         | RPG - Robotics and Perception Group, University of Zurich (UZH)  | git |
| V-REP             | Windows, Linux, MacOS X                      | -                                       | Desktop or laptop                                        | DVS128 simulator.                                                                                                      | Coppelia Robotics                                                |  -  |

*VCS=version control system*

## Additional User Guides

-   **TO CHANGE?**  [Reflashing devices](http://inivation.com/support/reflashing/) -
    How to benefit from the latest upgrades to device firmware using
    our device update software called Flashy.

-   **TO CHANGE?** [File formats](http://inivation.com/support/fileformat/) -
    explaining the .aedat format we use to save event-based data from
    our devices.
