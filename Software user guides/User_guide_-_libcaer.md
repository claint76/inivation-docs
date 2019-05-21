# User Guide - libcaer

## Table of contents
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
framework](https://inivation.com/support/software/caer/),
which adds a lot of useful functionality on top, such as configuration
management, logging, modularity and provides ready-to-use modules for
data processing and data visualization.

See this [software comparison](https://inivation.com/support/software/) for
more information about different software frameworks and libraries that
are available to interact with neuromorphic devices.

## Installation

### Automated Installation

We provide packages for the Linux distributions Fedora, Gentoo and
Ubuntu, as well as for MacOS X via Homebrew.

#### Fedora Linux

We provide a [COPR repository](https://copr.fedorainfracloud.org/coprs/llongi/inivation/)
for Fedora 28, 29, 30 and rawhide on the x86 and x86_64 architectures.

Please execute the following commands to use it and install libcaer:

```bash
$ sudo dnf copr enable llongi/inivation

$ sudo dnf install libcaer-devel
```

#### Gentoo Linux

A valid Gentoo ebuild repository is available [here](https://gitlab.com/inivation/gentoo-inivation/)
over Git. The package is 'dev-libs/libcaer'.

#### Ubuntu Linux

We provide a [PPA repository](https://launchpad.net/~llongi/+archive/ubuntu/inivation)
for Ubuntu Xenial (16.04 LTS), Bionic (18.04 LTS) and Disco (19.04)
on the x86, x86_64, armhf and arm64 architectures (armhf/arm64 only supported on Disco).

Please execute the following commands to use it and install libcaer:

```bash
$ sudo add-apt-repository ppa:llongi/inivation

$ sudo apt-get update

$ sudo apt-get install libcaer-dev
```

For other Linux distributions, please follow the
[Manual Installation](#manual-installation) instructions below.

#### MacOS X

We provide a [Homebrew tap](https://gitlab.com/inivation/homebrew-inivation/) for
MacOS X. Install [Homebrew](https://brew.sh/) and then
please execute the following commands to install libcaer:

```bash
$ brew tap inivation/inivation

$ brew install libcaer --with-libserialport --with-opencv
```

### Manual Installation

Please read the main [README](https://gitlab.com/inivation/libcaer/blob/master/README)
file carefully, it explains all steps for manual installation on Linux
and MacOS X systems. For Windows users, the additional file [README.Windows](https://gitlab.com/inivation/libcaer/blob/master/README.Windows)
explains all the steps needed to get libcaer installed there.

Building libcaer requires some dependencies to be installed, see the
*REQUIREMENTS* section in the [README](https://gitlab.com/inivation/libcaer/blob/master/README)
file. You will need to find and install those using your system's
package manager, some examples are provided for Fedora Linux, Ubuntu
Linux and MacOS X (using Homebrew).

## Usage

A full API documentation can be found [here](https://inivation.gitlab.io/libcaer/) (HTML format).

Also be sure to take a look at the [README](https://gitlab.com/inivation/libcaer/blob/master/README)
file and the examples/ directory.
