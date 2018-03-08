*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don’t hesitate to ask us on the appropriate
[<span class="underline">issues
tracker</span>](https://github.com/inilabs/flashy/issues/). First you
could try our* *[<span class="underline">troubleshooting
guide</span>](https://www.inilabs.com/support/faq/).*

This guide explains how to use our “Flashy” tool to benefit from
firmware and logic upgrades. It also documents USB drivers for inilabs
devices.

Our DVS128, DAVIS240, DAS1 and FX3 prototypes have a programmable logic
device (CPLD or FPGA) for directly interfacing with the sensor chip, and
another chip for communication via USB (usually a Cypress FX2/3). In
this guide:

  - > “firmware” refers to the programming of the communication chip;

  - > “logic” refers to the programmable logic.

[<span class="underline">What is Flashy?</span>](#what-is-flashy)

[<span class="underline">How to install
Flashy</span>](#how-to-install-flashy)

> [<span class="underline">Getting Flashy</span>](#getting-flashy)
> 
> [<span class="underline">Building Flashy</span>](#building-flashy)

[<span class="underline">How to use Flashy</span>](#how-to-use-flashy)

> [<span class="underline">Launching Flashy</span>](#launching-flashy)
> 
> [<span class="underline">Selecting a
> device</span>](#selecting-a-device)
> 
> [<span class="underline">Linux</span>](#linux)
> 
> [<span class="underline">Windows - Using Zadig to install WinUSB
> driver</span>](#windows---using-zadig-to-install-winusb-driver)
> 
> [<span class="underline">Troubleshooting zadig driver
> installation:</span>](#troubleshooting-zadig-driver-installation)
> 
> [<span class="underline">Windows 7
> example:</span>](#windows-7-example)
> 
> [<span class="underline">Windows 10
> example:</span>](#windows-10-example)
> 
> [<span class="underline">Section 1: erasing the
> EEPROM</span>](#section-1-erasing-the-eeprom)
> 
> [<span class="underline">Section 2: uploading firmware for the first
> time</span>](#section-2-uploading-firmware-for-the-first-time)
> 
> [<span class="underline">Section 3: uploading new firmware and new
> logic</span>](#section-3-uploading-new-firmware-and-new-logic)

[<span class="underline">DAVIS240 problem with early
prototypes</span>](#davis240-problem-with-early-prototypes)

[<span class="underline">Which device? Which firmware? Which
logic?</span>](#which-device-which-firmware-which-logic)

# What is Flashy?

With the transition from using the Thesycon USB driver to using libusb
based USB device support for some of our devices (e.g. DAVIS cameras),
it was decided to remove advanced device flashing capabilities from
jAER, which was the standard end-user tool for firmware updates.

These capabilities, along with other features such as low-level USB
information access, the ability to send arbitrary USB vendor requests,
and perform data stream tests, has instead been outsourced to its own
tool, named Flashy.

# How to install Flashy

## Getting Flashy

It requires Oracle Java 1.8 (Oracle JDK 8) to run, since it uses new
technologies such as JavaFX. Please make sure to install at least Java
version 1.8.0 u40. The sourcecode is available in the iniLabs GIT
repository
at:

[<span class="underline">https://github.com/inilabs/flashy</span>](https://github.com/inilabs/flashy)

It can be opened as a Maven project in both NetBeans and Eclipse.

Directly runnable JARs can be found
at:

[<span class="underline">https://github.com/inilabs/flashy/releases</span>](https://github.com/inilabs/flashy/releases)

The latest official version is 0.9.8. Use the -with-dependencies JAR for
easy deployment.

**Note: You must be using Oracle Java 1.8.0 u40 at least (latest version
is u131 as of 20.05.2017). Flashy will NOT work with prior JDK/JRE
versions\!**

Flashy will also not build clean in prior JDK versions.

This version requirement is checked automatically when you start Flashy.

## Building Flashy

You can build Flashy yourself; just check it out and open the project in
NetBeans or Eclipse. Note that building will fail if the JDK is not
recent enough; see note above. Also please note that you do NOT need to
build it to use it. Make sure you choose the “release-profile” to build
and run:

![](media/image19.png)

# How to use Flashy

If you have an older device which still contains old firmware and logic,
you will first need to erase its EEPROM. Flashy automatically detects
when this is the case and offers you the option. Take a look at
[<span class="underline">Section
1</span>](#section-1-erasing-the-eeprom) for detailed instructions.

If you have a device with an empty EEPROM, the first thing to do then is
to upload a temporary firmware, which is then used to write the new,
final firmware to EEPROM and upload the new logic. Please see
[<span class="underline">Section
2</span>](#section-2-uploading-firmware-for-the-first-time) for details
on this.

Once you have a running, new firmware, you can just update the firmware
or logic with a new revision at the click of a button. See
[<span class="underline">Section
3</span>](#section-3-uploading-new-firmware-and-new-logic) for details.

## Launching Flashy

Flashy is launched by executing the jar file:

Flashy-0.9.8-jar-with-dependencies.jar

To execute this JAR, on Windows it should work to just double-click it.
On Linux or Mac Os X, open a shell prompt and enter:

java -jar Flashy-0.9.8-jar-with-dependencies.jar

Note: Make sure that jAER or cAER are not running at the same time\!

## Selecting a device

Any operation in Flashy requires the user to select the appropriate
device in the upper-left drop-down menu. If the desired device is not
present as expected in later steps, this may be for the following
reasons:

### Linux

The permissions aren’t configured correctly for that user to access the
device. To fix this problem in Linux, you just need to add an udev rules
file and reload udev.

You must grant your user access to the USB device. This can be achieved
by creating, as root, the appropriate udev rules files:

/etc/udev/rules.d/65-inilabs.rules

/etc/udev/rules.d/66-inilabs\_dev.rules

You can find ready-to-use udev rules files in
[<span class="underline">our Git
repository</span>](https://github.com/inilabs/devices-bin/tree/master/drivers/linux/udev-rules).

If you’re using a distribution that supports SELinux tags, such as
Fedora, please use the udev rules files in the selinux/ sub-folder.

To reload the udev system without rebooting type, as root:

$ udevadm control --reload-rules

or, for newer udev versions:

$ udevadm control --reload

Now unplug and replug the camera into your computer. You’re done\!

### Windows - Using Zadig to install WinUSB driver

If the desired device is not present it may be that the right driver
isn’t installed on Windows (WinUSB driver).

You may see for example, the message: “Impossible to open device …”. In
this case, even if your device shows up as a WinUsb device in the device
manager you will need to use zadig to update the driver. You may have an
older WinUSB driver or even an experimental libusb driver that can work
sometimes but cause problems, for example in Windows 10 x64 with jAER
1.5, frames from Davis cameras can stop being transferred using some of
these experimental drivers.

If you were previously using our old firmware, you probably have the
Thesycon UsbIO driver installed for your camera device. This must be
substituted with the WinUSB driver (standard USB driver from Microsoft).
Fortunately, doing so is easy with the Zadig tool.

## 

Zadig is available from [<span class="underline">its official
website</span>](http://zadig.akeo.ie/).

## 

Once you start Zadig, you should see a list of devices. If not, go to
options and tick “List all devices”. Make sure you choose the correct
device (not for instance your mouse\!).

Then click *Install WCID Driver* to install the WinUSB driver:
([<span class="underline">WCID
devices</span>](https://github.com/pbatard/libwdi/wiki/WCID-Devices) are
installed automatically for new instances of devices plugged into the
computer).

## 

## ![](media/image9.png)

If you already have a device installed, you may instead need to select
*Replace Driver* rather than *Install WCID Driver*. You should check
after installation (see below) that you actually have the correct WinUSB
driver installed.

You will be notified once done.

## 

## ![](media/image10.png)

You should now see the correct driver (WinUSB Generic Device) in the
Device Manager. The llibUSB and libUSBK drivers should NOT be installed;
they are intended for development of applications using the libusb-win32
or libusbK APIs.

#### Troubleshooting zadig driver installation:

1.  > We have seen that in some cases, after taking these steps, you
    > need to restart your computer in order for Flashy to not give the
    > “Impossible to open device....” message.

2.  > We have also seen that Zadig does not list the device even when it
    > is shown as “Unknown Device” in the Device Manager. In this case,
    > you may need to extract the WinUSB driver manually. In Zadig,
    > switch to *Options/Advanced mode* and use the folder icon to
    > select a folder to extract the driver files to. Then use the usual
    > Windows driver installer dialog to search this folder for the
    > driver.  
    > ![](media/image8.png)![](media/image22.png)

After driver installation, you should see the driver installed in the
Device Manager as shown below:

##### Windows 7 example:

## ![](media/image17.png)

##### Windows 10 example:

![](media/image14.png)

Note that because iniLabs uses a vendor/product identification (VID/PID)
range purchased from Thesycon, Windows will identify the driver as shown
below; this is OK.

![](media/image18.png)

## Section 1: erasing the EEPROM

Connect your device and launch Flashy, then select your device from the
drop-down menu at the top left. Devices that still run the older
firmware will usually appear as “INI SeeBetter null”.

Navigate then to the “Device Specific” tab on the right.

You will be presented with your only option of erasing the current
content of the EEPROM.

Please click on it and wait for the process to complete.

Once done, close Flashy and unplug the device. Plug it in again and
continue to Section 2.

## 

##   

## Section 2: uploading firmware for the first time

Brand new devices from the factory, or after an EEPROM erase such as in
section 1, do not contain any firmware at all. A first, temporary
firmware must be uploaded, to then write the final one to EEPROM.

Connect your device and launch Flashy, then select your device from the
drop-down menu at the top left. Devices without firmware will usually
appear as “null null null”.

Navigate then to the “Device Specific” tab on the right.

There you will need to select a file, containing the firmware you wish
to upload, and then press the appropriate button. The needed firmware
can be found in our Git repository.

For DAVIS240 V4 boards (small USB 2.0 boards), it’s the following
file:

[<span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic\_DAVIS.bix</span>](https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.bix)
(BIX format)

For DVS128 reprogramming, please also use the same DAVIS240 file as
above at this step\!

This upload is usually completed very quickly, you may just see the
progress bar window flash by. Don’t be alarmed by this, it’s expected.

**Once done, close Flashy, but do \*NOT\* unplug the device\! Continue
with Section 3.**

## Section 3: uploading new firmware and new logic

Connect your device and launch Flashy, then select your device from the
drop-down menu at the top left. Devices will usually appear as “INI
DAVIS FX2”, followed by their serial number.

Navigate then to the “Device Specific” tab on the right.

The following screen will appear:

As you can see, it’s divided into three parts:

A) The first row is concerned with updating the firmware of the USB chip
of the device (Cypress FX2 or FX3, depending on the board you have). You
can either load new firmware, or erase the EEPROM (“Erase Flash”
button). To load new firmware, select the appropriate file, and then
press the “Flash FX2/3 firmware” button.

For DAVIS240 V4 boards (small USB 2.0 boards), it’s the following
file:

[<span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic\_DAVIS.iic</span>](https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic)
(IIC format)

For DVS128 boards, it’s a different
file:

[<span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/firmwareFX2\_RetinaCPLD.iic</span>](https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/firmwareFX2_RetinaCPLD.iic)
(IIC format)

B) The second row is used to update the logic (bitstream) on the
CPLD/FPGA.

Select the appropriate file and press “Upload CPLD bitstream”. Uploading
new logic to the small board CPLD requires about 4 minutes.

All bitstream binaries can be found in the following directory in our
Git
repository:

[<span class="underline">https://github.com/inilabs/devices-bin/tree/master/logic/SystemLogic2/</span>](https://github.com/inilabs/devices-bin/tree/master/logic/SystemLogic2/)

For DAVIS240 V4 boards (small USB 2.0 boards), use the following files:

  - > DAVIS240a chips -\>
    > [<span class="underline">MachXO\_DAVIS/SystemLogic2\_MachXO\_DAVIS240a.xsvf</span>](https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240a.xsvf)

  - > DAVIS240b chips -\>
    > [<span class="underline">MachXO\_DAVIS/SystemLogic2\_MachXO\_DAVIS240b.xsvf</span>](https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240b.xsvf)

  - > DAVIS240c chips -\>
    > [<span class="underline">MachXO\_DAVIS/SystemLogic2\_MachXO\_DAVIS240c.xsvf</span>](https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240c.xsvf)

For DVS128 boards, uploading new logic is not usually required. If you
still think it’s needed in your case, the following file is the right
one:

[<span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic1/DVS128\_logic.xsvf</span>](https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic1/DVS128_logic.xsvf)

While flashing firmware or logic, you should see a progress dialog like
this; if you don’t see this progress bar then there is some error, most
likely an outdated Java version.

![](media/image13.png)

C) The third row can be used to set the device’s serial number.

Just enter up to 8 characters into the text field and press “Write
Serial Number”. This should only be done the very first time, when the
device still shows its default serial number of “00000000”.

Please don’t change the serial number unless you really need to, and be
prepared to read tiny numbers printed on the board in case of support
requests to us if you do.

Once you’re done, close Flashy and unplug the device.

After plugging it in again, you’re ready to go\! Enjoy your up-to-date
iniLabs camera.

# DAVIS240 problem with early prototypes

If you cannot flash the EEPROM please take a look at the camera’s upper
side and make sure your device looks as follows:

![](media/image16.png)

If your device shows two rows of resistors instead of one as in the
following image, please get in touch with us at
[<span class="underline">support@inilabs.com</span>](mailto:support@inilabs.com)

![](media/image21.png)

# Which device? Which firmware? Which logic?

<table>
<thead>
<tr class="header">
<th><strong>CAMERA MODEL</strong></th>
<th><strong>FIRMWARE</strong></th>
<th><strong>LOGIC</strong></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td><strong>DVS128</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/firmwareFX2_RetinaCPLD.iic"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/firmwareFX2_RetinaCPLD.iic</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic1/DVS128_logic.xsvf"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic1/DVS128_logic.xsvf</span></a></td>
</tr>
<tr class="even">
<td><strong>DAVIS240C</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240c.xsvf"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240c.xsvf</span></a></td>
</tr>
<tr class="odd">
<td><strong>DAVIS240B</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240b.xsvf"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240b.xsvf</span></a></td>
</tr>
<tr class="even">
<td><strong>DAVIS240A</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX2/SeeBetterLogic_DAVIS.iic</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240a.xsvf"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO_DAVIS/SystemLogic2_MachXO_DAVIS240a.xsvf</span></a></td>
</tr>
<tr class="odd">
<td><strong>DAVIS346</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX3/DAVIS346_80MHz_16bit_v4.img"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX3/DAVIS346_80MHz_16bit_v4.img</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO3_DAVIS/SystemLogic2_MachXO3_DAVIS346.bit"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/MachXO3_DAVIS/SystemLogic2_MachXO3_DAVIS346.bit</span></a></td>
</tr>
<tr class="even">
<td><strong>DevKit FX3 USB 3.0</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX3/DAVIS_FX3_80MHz_16bit_v4.img"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/firmware/CypressFX3/DAVIS_FX3_80MHz_16bit_v4.img</span></a></td>
<td><table>
<thead>
<tr class="header">
<th><strong>Daughter Board - Chip</strong></th>
<th><strong>Logic</strong></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td>V10 - DAVIS640</td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS640.bit"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS640.bit</span></a></td>
</tr>
<tr class="even">
<td>V9 - DAVIS346B</td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS346b.bit"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS346b.bit</span></a></td>
</tr>
<tr class="odd">
<td>V8 - DAVIS346Cbsi</td>
<td><a href="https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS346cBSI.bit"><span class="underline">https://github.com/inilabs/devices-bin/raw/master/logic/SystemLogic2/ECP3_DAVIS/SystemLogic2_ECP3_DAVIS346cBSI.bit</span></a></td>
</tr>
</tbody>
</table></td>
</tr>
<tr class="odd">
<td><strong>DYNAP-SE-1</strong></td>
<td><a href="https://github.com/inilabs/devices-bin/blob/master/firmware/CypressFX2/SeeBetterLogic_Dynapse.iic"><span class="underline">https://github.com/inilabs/devices-bin/blob/master/firmware/CypressFX2/SeeBetterLogic_Dynapse.iic</span></a></td>
<td><a href="https://github.com/inilabs/devices-bin/tree/master/logic/SystemLogic2/Spartan6_Dynapse/"><span class="underline">https://github.com/inilabs/devices-bin/tree/master/logic/SystemLogic2/Spartan6_Dynapse/</span></a></td>
</tr>
</tbody>
</table>
