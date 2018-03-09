# User Guide: libcaer

*Our documentation is regularly being improved along with our products.
If this guide is missing the answer to any question you may have, please
don't hesitate to ask us on the appropriate [support
forum](https://groups.google.com/d/forum/davis-users/). If
your question involves confidential information, however, please use
[support@inilabs.com. First you could try our*
*[troubleshooting
guide](https://www.inilabs.com/support/faq/).*

- [What is libcaer?](#what-is-libcaer)
- [Installation](#installation)
- [Automated Installation](#automated-installation)
- [Fedora Linux](#fedora-linux)
- [Gentoo Linux](#gentoo-linux)
- [Ubuntu Linux](#ubuntu-linux)
- [MacOS X](#macos-x)
- [Manual Installation](#manual-installation)
- [Usage](#usage)

## What is libcaer?

Libcaer is a small C library to access, configure and get/send data
from/to inivation neuromorphic devices, such as sensors or processors.

Libcaer is intended to give direct low-level access to inivation
devices, by abstracting data format and interpretation, device access
and configuration, and data transfer. It has a minimal API, only
defining event formats and a few functions for device control.

It is intended to be used for integration into existing frameworks and
code, also thanks to its open BSD license. If you don't have any
existing code you need to work with, we recommend using the [cAER
framework](https://inilabs.com/support/software/caer/),
which adds a lot of useful functionality on top, such as configuration
management, logging, modularity and provides ready-to-use modules for
data processing and data visualization.

See [this inivation [software
comparison](https://inivation.com/support/software/) for
more information about different software frameworks and libraries that
are available to interact with neuromorphic devices.

## Installation

### Automated Installation

We provide packages for the Linux distributions Fedora, Gentoo and
Ubuntu, as well as for MacOS X via Homebrew.

#### Fedora Linux

We provide a [COPR
repository](https://copr.fedorainfracloud.org/coprs/llongi/inilabs/)
for Fedora 25, 26, 27 and rawhide on the x86 and x86\_64 architectures.

Please execute the following commands to use it and install libcaer:

\$ sudo dnf copr enable llongi/inilabs

\$ sudo dnf install libcaer

#### Gentoo Linux

A valid Gentoo ebuild repository is available
[here](https://github.com/inilabs/gentoo-inilabs/) over
Git. The package is 'dev-libs/libcaer'.

#### Ubuntu Linux

We provide a [PPA repository](https://launchpad.net/~llongi/+archive/ubuntu/inilabs)
for Ubuntu Trusty (14.04 LTS), Xenial (16.04 LTS), Zesty (17.04) and
Artful (17.10) on the x86, x86\_64, arm and arm64 architectures.

Please execute the following commands to use it and install libcaer:

\$ sudo add-apt-repository ppa:llongi/inilabs

\$ sudo apt-get update

\$ sudo apt-get install libcaer

Windows, MacOS X and other Linux distribution users, please follow the
'[Manual Installation](#manual-installation)' instructions
below.

#### MacOS X

We provide a [Homebrew tap](https://github.com/inilabs/homebrew-inilabs/) for
MacOS X. Install [Homebrew](https://brew.sh/) and then
please execute the following commands to install libcaer:

```
\$ brew tap inilabs/inilabs
\$ brew install libcaer \--with-libserialport \--with-opencv
```

### Manual Installation

Please read the main
[README](https://github.com/inilabs/libcaer/blob/master/README)
file carefully, it explains all steps for manual installation on Linux
and MacOS X systems. For Windows users, the additional file
[README.Windows](https://github.com/inilabs/libcaer/blob/master/README.Windows)
explains all the steps needed to get libcaer installed there.

Building libcaer requires some dependencies to be installed, see the
*REQUIREMENTS* section in the
[README](https://github.com/inilabs/libcaer/blob/master/README)
file. You will need to find and install those using your system's
package manager, some examples are provided for Fedora Linux, Ubuntu
Linux and MacOS X (using Homebrew).

### Usage

A full API documentation can be found
[here](https://inilabs.github.io/libcaer/) as HTML (or
[here](https://github.com/inilabs/libcaer/raw/master/docs/libcaer_api_manual.pdf)
in PDF format).

Also be sure to take a look at the
[README](https://github.com/inilabs/libcaer/blob/master/README)
file and the examples/ directory.
