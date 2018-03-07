CochleaAMS1c readme
===================

This file was modified 5/28/2013 6:21:10 AM and is located at
<https://svn.ini.uzh.ch/repos/tobi/cochlea/pcbs/CochleaAMS1c_USB/0_README_CochleaAMS1c.docx>

PCB design is in
<https://svn.ini.uzh.ch/repos/tobi/cochlea/pcbs/CochleaAMS1c_USB> as
Altium 2009 design (protel)

CPLD logic design is in
<https://jaer.svn.sourceforge.net/svnroot/jaer/trunk/deviceFirmwarePCBLayout/LatticeMachXO/CochleaAMS1c>

Cypress FX2 firmware is in
<https://jaer.svn.sourceforge.net/svnroot/jaer/trunk/deviceFirmwarePCBLayout/CypressFX2/firmware_FX2LP_Cochleaams1c>

Main jAER chip class CochleaAMS1c is in
<https://jaer.svn.sourceforge.net/svnroot/jaer/trunk/host/java/src/ch/unizh/ini/jaer/chip/cochlea>

![](media/image1.png){width="6.5in" height="4.59375in"}

Masterbias RX pot turns counterclockwise to increase master current. Set
to 30k (of 100k ohms max) by 4 twists from full right.

"Main power" jumper supplies VBUS to board.

Jumpers tying biases to rails
-----------------------------

![](media/image2.png){width="2.313607830271216in"
height="2.067571084864392in"}![](media/image3.png){width="1.3514566929133858in"
height="2.0225568678915136in"}

Analog mux selection for ADC
----------------------------

![](media/image4.png){width="3.902791994750656in"
height="3.812029746281715in"}

Power
=====

The PCB draws about 300mA from 5V VBUS on power up, which drops to 190mA
when initialized and running. This is near USB limit.

Scanner
=======

![](media/image5.png){width="3.47619094488189in"
height="2.52246719160105in"}![](media/image6.png){width="2.807739501312336in"
height="4.095238407699037in"}

Microphone preamps
==================

![](media/image7.png){width="6.5in" height="4.077083333333333in"}

Preamp jumpers
--------------

Use jumpers to select preamp/direct connections

  Jumper                       JP14/JP24   JP1    JP9        notes
  ---------------------------- ----------- ------ ---------- --------------------------
  Using off-chip MAX9814       Connect     Pre    off-chip   power off on-chip preamp
  Direct, e.g. to sound card   Connect     Dir    direct     power off on-chip preamp
  Using on-chip preamp         Open        open   on-chip    

Mic preamps schematics
----------------------

**vmic1in** is output of on-chip preamp and input to cochlea. **vmic1**
is input to on-chip preamp. JP14 and JP24 are placed only if using the
off-chip preamp. In that case the on-chip preamp must be powered off
using the bias generator by turning off biases Ibias10pAmp and
Ibias20pAmp The on-chip preamp output is always connected to the basilar
membrane input and the jumpers 14 and 24 should be disconnected if using
the on-chip preamp.

![](media/image8.png){width="6.5in" height="5.035416666666666in"}

Audio input selection
---------------------

![](media/image9.png){width="2.7217082239720036in"
height="2.809523184601925in"}

Mic preamp setup for off-chip preamp with on-board microphones.

![](media/image10.png){width="5.1523807961504815in"
height="3.6644663167104112in"}

Jumper setup for off-chip direct input through 3.5mm plugs, using no
preamp. This causes signals to be applied directly to basilar membrane
input.

Off-chip preamps with AGC
-------------------------

![](media/image11.png){width="6.5in" height="3.890277777777778in"}

Readme for CochleaAMS1c pins (cochleaams1c.chipclass.txt)
=========================================================

\# Description for cochleaams1c chip, Shih-Chii\...\....Date June 10,
2010vdd 3.3package pga120\# signal -\> pin, position, id, group, type,
biastype, offvoltage, defaultvoltage, ifsourcepin 94 (C10) Vtau sos bias
P 3.3 3.3 src \# sets tau of forward amp in SOS (inor)93 (A12) Vq sos
bias P 3.3 3.3 src \# sets tau of feedback amp (inor)47 (N7) Vclbtgate
sos bias P 3.3 3.3 \# sets cutoff frequency of CLBT (in) (bg)78 (F13)
VthAGC sos bias P 3.3 2.5 \# sets input to diffpair for VQ (in)104 (A8)
Vclbtcasc sos bias P 3.3 1.0 \# sets cascode bias of CLBT (in) (bg)35
(M3) Vbias1 sos bias P 3.3 3.1 \# sets cutoff frequency (in) (bg)56
(N11) Vbias2 sos bias P 3.3 3.0 \# sets cutoff frequency (in) (bg)37
(M4) Vdc1 sos bias P 3.3 3.3 \# sets dc res shift tilt to Vin input (in)
(bg)77 (G13) Vdc2 sos bias P 3.3 3.3 \# sets dc res shift tilt to Vin
input (in) (bg)101 (A9) Vcas2 lpf bias N 0.0 0.0 \# sets cascode voltage
to allows subtraction of neighboring stages (in)98 (C9) Vref lpf bias P
3.0 2.3 src \# sets src input for lpf, barepad (inor)99 (A10) Vrefo lpf
bias P 3.0 2.3 src \# sets src output for lpf, barepad (inor) 100 (B9)
Vioff lpf bias P 3.3 2.7 \# sets up DC level for halfwave rectified
input to LPF (in) (bg)39 (N4) Vsetio lpf bias P 3.3 1.4 \# creates 2I0
and I0 for lpf (incas)103 (B8) Vcasbpf lpf bias P 3.0 3.0 \# sets
cascode level for lpf subtract (incas) (bg)95 (B11) VAI0 bpf bias P 3.3
3.3 src \# sets tau of CLBT for ref current (inor)75 (G12) Vrefreadout
bpf bias N 2.4 2.4 \# sets Vref voltage for readout amp (in)97 (B10)
Vrefn bpf bias P 3.0 2.5 \# sets cascode bias in bpf (in)96 (A11) Vrefn2
bpf bias P 3.0 2.5 \# sets dc gain cascode bias in bpf (in) 45 (M7)
Vioffbpf\_n bpf bias N 0.0 0.3 \# sets DC level for input to bpf (in)
(bg)34 (L4) Vbpf1 bpf bias P 3.3 3.3 \# sets cutoff frequency for tilt
bias to CLBT (in) (bg)55 (M10) Vbpf2 bpf bias P 3.3 3.3 \# sets cutoff
frequency for tilt bias to CLBT (in) (bg)80 (F11) Vbp bpf bias P 3.3 2.7
\# sets bias voltage for readout amp (in) (bg) was 76 gll87 (B13) Vgain
general bias P 3.3 2.7 \# sets bias current for differencing amp in
lpf/bpf (inor)102 (C8) Vcascode general bias N 1.0 2.0 \# sets cascode
for all pixels (incas) (bg)46 (L7) VbampP general bias P 3.3 2.7 \# sets
bias of low voltage input amp driving I to neuron (in) (bg)92 (B12) Vdd1
dac bias P 3.3 3.3 src \# powers up DAC (inor)76 (G11) Vrefhres dac bias
N 1.0 2.0 src \# sets source bias of terminator transistor in diffusor
(inor) was 80 f1181 (E13) Vhm dac bias N 1.0 2.0 \# sets bias of
horizontal conductor of diffusor for gain (in)79 (F12) Vpm dac bias N
1.0 2.0 \# sets bias of vertical conductor of diffusor for gain (in)52
(M9) VAGC dac bias N 0.5 0.5 \# used in AGC DAC for gain control of Vq
(in) (bg)54 (L9) Vterm dac bias N 1.0 2.0 \# sets bias of terminator
transistor in diffusor (incas) (bg)38 (L5) Curstart dac bias P 3.3 2.7
\#sets SOS dac masterbias current (in) (bg)48 (N8) Curstartbpf dac bias
P 3.3 2.7 \#sets bpf dac masterbias current (in) (bg)44 (N6)
BiasDACBufferNBias dac bias N 0.5 0.5 \# sets bias current for pixel
dacs, generates BiasDACBufferPBias (in) (bg)53 (N10) Follbias general
bias N 0.0 0.7 \# sets bias for follower in pads (in) (bg)36 (N3)
pdbiasTX aer bias N 0.0 0.5 (in) (bg)90 (A13) req\_puTX aer bias P 3.3
2.7 (in) (bg)63 (M13) IbiasOTA preamp bias N 0.2 0.3 \#bias current for
OTA (in) (bg)64 (K11) Ibias10pAmp preamp bias P 3.0 2.7 \#bias current
for input stage of Opamp (in) (bg)65 (L12) Ibias20pAmp preamp bias P 3.0
2.7 \#bias current for output stage of Opamp (in) (bg)66 (L13)
Vrefpreamp preamp bias P 1.0 1.0 \#reference voltage of OpamP (in)40
(M5) Vthbpf1 neuron bias P 3.0 2.0 \# sets threshold voltage for bpf
neuron (in) (bg)41 (N5) Vthbpf3 neuron bias P 3.0 2.0 \# sets threshold
voltage for bpf neuron (in) (bg)49 (M8) NeuronVleak neuron bias P 3.3
3.3 \# sets leak current for neuron (in) (bg)50 (L8) Vrefract neuron
bias N 0.5 0.5 \# sets refractory period of neuron (in) (bg)51 (N9)
NeuronRp neuron bias P 3.0 3.0 \# sets bias current of threshold
comparator (in) (bg)91 (C11) VcondVt neuron bias N 0.0 0.0 \# set
threshold for conductance neuron (in)105 (B7) Vth1 neuron bias P 3.3 2.7
\# sets threshold voltage for lpf neuron (in)106 (C7) Vth4 neuron bias P
3.3 2.7 \# sets threshold voltage for lpf neuron (in)89 (C12) Vpf neuron
bias N 1.5 1.0 \# sets bias current for scanner follower (in) - bg ,
then incas\# AEROUT\# =====119 (B3) TX7 (DOUT)118 (C4) TX6 (DOUT)117
(A2) TX5 (DOUT)116 (A3) TX4 (DOUT)115 (B4) TX3 (DOUT)114 (C5) TX2
(DOUT)113 (A4) TX1 (DOUT)112 (B5) TX0 (DOUT) \#change coding of bit not
to left/right??4 (D3) TREQB (DOUT) 5 (C2) TACKB (Din) 8 (E3) TY1 (DOUT)7
(D2) TY0 (DOUT)6 (C1) OELatchb \# jumper to /ACK or Gnd (make OELATCH
active low)\# DIG IN10 (E2) Ybit (Din) \# jumper to Vdd or Gnd,
determines whether lpf (0) or bpf (1) neuron to have bits for kill 9
(D1) Selaer (Din) \# jumper to Vdd or Gnd, determines whether the
rectified (0) or lpf (1) version drives AER 16 (G3) SelIn (Din) \#
jumper to Vdd or Gnd (goes to sos), decides cascade (0) or parallel (1)
architecture, generate please SelInB (digout)12 (F3) AERKillbit (Din)
\#Bit to switch off AER pixel (set to 1 to kill latch)\# PREAMP
CONTROL62 (M12) ResCtrBit1 (inpad) \#jumper to Vdd or Gnd, controls size
of the feedback resistor, should be din61 (L11) ResCtrBit2 (inpad)
\#jumper to Vdd or Gnd, controls size of the feedback resistor \# BIAS
GEN SIGNALS23 (K1) powerdown (Din) \# jumper to post or VDD \# DAC
bits11 (E1) Vreset (Din) \# jumper to Vdd to reset latch states of all
latches\# DIG IN18 (H1) Scanclkin (Din) \# active high, for scanners109
(B6) VctrlKillBit (Din) \# active high, to select all KillBit Neuron
Latches, use together with AERKillbit, if need to reset all latches use
Vreset\# DIG OUTXX (XX) Syncvm (Dout) \# (no pins left)19 (H2) Syncb
(Dout) \# inverted from scanner at pad 13 (F2) Syncbpf (Dout) \#
inverted from scanner for bpf at pad \# PREAMP INPUTS68 (J11) Vmic1in
(inor) \#(can be shared), connected to Vin1 of on-chip SOS 1.4, comes
from preamp59 (M11) Vmic1 (inor) \#connected to mic of left channel
equal67 (K12) Vmic2in (inor) \#(can be shared), connected to Vin2 of
on-chip SOS 1.4, comes from preamp60 (N13) Vmic2 (inor) \#connected to
mic of right channel equal \# BIAS GEN IN SIGNALS14 (F1) bitin (Din)17
(G1) bitlatch (Din)21 (J1) bitclock (Din)20 (H3) AddSel \# selects
address DACs (Din)22 (J2) BiasGenSel \# selects biasgen (Din)15 (G2)
DataSel \# selects data DACs (Din)\#BIAS GEN OUTPUT SIGNALS 24 (J3)
biasgenbitout (Dout) 28 (K3) biasgenlatchbar (Dout) 29 (L2) biasgenclk
(Dout) \# BIAS GEN masterbias31 (L3) rinternal (bare) \# jumper to gnd32
(M2) rx (bare) \# rx of masterbias1 inpad (hook up 10Kpot)33 (N2)
BiasGenNBias (in) \# output of bias for masterbias \# hook up to cap on
board\# COCHLEA ANALOG OUT70 (J12) C1bus (aout) \# scanned C1
(follower)69 (K13) C2bus (aout) \# scanned C2 (follower)72 (H11) C3bus
(aout) \# scanned C3 (follower)71 (J13) C4bus (aout) \# scanned C4
(follower)\# COCHLEA BPF ANALOG OUT74 (H13) scanbpfout (aout) \#bpf
I1-I2 output of 1st cochlea (follower)73 (H12) scanbpfout2 (aout) \#bpf
I1-I2 output of 2nd cochlea (follower)\# VM NEURON ANALOG OUT82 (E12)
scanvmiL (aout) \#LPF neuron cochlea left83 (D13) scanbpfL (aout) \#BPF
neuron cochlea left84 (E11) scanvmiR (aout) \#LPF neuron cochlea right85
(D12) scanbpfR (aout) \#BPF neuron cochlea right\# TEST NEURON PINSxx
(xx) spikeoutT (Dout) \#test neuron spike, no pins left88 (D11)
vmhwroutT (aout) \#test neuron vm\# POWER108 (A6) AVdd (power)43 (M6)
AVdd (power)107 (A7) AGnd (power)42 (L6) AGnd (power)86 (C13) AGnd
(power)26 (L1) DigVdd (power)57 (N12) DigVdd (power)58 (L10) DigGnd
(power)27 (M1) DigGnd (power)3 (B1) ArbVdd (power)111 (A5) ArbVdd
(power)2 (B2) ArbGnd (power)110(C6) ArbGnd (power)25 (K2) PADVDD
(power)120 (A1) PADVDD (power)1 (C3) PADGND (power)30 (N1) PADGND
(power)(total 120 pins)\*\*latch bit for AER out\*\*latch for sos
GAIN\*\*latch for bpf tau\*\*latch for bpf gain

Biases
======

Bonding diagram
===============

Chip is packaged in PGA120 package from Europractice.

Package diagrams
================

In partsDatasheets/CD\_PGA120.pdf
