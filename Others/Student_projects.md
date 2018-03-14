# Students projects

Neuromorphic engineering is a highly interdisciplinary subject that
integrates biology, physics, mathematics, computer science and
engineering. One of the goals of the field is to design micro-electronic
neural systems, such as artificial retinas, auditory processors, neural
cores and autonomous robots. It is a field in rapid expansion in which
physical architectures are realized in order to mimic the intelligence
of neuro-biological systems.

IniLabs takes top-level students in computer science, physics, or
electrical engineering for thesis projects or internships. Projects for
course credit are registered with the student's home university (for
local students, the University of Zurich or the ETH Zurich).
[Contact
us](http://inilabs.com/company/contact) if you are a student
interested in one of the projects listed below, or if you would like to
discuss a related project. In general, any of the projects listed below
could be considered as a Semester, Bachelors or Masters project (with
some exceptions).

Projects can offer:

  - > Work with dynamic vision sensors or other neuromorphic prototypes

  - > Work with event-based processing

  - > Develop hardware

The general requirements for these projects (although the requirements
may vary from project to project) are:

  - > Mathematical background.

  - > Basic programming skills; proficiency in Java or C is especially
    > important for real-time event-based algorithms; as well as Python
    > or Matlab for offline data analysis.

  - > Advantageous: Familiarity with analog/digital micro-electronics.

  - > Optional: background in machine vision or machine learning

  - > For some projects: Familiarity with laboratory equipment
    > oscilloscopes, multimeters, basic electronic devices

Successful completion of projects may result in the publication of a
peer-reviewed scientific paper, or in some cases a patent.

Below are suggestions for projects which will be useful to us and in
some cases to our industrial clients. Novel suggestions for projects
also welcome. Please get in touch if you are interested.

## Table of contents
* [Tracking of flashing LED](#tracking-of-flashing-led-markers)
* [People counting](#people-counting)
* [Perspective-n-Point](#perspective-n-point-problem)
* [Optic flow](#optic-flow)
* [Low contrast imaging](#low-contrast-imaging)
* [True North - Winner Takes](#true-north---winner-takes-all)
* [Pest tracking](#pest-tracking)
* [Vibrocam](#vibrocam)
* [APIs to libcaer](#apis-to-libcaer)
* [Eye-blink counting for wakefulness](#eye-blink-counting-for-wakefulness-estimation)
* [Gaze tracking](#gaze-tracking)
* [Characterization of dynamic vision sensors](#characterization-of-dynamic-vision-sensors)
* [Spike­-based classification of event­-based visual data](#spike-based-classification-of-event-based-visual-data)
* [Depth from motion using dynamic vision sensors](#depth-from-motion-using-dynamic-vision-sensors)

# Tracking of flashing LED markers

Use the dynamic vision sensor (DVS) to track a moving LED as it flashes.
We have seen that the DVS is fast enough to be able to distinguish
different blinking frequencies of LEDs at least up to 10 KHz and
probably beyond, so that, it can recognize a specific LED if there are
several flashing at different frequencies. The work that needs to be
done is to track multiple such markers as they move around within the
visual scene. During this project, you will learn how to use the dynamic
vision sensor, capture data with camera and write software in the jAER
software framework.

# People counting

Use the dynamic vision sensor to count people moving in and out of a
public area. You will work with the jAER software framework. You will
capture data, learning how to use dynamic vision sensors in the process.

# Perspective-n-Point problem

You will read and understand solutions to the perspective-n-point
problem based on event-based data from dynamic vision sensors. You will
implement these methods in the jAER software framework. Then you will
come up with better methods!

# Optic flow 

A new computationally-efficient approach to optic flow from dynamic
vision has been developed at INI. You will understand this approach and
re-implement it in the jAER software framework, documenting it and
benchmarking it against other existing approaches. You may optionally
reimplement this in the cAER framework.

# Low contrast imaging

A new dynamic vision sensor prototype has been created, which can
produce events from very low contrast changes. This could be useful for
fluorescence imaging. You will learn to use the dynamic vision sensor
and you will attempt to apply it in such an experiment. This will
involve working with an external academic partner.

# True North - Winner Takes All

True North is IBM’s neuromorphic multicore processor. You will use the
simulator for this hardware to demonstrate the feasibility of using this
hardware to implement a class of neural algorithm which has recently be
found to have compelling advantages for constraint satisfaction
problems.

# Pest tracking

Are rats, cockroaches or other pests present in industrial kitchens at
night? You will capture data, learning how to use dynamic vision sensors
in the process, and you will write software in the jAER software
framework to detect and quantify this activity.

# Vibrocam

The dynamic vision sensor can visualise vibrations on the order of 10
kHz. You will capture data, learning how to use dynamic vision sensors
in the process, and you will write software in the jAER software
framework which apply this capability to characterising the vibration of
industrial machinery.

# APIs to libcaer

libcaer is a small C library that offers a minimal API to access
iniLabs’ neuromorphic devices. It would be useful to be able to access
those devices natively also in other programming languages that are
popular with scientific and industrial data processing applications,
such as Python or C++.

Your job would be to write wrappers that use the libcaer library to
offer native, efficient APIs in a variety of languages, such as:

  - > C++, Python, Matlab

  - > optionally: Java, C#, Swift, R

Most of these may be realized by using the SWIG wrapper generator,
understanding it and its suitability for this particular purpose would
be one of the project's tasks.

# Eye-blink counting for wakefulness estimation 

The project involves the use of a Dynamic Vision Sensor (DVS), which is
developed by the Sensors group led by Prof. Dr. Tobi Delbruck. The aim
of the project is the development of mathematical models and software
tools for eye-blink counting, to detect levels of wakefulness of humans.
A microsleep is a temporary episode of sleep that can last for a
fraction of a second or up to thirty seconds where an individual fails
to respond to some arbitrary sensory input and becomes unconscious. This
occur when an individual loses awareness and subsequently gains
awareness after a brief lapse in consciousness, or when there are sudden
shifts between states of wakefulness and sleep. The project consists of
collecting a database of human eye-blink data in different lighting
conditions. The student must then write a filter in jAER that is capable
of robustly recognizing eye-blinks. It should count, track and produce
statistics of eye-blinks. The final aim is to estimate the level of
wakefulness of individuals.

# Gaze tracking

The more a wearable cognitive assistant knows about what’s going on in
the mind of its wearer, the more it can assist. ‘Gaze’ is the term for
direction of vision in space. Gaze gives many cues as to mind state, and
when correlated with a forward view they can give lots of information
about what the person is paying attention to. Gaze tracking today is
done either using desk-mounted apparatus, or with wearable glasses for
off-line analysis. Wearable always-on gaze tracking presents a challenge
for the power budget of a lightweight device (such as google glass). DVS
technology could help to get this power budget right down. There have
been feasibility studies for gaze tracking based on the DVS, but poor
lighting and calibration are challenges. The advent of DAVIS technology
could really nail this problem, since images could be used for position
calibration when the headset inevitably moves, and for reinitialisation
of pupil position in the presence of distractors (glints, blinks etc).

Previous Work:
[http://wiki.cogain.org/images/7/7f/COGAIN-D5.5.pdf](http://wiki.cogain.org/images/7/7f/COGAIN-D5.5.pdf)

# Characterization of dynamic vision sensors 

The project involves the use of a Dynamic Vision Sensor (DVS), which is
developed by the Sensors group led by Prof. Dr. Tobi Delbruck. Several
new dynamic vision sensor prototypes have recently been developed, but
the literature of this emerging field lacks clarity about how best to
characterize these novel sensors, in terms of dynamic range, contrast
sensitivity, power consumption, temperature dependence etc. The aim of
the project is the development of standard methods for characterization
of these Dynamic Vision Sensors in at least one but ideally several of
the aforementioned attributes.

# Spike­-based classification of event­-based visual data

The project involves the use of a Dynamic Vision Sensor (DVS), which is
developed by the Sensors group led by Prof. Dr. Tobi Delbruck. The aim
of the project is the software implementation of an event­-based Deep
Neural Network architecture capable of achieving detection of humans.

The student will work in collaboration with IniLabs scientists and they
will help in collecting a labeled database of DVS recordings. After
that, the student should develop a spiking Deep Neural Network
architecture for human recognition. Currently most applications of DNNs
do not exploit the event-­based nature of neural networks. Here we
propose a project that aims to implement DNNs efficiently, using
low­-latency, low­-power, and compact cameras. Computation by means of
events seems a promising approach in order to develop systems that are
active on demand, are low­-power and can be readily integrated in
hardware.

# Depth from motion using dynamic vision sensors 

The project involves the use of a Dynamic Vision Sensor (DVS), which is
developed by the Sensors group led by Prof. Dr. Tobi Delbruck. The aim
of the project is the development of mathematical models and software
tools for depth estimation and 3D scene reconstruction from an array of
Dynamic Vision Sensors.
