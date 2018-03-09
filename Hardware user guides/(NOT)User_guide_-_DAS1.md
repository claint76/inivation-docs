---
title: '[]{#_a3upyvlyjxkj .anchor}DAS1 (Dynamic Audio Sensor) user guide'
---

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [[support
forum]{.underline}](https://groups.google.com/d/forum/jaer-users/). If
your question involves confidential information, however, please use
[support@inilabs.com]{.underline}. First you could try our*
*[[troubleshooting
guide]{.underline}](https://www.inilabs.com/support/faq/).*

[[Specifications]{.underline}](#specifications)

[[Getting started]{.underline}](#getting-started)

[[Install drivers]{.underline}](#install-drivers)

> [[Windows 10/8.1/8/7]{.underline}](#windows-108.187)
>
> [[Windows XP/Vista]{.underline}](#windows-xpvista)
>
> [[Linux]{.underline}](#linux)
>
> [[Mac os X]{.underline}](#mac-os-x)

[[Physical board
configuration]{.underline}](#physical-board-configuration)

> [[Which board do I have?]{.underline}](#which-board-do-i-have)
>
> [[Left and right]{.underline}](#left-and-right)
>
> [[Configuration with jumpers -
> overview]{.underline}](#configuration-with-jumpers---overview)
>
> [[DAS1 V4, early 2017]{.underline}](#das1-v4-early-2017)
>
> [[DAS1 V3 2015]{.underline}](#das1-v3-2015)
>
> [[Common to all DAS1 models]{.underline}](#common-to-all-das1-models)
>
> [[Power via USB or direct]{.underline}](#power-via-usb-or-direct)
>
> [[Input via microphones or audio
> jack]{.underline}](#input-via-microphones-or-audio-jack)
>
> [[Microphone preamps]{.underline}](#microphone-preamps)
>
> [[Additional jumper
> connections]{.underline}](#additional-jumper-connections)
>
> [[Tune the master bias]{.underline}](#tune-the-master-bias)

[[Software configuration of biases and
hardware]{.underline}](#software-configuration-of-biases-and-hardware)

> [[Biases]{.underline}](#biases)
>
> [[Channel-specific control - equalizer and channel enable
> bits]{.underline}](#channel-specific-control---equalizer-and-channel-enable-bits)
>
> [[Scanner and ADC]{.underline}](#scanner-and-adc)
>
> [[Mic Preamp]{.underline}](#mic-preamp)
>
> [[Config]{.underline}](#config)

[[jAER viewing modes]{.underline}](#jaer-viewing-modes)

> [[Cochleagram]{.underline}](#cochleagram)
>
> [[Rolling cochleagram]{.underline}](#rolling-cochleagram)
>
> [[Rolling cochleagram with
> ADC]{.underline}](#rolling-cochleagram-with-adc)
>
> [[Chip renderer]{.underline}](#chip-renderer)
>
> [[Space-time]{.underline}](#space-time)
>
> [[Rolling space-time]{.underline}](#rolling-space-time)

[[Recording DAS1 data]{.underline}](#recording-das1-data)

[[Additional technical
documents]{.underline}](#additional-technical-documents)

Our documentation is permanently in development along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us. We use the [[sourceforge jAER help
forum]{.underline}](http://sourceforge.net/p/jaer/discussion/631958/)
for all questions regarding inilabs products. If your question involves
confidential information, however, please use
[[support@inilabs.com]{.underline}](mailto:support@inilabs.com). First
you could try our [[troubleshooting
guide]{.underline}](http://www.inilabs.com/support/faq).

This user guide covers DAS1 device, which contains the CochleaAMS1c
chip. This is a beta product in active development. To ensure the best
results out of your DAS1, obtain the latest version of the jAER software
and preferably use an integrated developer environment (IDE) (e.g.
netbeans) to run the latest code base.

![](media/image51.jpg){width="4.604166666666667in"
height="2.7604166666666665in"}

Specifications
==============

Specifications for this Cochlea model can be seen here:

[[http://inilabs.com/products/dynamic-audio-sensor/]{.underline}](http://inilabs.com/products/dynamic-audio-sensor/)

This paper describes the intended functionality of the device:

[[Liu, S. C., van Schaik, A., Minch, B., & Delbruck, T. (2014).
Asynchronous Binaural Spatial Audition Sensor With 2 64 4 Channel
Output. Biomedical Circuits and Systems, IEEE Transactions on, 8(4),
453-464.]{.underline}](http://ieeexplore.ieee.org/xpl/articleDetails.jsp?arnumber=6658899)

The device contains some experimental circuitry, which is not described
in the above paper. We only support the features of the device described
in this paper.

Getting started
===============

1.  Unpack CochleaAMS1c.

2.  Check the [[physical
    > configuration]{.underline}](#physical-board-configuration) of the
    > board.

3.  Install jAER, following the instructions in the [[jAER user
    > guide]{.underline}](http://www.inilabs.com/support/jaer).

4.  Plug in the CochleaAMS1c to your PC (or Mac) using a USB A-B cable.

5.  [[Install the driver]{.underline}](#install-drivers), if necessary.

6.  Run jAER.

7.  Select the correct chip class: From the Interface menu select the
    > device CochleaAMS1c and from AEChip menu select
    > ch.inizh.jaer.chip.cochlea.CochleaAMS1c.

8.  Check the [[software
    > configuration]{.underline}](#software-configuration-of-biases-and-hardware)
    > of your device, using jAER.

Install drivers 
================

Windows 10/8.1/8/7
------------------

1\) Download zadig from here:
[[https://github.com/inilabs/devices-bin/blob/master/drivers/windows/zadig-2.3.exe]{.underline}](https://github.com/inilabs/devices-bin/blob/master/drivers/windows/zadig-2.3.exe)

2\) select CochleaAMS1c, then select winusb driver

3\) Click on install

![](media/image60.png){width="6.5in" height="3.6527777777777777in"}

4\) once installed, please have a look at the device manager, it should
be listed as a CochleaAMS1c

5\) after successful installation, open jAER and check that the chip
class selected is the cochleaAMS1cv4

![](media/image44.png){width="6.5in" height="3.6527777777777777in"}

6\) then select the right bias file as shown in the following screenshot

![](media/image63.png){width="6.5in" height="3.6527777777777777in"}

**Windows 7** steps are illustrated here. The DAS1 uses the Thesycon USB
drivers; this device has not yet been migrated to use the libUSB drivers
as for other inilabs devices..

First, make sure to have a checkout of the drivers/ folder, which is not
located alongside the jAER\_1.5/ folder! It can be downloaded with Git
from:

[[https://github.com/inilabs/devices-bin/tree/master/drivers]{.underline}](https://github.com/inilabs/devices-bin/tree/master/drivers)

After you plug in the device, you should get a dialog asking if you want
to browse for the driver yourself. If you don\'t get this option, open
the Device Manager (Run \"devmgmt.msc\") and select \"Update driver\"
for the unknown device.

1)

![browseForDriverWin7.png](media/image48.png){width="5.609101049868767in"
height="4.098958880139983in"}

2)

![browseForDriverWin7-step2.png](media/image29.png){width="5.634998906386702in"
height="4.067708880139983in"}

3)

![browseForDriverWin7-step3.png](media/image79.png){width="5.083333333333333in"
height="2.4791666666666665in"}

4)

![browseForDriverWin7-step4.png](media/image64.png){width="5.28125in"
height="2.5520833333333335in"}

5)

![browseForDriverWin7-step5.png](media/image27.png){width="4.25in"
height="6.302083333333333in"}

6)

![driverPanel.png](media/image76.png){width="4.270833333333333in"
height="4.760416666666667in"}

The driver is now installed correctly.

Windows XP/Vista
----------------

First, make sure to have a checkout of the drivers/ folder, which is not
located alongside the jAER\_1.5/ folder! It can be downloaded with Git
from:

[[https://github.com/inilabs/devices-bin/tree/master/drivers]{.underline}](https://github.com/inilabs/devices-bin/tree/master/drivers)

The following applies to Windows XP, but Windows Vista/7 are similar.
The basic installation can use our customized .inf driver installation,
following these steps. After you plug in your CypressFX2 or CypressFX2LP
based board follow these steps:

1\) You will get the Found New Hardware dialog:

![driver1.png](media/image54.png){width="5.239583333333333in"
height="4.083333333333333in"}

2\) Tell it to install from a specific location:

![driver2.png](media/image82.png){width="5.239583333333333in"
height="4.083333333333333in"}

3\) Navigate to the drivers folder and select the correct folder for your
device. e.g. for the silicon retinas, choose the folder
drivers\\windows\\driverDVS\_USBAERmini2, select OK, and click Next
(Note that the actual folder name has changed compared with the
screenshot shown below). You may need to select the proper 32/64 bit
subfolder if the installer cannot search subfolders.

![driver3.png](media/image69.png){width="6.369792213473316in"
height="3.0208333333333335in"}

4\) The installation should complete appropriately. Here is what happens
for a CochelaAMS1c:

![driver4.png](media/image26.png){width="5.239583333333333in"
height="4.083333333333333in"}

5\) Now the Device Manager should show the device:

![driver5.png](media/image84.png){width="6.125in"
height="6.229166666666667in"}

Linux 
------

Driver is libusb, so no special steps should be required to install your
system. This is true for both 32bit x86 and 64bit x86\_64 versions.
ARMv7-hf is also supported (Raspberry Pi, Pandaboard, \...).

However, it can happen that udev doesn\'t give your user access to USB
devices it doesn\'t know about, in this case you just need to add an
udev rules file and reload udev.

You can reload udev by either issuing the command udevadm control
\--reload or by rebooting your machine.

While everybody will need the 65-inilabs.rules file, the
66-inilabs\_dev.rules file is only needed if you want to develop new
device firmware or do major firmware upgrades.

Here an example for distributions like Fedora, which use SELinux tags to
grant access:

/etc/udev/rules.d/65-inilabs.rules

\# All Cochlea systems\
SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", TAG+=\"uaccess\"

/etc/udev/rules.d/66-inilabs\_dev.rules\
\# Blank FX2 devices\
SUBSYSTEM==\"usb\", ATTR{idVendor}==\"04b4\", ATTR{idProduct}==\"8613\",
TAG+=\"uaccess\"

And another one for other Linux distributions, which use standard
permissions:

/etc/udev/rules.d/65-inilabs.rules

\# All Cochlea systems\
SUBSYSTEM==\"usb\", ATTR{idVendor}==\"152a\",
ATTR{idProduct}==\"84\[0-1\]?\", MODE=\"0666\"

/etc/udev/rules.d/66-inilabs\_dev.rules\
\# Blank FX2 devices\
SUBSYSTEM==\"usb\", ATTR{idVendor}==\"04b4\", ATTR{idProduct}==\"8613\",
MODE=\"0666\"

Mac os X
--------

On Mac OS X 10.8+, the libusb driver is enabled by default and no
special work is usually needed to access devices.

Physical board configuration
============================

Some configurations of the DAS1 are done physically on the board.

Which board do I have?
----------------------

The DAS1 board exists in various revisions, most notably, V2, V3 and V4.

**DAS1 V4** was released in early 2017 and it looks as the following
image:

![](media/image59.jpg){width="6.5in" height="4.833333333333333in"}

**Figure DAS1 V4 cochlea board**

In order to operate correctly, in jAER it requires the selection of the
CochleaAMS1cV4 class.![](media/image83.png){width="6.34375in"
height="1.15625in"}

**DAS1 V3/2/1** were released in 2015 and they need to be used with the
older CochleaAMS1c chip class in jAER.

![](media/image46.png){width="6.364583333333333in"
height="1.1666666666666667in"}

Left and right
--------------

By convention, in the image below we consider the microphone to the
right to be the left microphone, and vice versa. The Left microphone is
labelled on the board as MK1\_AL and the right microphone is labelled as
MK1\_AR.

Configuration with jumpers - overview
-------------------------------------

### DAS1 V4, early 2017 

There are two modes of operation:

1.  Using the on-board microphone with off chip preamplification.

2.  Using direct jack input.

**Mode 1**. On-board microphones with off chip preamplification.

For the first mode of operation it is required to set the jumpers:

![](media/image65.jpg){width="6.5in" height="1.4861111111111112in"}

Default Configuration for input from onboard microphones with off chip
pre-amplification. Red lines shows connections that are made by
jumpers/cables. One jumper is used to short *preamp0* with *ausrc*. A
second cable is used to short off chip line on the green MIC1/MIC2
selector. A zoom of this configuration is shown in the following figure,
only for the left channel.

![](media/image72.jpg){width="4.286458880139983in" height="5.1875in"}

Zoomed configuration for mode 1: on-board microphones with off chip
preamplification

**Mode 2**. Direct jack input without pre-amplification.

![](media/image42.jpg){width="6.5in" height="1.5in"}

Red lines shows connections that are made by jumpers/cables. One jumper
is used to short *directin* with *ausrc*. A second cable is used to
short *direct input* line on the green MIC1/MIC2 selector. Finally the
*audio out* is sent to the on-chip preamplifiers. A zoom of this
configuration is shown in the following figure, only for the left
channel.

![](media/image25.jpg){width="4.6875in" height="6.239583333333333in"}

Zoomed configuration for mode 2: direct jack input.

### DAS1 V3 2015 

This picture shows the cochlea board, highlighting pin names, and their
default configuration

![cochlea\_board.jpg](media/image67.jpg){width="6.5in"
height="4.527777777777778in"}

**DAS1 V3 **

### Common to all DAS1 models

Power via USB or direct
-----------------------

The PCB draws about 300mA from 5V VBUS on power up, which drops to 190mA
when initialized and running. This is near USB limit, if you experience
power issues you can provide power (5V) via the Main Power switch. Main
power jumper supplies VBUS to board (see Cochlea's board section).

Input via microphones or audio jack
-----------------------------------

The input signal can be provided via on-board microphones or via a jack
audio input. For each channel (left or right) if you plug in a jack
input then this cuts off the on-board microphone; if no jack is plugged
in then the input comes from the on-board microphone.

Microphone preamps
------------------

There are three options for preamplification:

-   Preamplification using an on-board preamplifier (MAX9814)

-   Preamplification using an experimental on-chip preamplifier (not
    > recommended)

-   No preamplification - the signal goes straight to the first filter
    > stage in the cochlea.

The above options can be chosen separately for each channel (left vs
right). Use jumpers to select preamp/direct connections. Three banks of
jumpers are relevant, and all must be set correctly in order to achieve
the desired configuration:

  **Jumper**                   **JP14/JP24**   **JP1**   **JP9**    **Notes**
  ---------------------------- --------------- --------- ---------- ------------------------------------------------------------------------------------------------------------------------
  Using off-chip MAX9814       Connect         Pre       off-chip   Power off the on-chip preamp by turning off biases Ibias10pAmp and Ibias20pAmp (see [[biases]{.underline}](#biases))
  Direct, e.g. to sound card   Connect         Dir       direct     
  Using on-chip preamp         Open            open      on-chip    The on-chip preamp output is always connected to the basilar membrane input; jumpers 14 and 24 should be disconnected.

Additional jumper connections
-----------------------------

Check that these jumpers on the board are in the position as shown in
the images below. These jumpers sets some biases to the rail values.

![](media/image74.png){width="2.3194444444444446in"
height="2.0694444444444446in"}![](media/image30.png){width="1.3611111111111112in"
height="2.0277777777777777in"}

Tune the master bias
--------------------

The [[master bias current]{.underline}](#tune-the-master-bias) is
controlled through a potentiometer on the board (this is the fundamental
current from which all other bias currents are derived, see
[[Biasing]{.underline}](http://inilabs.com/support/hardware/biasing/#h.cr5b9jms79h6)).
The DAS1 comes with the master bias already tuned, however if you
experience problems with the biases you should check that the master
bias current is in the correct range. To do so, turn the potentiometer
screw; RW clockwise (counterwise) to increase (decrease) the master bias
current. Check the voltage across the point RX (close to the
potentiometer) to AGND. Make sure that the voltage is in the range
between 300/400mV. The master bias current has a global influence on all
cochlea's parameters as it defines their reference value.

Software configuration of biases and hardware
=============================================

Many configurations of the device, including on-chip analogue biases,
are set via software - we recommend jAER's *biases and hardware
configuration* dialogue for this.The [[jAER user
guide]{.underline}](http://inilabs.com/support/software/jaer/) gives
detailed instructions in how to use the software. This section assumes
familiarity with the software and explains features specific to the
DAS1.

In jAER, open the HW Configuration tab, by clicking on *View* *-\>
Biases / Hardware Configuration* (or *HW Configuration* at the bottom
right of the live AEViewer). Load a hardware configuration using *File
-\> Load settings*. You can find the standard configuration files under:

> *jAER / biasgenSettings / CochleaAMS1c *

These default biases are suitable for many situations:

> *CochleaAMS1cH2-offChipPreamp.xml*

By default your cochlea comes with off-chip preamplification settings.
If you select on-chip pre-amplification then you should instead use:

> *CochleaAMS1cH2-onChipPreamp.xml *

The configuration options are explained in the following sections. Note
the different tabs of the Hardware configuration tab.

![](media/image78.png){width="5.75in" height="0.5104166666666666in"}

Biases
------

The meaning of the biases are explained in the [[biasing
guide]{.underline}](http://inilabs.com/support/hardware/biasing/#h.cr5b9jms79h6).

The *Basic controls* tab allows you to easily experiment with the basic
parameters of the device:

![biases\_cochlea.png](media/image71.png){width="5.152064741907261in"
height="5.328125546806649in"}

The *Expert controls* tab has two tabs, on-chip biases and off-chip
biases.

On-chip biases:

![](media/image70.png){width="6.5in" height="6.277777777777778in"}

Off-chip biases:

![](media/image77.png){width="6.5in" height="7.861111111111111in"}

Channel-specific control - equalizer and channel enable bits
------------------------------------------------------------

The DAS1 includes a DAC locally to each channel for fine-tuning of
Q-factor. Adjusting these biases can help to compensation for mismatch
along the cascade. Here is the equalizer tab:

![](media/image73.png){width="6.5in" height="6.708333333333333in"}

Each slider represents one DAC. The DACs are 5 bit - consequently, each
slider can be moved vertically to one of 32 positions. The higher the
slider, the higher the Q factor. The upper bank of DACs is for the
second-order sections (SOS), and the lower bank is for the experimental
band-pass filters (BPF). Within each bank, the channel numbering
increases from left to right (from high to low frequency). Within each
bank there are 128 sliders, one for each channel for each of left and
right. Left channels are even numbered and right channels are odd
numbered.

At the bottom of this tab are the killbits - the "ganglion" of 4 neurons
attached to each channel can be individually deactivated with this
control. In the above example, all the LPF neurons (those driven from
the half-wave rectified outputs of the second-order sections) are
activated and all the BPF neurons are deactivated (the default setting).
In the following example, these have been altered, by clicking and
dragging with the left or right mouse buttons:

![](media/image61.png){width="6.5in" height="1.1111111111111112in"}

You can also use the *all* and *none* buttons to disable and enable an
entire bank at once.

Scanner and ADC
---------------

In the DAS1 up to V3, various analogue test points within the chip could
be brought out to an external 4-channel ADC. (On the V4 board, this
facility has been removed, since its primary purpose was debugging). For
each of these ADC channels, a selection of internal signals can be
easily bridged with a jumper, according to the following schematic:

![](media/image81.png){width="3.9027777777777777in"
height="3.8194444444444446in"}

Clearly, further combinations are achievable using wires for bridging.
The signals are as follows:

-   onchipPreAmp\<L/R\>\_In - The inputs to the left and right on-chip
    > preamps.

-   C\<1/2/3/4\>bus - Outputs of the second-order sections; 1 and 2 are
    > left, 3 and 4 are right; 1 and 3 are outputs of the first half of
    > the respective second-order sections; 2 and 4 are outputs of the
    > second half of the respective second-order sections.

-   CochMic\<Left/Right\>In - on-board microphones. Note - in practice
    > these signals are not strong enough to drive the ADC and should
    > not be used.

-   vmhwroutT - Experimental feature - ignore.

-   scanvmi\<L/R\> - Membrane of first neuron in left or right cochlea
    > (only the first neuron is accessible).

-   scanbpf\</out\>\<L/R\> - Experimental feature - ignore.

To choose the cochlea channel, in jAER, choose the *scanner* tab of the
*Biases/hardware configuration* dialogue:

![](media/image57.png){width="6.5in" height="2.1944444444444446in"}

You can choose to *enable continuous scanning*, in which case the output
of each channel will be output in sequence, incremented on each stroke
of the CPLD clock; alternatively, you can choose which channel to output
from, using the slider below.

Also, make sure that the ADC is enabled, by ticking *ADCenabled* on the
*ADC* tab of the *Biases/Hardware configuration* dialogue:

![](media/image50.png){width="5.895833333333333in"
height="3.4791666666666665in"}

To visualise the ADC data, use the [*[rolling cochleagram with
ADC]{.underline}*](#rolling-cochleagram-with-adc) display method.

If you log data whilst the ADC is running, the AEDAT file will contain a
timestamped event for each sample. [[See here for the file
format]{.underline}](http://inilabs.com/support/software/fileformat/#h.b6cs448dhp9).
Please note that as the selection of ADC inputs is manual, jAER has no
knowledge of where the ADC inputs come from, and consequently, if data
is logged whilst the ADC is enabled then logged files should be manually
annotated to say what the signals in the ADC came from, as this is
information is not stored in the file.

Mic Preamp
----------

Use the *Mic Preamp* tab of the *Expert controls* tab to control the
preamplifiers:

![](media/image80.png){width="6.5in" height="2.888888888888889in"}

If you are using the on-chip pre-amp then you should select one of 4
levels of gain from the upper radio control.

If you are using the off-chip MAX9814 then use the lower section of the
dialogue to modify its settings.

Config
------

![](media/image75.png){width="6.5in" height="3.2916666666666665in"}

jAER viewing modes
==================

jAER offers 6 different modes for viewing live or recorded data from
DAS1. These are explained in the jAER user guide, and summarised here.
You switch between these modes either using the *3* key, or selecting
them from *View -\> Display method*.

Cochleagram
-----------

On the X-axis is there is time; a frame's worth of data is displayed at
once. On the Y-axis are channels from 0 up to 63. Outputs from the 4
neurons of each ganglion, and from SOS vs BPF, and from left vs right,
are all merged onto single pixels. Green and red are used for the left
and right channels. Where these overlap there is yellow. The FS
parameter is not used.

![](media/image55.png){width="6.5in" height="2.2222222222222223in"}

Rolling cochleagram
-------------------

This display mode is similar to the cochleagram mode, except that a
frame's worth of data as defined for the cochleagram is added from left
to right until the screen fills, and then the screen is blanked and the
process repeats. The FS parameter is used to control the number of
frame's worths of data are added before the process repeats. In fact
2\^FS packets are squeezed into a single screen.

![](media/image66.png){width="6.5in" height="2.4722222222222223in"}

NB: If spikes appear only on the first column of the cochleagram the
timestamp counter need to be set. Do so by clicking on 'reset timestamp'
from Timestamp menu. The spikes should start rolling again.

Rolling cochleagram with ADC
----------------------------

This is the same as the rolling cochleagram mode, above, except that
there is a lower panel which visualises samples from the ADC, if these
are enabled. The ADC has 4 channels and these are output in different
colours, as shown by the controls at the bottom of the panel.

![](media/image28.png){width="6.5in" height="3.8055555555555554in"}

Chip renderer
-------------

The X-axis is the 64 channels. The Y-axis is the different cell types.
The top half are the LPF neurons and the bottom half are the
experimental BPF neurons. Within each half, the top half are the right
neurons and the bottom half are the left neurons. Within each quarter,
there are 4 rows, one for each of the neurons in the respective
ganglion. Any cell which produced a spike within the frame is coloured
(red for right, green for left), and the FS parameter defines the number
of spikes which had to arrive within a frame to produce a fully coloured
cell.

![](media/image43.png){width="6.5in" height="2.4166666666666665in"}

Space-time
----------

This gives a 3D view which you can rotate. The axes are x - the 64
channels, y - the 16 cell types, as defined above in the *chip renderer*
display method, and t - time. More recent events are coloured red and
older events are coloured green.

![](media/image49.png){width="6.5in" height="3.111111111111111in"}

Rolling space-time
------------------

In this view there is a 3D rendering which you can rotate, with axes
defined as above, but the data is rolled out along the time axis one
frame's worth at a time, where the FS parameter defines the number of
frame's worths of data there are, as in the *rolling cochleagram*
display method, above.

![](media/image56.png){width="6.5in" height="2.3194444444444446in"}

Recording DAS1 data
===================

Use jAER to log data in the .aedat file format. The jAER repository
contains scripts for importing these files into matlab or python. The
file format is explained here:

[[http://inilabs.com/support/software/fileformat/\#h.b6cs448dhp9]{.underline}](http://inilabs.com/support/software/fileformat/#h.b6cs448dhp9)

Additional technical documents
==============================

-   [[DAS PCB schematics and PCB
    > layout]{.underline}](https://drive.google.com/file/d/0BzvXOhBHjRheQTlTTHh5WTFFTjg/view?usp=sharing)

-   [[Notes on DAS PCB design (jumpers, microphone configuration,
    > etc)]{.underline}](https://drive.google.com/file/d/0BzvXOhBHjRheVThMSFE5Tm43dG8/view?usp=sharing)
