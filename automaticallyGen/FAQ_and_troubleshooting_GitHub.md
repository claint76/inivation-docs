Can’t find the answer you need? We use multiple Google Groups forums for
all questions regarding inivation
products:

[<span class="underline">https://groups.google.com/d/forum/caer-users</span>](https://groups.google.com/d/forum/caer-users)

[<span class="underline">https://groups.google.com/d/forum/jaer-users</span>](https://groups.google.com/d/forum/jaer-users)

[<span class="underline">https://groups.google.com/d/forum/davis-users</span>](https://groups.google.com/d/forum/davis-users)

[<span class="underline">https://groups.google.com/d/forum/dynapse-users</span>](https://groups.google.com/d/forum/dynapse-users)

If your question involves confidential information, however, please use
[<span class="underline">support@inivation.com</span>](mailto:support@inivation.com).

> [<span class="underline">Troubleshooting
> guide</span>](#troubleshooting-guide)
> 
> [<span class="underline">FAQ</span>](#faq)

# Troubleshooting guide

<table>
<thead>
<tr class="header">
<th><strong>Symptoms</strong></th>
<th><blockquote>
<p><strong>Possible solutions</strong></p>
</blockquote></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td>jAER is running and a DVS is plugged in. Either there are no spikes coming out, or there are some spikes but they don't make sense.</td>
<td><ol type="1">
<li><blockquote>
<p>Check that there is no lens cap.</p>
</blockquote></li>
<li><blockquote>
<p>Check that the lens aperture is open.</p>
</blockquote></li>
<li><blockquote>
<p>In jAER, load or reload a standard set of biases for your device.</p>
</blockquote></li>
<li><blockquote>
<p>Check that all filters are disabled.</p>
</blockquote></li>
<li><blockquote>
<p>Check that “capture events” and “display events” are both enabled on the user-friendly tab of the “Biases / HW configuration” dialogue (DAVIS only).</p>
</blockquote></li>
</ol></td>
</tr>
<tr class="even">
<td>I can’t get the image into focus - it’s really blurry.</td>
<td><p>Have you got the CS-C adapter ring between the lens and the camera? The adapter ring looks like this:</p>
<p><img src="media/image2.png" style="width:2.1875in;height:1.42708in" /></p>
<p>This doesn’t apply to eDVS. If you have the eDVS, are you aware that the lens screws in and out of the lens holder in order to focus it?</p></td>
</tr>
<tr class="odd">
<td>I can’t install a linux driver for my DVS128.</td>
<td>You don’t need to; just upgrade to jAER version 1.5 or higher.</td>
</tr>
<tr class="even">
<td>I can’t install a linux driver for my USBAERMini2 board.</td>
<td>There isn’t one - use Windows instead.</td>
</tr>
<tr class="odd">
<td>I’m using jAER 1.5, but still can’t access my device from Linux.</td>
<td>Ensure that the user you’re running jAER as does have access to the device. This might require an udev rule to be added, please refer to the <a href="https://inilabs.com/support/hardware/davis240/"><span class="underline">DAVIS240</span></a> user guide and its section “Install USB driver - Linux”.</td>
</tr>
<tr class="even">
<td>Windows can’t automatically find the right driver for my DAVIS240.</td>
<td>Use zadig to install the correct driver. See the <a href="http://www.inilabs.com/support/reflashing"><span class="underline">reflashing guide</span></a>.</td>
</tr>
<tr class="odd">
<td>Some columns of pixels are not working on my DAVIS240B.</td>
<td>This is by design: see the <a href="http://www.inilabs.com/products/davis/specifications"><span class="underline">specifications page</span></a>, section “DAVIS240B array layout”.</td>
</tr>
</tbody>
</table>

# 

# FAQ

<table>
<thead>
<tr class="header">
<th><strong>Question</strong></th>
<th><strong>Answer</strong></th>
</tr>
</thead>
<tbody>
<tr class="odd">
<td>Can the DVS see infrared (IR)? What is the range of frequencies that the DVS can see?</td>
<td>The DVS chip can see all visible light plus near-infrared (NIR) down to about 1.1 um. The luminosity function should be that of a standard CMOS sensor (sensitivity peaking around 700-750 nm) although we have not measured this.</td>
</tr>
<tr class="even">
<td>Can I synchronise timestamps between two prototypes?</td>
<td><p>Yes, DVS128, DAVIS240 and DAS1 can all be synchronised to each other, see the <a href="http://www.inilabs.com/support/synch"><span class="underline">synchronisation guide</span></a>.</p>
<p>eDVS and DVS128_PAER don’t have any built in synchronisation capability.</p></td>
</tr>
<tr class="odd">
<td>Why is there a frame rate (FPS) on the jAER toolbar?</td>
<td>This is the rate at which jAER is rendering frames for visualisation of the data; the DVS doesn’t output frames but rather outputs events in real time, see the <a href="http://www.inilabs.com/support/jaer"><span class="underline">jAER user guide</span></a>. for more details.</td>
</tr>
</tbody>
</table>
