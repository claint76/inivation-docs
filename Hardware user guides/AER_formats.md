# Address-Event Representation (AER) protocol

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [support
forum](https://groups.google.com/d/forum/davis-users/). If
your question involves confidential information, however, please use
[support@inilabs.com]. First you could try our*
*[troubleshooting
guide](https://www.inilabs.com/support/faq/).*

- [Introduction](#introduction)
- [DVS128 PAER](#dvs128-paer)
- [DAVIS128](#davis128)
- [DAVIS208](#davis208)
- [DAVIS240](#davis240)
- [DAVIS346](#davis346)
- [DAVIS640](#davis640)
- [H-DAVIS640](#h-davis640)

## Introduction

All neuromorphic chips sold by iniLabs use the AER (Address Event
Representation) protocol to transmit events off-chip in an asynchronous
manner.

The AER protocol is a simple protocol using a variable number of lines
(bus) to transmit data, and two lines (REQ and ACK) to synchronize the
data between the sender and the receiver asynchronously using a
four-phase handshake. (This is also called a bundled asynchronous
protocol). The ACK and REQ lines are active-low.

In this guide we explain the protocol from the receiver's perspective,
where REQ is to be considered an input and ACK an output:

1.  The receiver waits for the REQ line to be asserted by the sender
2.  At this point, the data on the bus can be considered valid and stored
3.  The receiver confirms having read the data by asserting ACK
4.  It then waits until the sender has again deasserted REQ, deasserts ACK itself and goes back to wait in (1) for the next transaction

The following website has number of very detailed explanations for
further reading:

[http://www.cl.cam.ac.uk/\~djg11/wwwhpr/fourphase/fourphase.html](http://www.cl.cam.ac.uk/~djg11/wwwhpr/fourphase/fourphase.html)

Also, for details on AER, please look at:

[https://www.ini.uzh.ch/\~amw/scx/std002.pdf](https://www.ini.uzh.ch/~amw/scx/std002.pdf)

For FPGA implementations, we recommend synchronizing at least the REQ
input using a double-flip-flop synchronizer. Data itself should also
synchronized in this way, or by connecting it directly to a register
with an Enable signal and enabling it only during phase (2).

The format of the data depends on the sensor type and size.

The DVS128 with PAER connector have a parallel AER interface, meaning all the data for an event is
pushed out at once from the chip. In the following detailed
descriptions, this is called 'Simple AER protocol'.

In contrast, all current iniLabs DAVIS sensors employ a serial data
format, meaning that the X and Y addresses are not output concurrently,
but separately one after the other.

One extra data bit, called XSelect, is used to disambiguate between the
two types of address.

Current sensors employ a row-wise readout scheme, so a Y (row) address
will always be followed by a series of one or more X (column) addresses.
The column address will also contain the Polarity information bit.

NOTE: DAVIS240 A/B/C sensors may produce glitches known as "row-only
events", where a Y (row) address is followed immediately by another Y
(row) address. In this case, just discard the earlier address.

For all current iniLabs sensors, the format is documented in detail
below:

## DVS128 PAER
```
AER bus width: 15 (14 downto 0)

Simple AER protocol

Y address is: 7 bits, 14 downto 8

X address is: 7 bits, 7 downto 1

Polarity is: on 0 (0 - ON, 1 - OFF)
```

## DAVIS128
```
AER bus width: 9 (8 downto 0)

XSelect is: 8

if XSelect = '1' then

    X Address, address is: 7 bits, 7 downto 1, polarity on 0

else

    Y Address, address is: 7 bits, 6 downto 0, 7 is don't care

end if;
```

## DAVIS208
```
AER bus width: 10 (9 downto 0)

XSelect is: 9

if XSelect = '1' then

    X Address, address is: 8 bits, 8 downto 1, polarity on 0

else

    Y Address, address is: 8 bits, 7 downto 0, 8 is don't care

end if;
```

## DAVIS240
```
AER bus width: 10 (9 downto 0)

XSelect is: 9

if XSelect = '1' then

    X Address, address is: 8 bits, 8 downto 1, polarity on 0

else

    Y Address, address is: 8 bits, 7 downto 0, 8 is don't care

end if;
```

## DAVIS346
```
AER bus width: 11 (10 downto 0)

XSelect is: 10

if XSelect = '1' then

    X Address, address is: 9 bits, 9 downto 1, polarity on 0

else

    Y Address, address is: 9 bits, 8 downto 0, 9 is don't care

end if;
```

## DAVIS640
```
AER bus width: 11 (10 downto 0)

XSelect is: 10

if XSelect = '1' then

    X Address, address is: 9 bits, 9 downto 1, polarity on 0

else

    Y Address, address is: 10 bits, 9 downto 0

end if;
```

## H-DAVIS640
```
AER bus width: 11 (10 downto 0)

XSelect is: 10

if XSelect = '1' then

    X Address, address is: 9 bits, 9 downto 1, polarity on 0

else

    Y Address, address is: 8 bits, 7 downto 0, 9-8 are don't care

end if;
```