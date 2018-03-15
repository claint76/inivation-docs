# inivation-docs
Documentation for iniVation products.
# Links to html web pages
## Advanced configurations
- [User_guide_-_Biasing](https://inivation.github.io/inivation-docs/Advanced%20configurations/User_guide_-_Biasing)
- [User_guide_-_synchronisation](https://inivation.github.io/inivation-docs/Advanced%20configurations/User_guide_-_synchronisation)
## Application notes
- [DAVIS_Synchronization_and_Calibration_with_Vicon](https://inivation.github.io/inivation-docs/Application%20notes/DAVIS_Synchronization_and_Calibration_with_Vicon)
- [DVS_LED_Marker_Signaling_and_Location_Tracking](https://inivation.github.io/inivation-docs/Application%20notes/DVS_LED_Marker_Signaling_and_Location_Tracking)
- [DVS_Stereo_Calibration](https://inivation.github.io/inivation-docs/Application%20notes/DVS_Stereo_Calibration)
- [DVS_particle_tracking_pixel_bandwidth_considerations](https://inivation.github.io/inivation-docs/Application%20notes/DVS_particle_tracking_pixel_bandwidth_considerations)
## Hardware user guides
- [User_guide_-_DAVIS240](https://inivation.github.io/inivation-docs/Hardware%20user%20guides/User_guide_-_DAVIS240)
- [User_guide_-_DAVIS_USB3_development_kit](https://inivation.github.io/inivation-docs/Hardware%20user%20guides/User_guide_-_DAVIS_USB3_development_kit)
- [User_guide_-_DVS128.md](https://inivation.github.io/inivation-docs/Hardware%20user%20guides/User_guide_-_DVS128)
- [User_guide_-_eDVS_and_PushBot](https://inivation.github.io/inivation-docs/Hardware%20user%20guides/User_guide_-_eDVS_and_PushBot)
## Others
- [FAQ_and_troubleshooting](https://inivation.github.io/inivation-docs/Others/FAQ_and_troubleshooting)
- [Student_projects](https://inivation.github.io/inivation-docs/Others/Student_projects)
- [Support_overview](https://inivation.github.io/inivation-docs/Others/Support_overview)
## Software user guides
- [AEDAT_file_formats](https://inivation.github.io/inivation-docs/Software%20user%20guides/AEDAT_file_formats)
- [Software_user_guides](https://inivation.github.io/inivation-docs/Software%20user%20guides/Software_user_guides)
- [User_guide_-_Reflashing_devices](https://inivation.github.io/inivation-docs/Software%20user%20guides/User_guide_-_Reflashing_devices)
- [User_guide_-_cAER](https://inivation.github.io/inivation-docs/Software%20user%20guides/User_guide_-_cAER)
- [User_guide_-_caerctl-gui-javafx_GUI](https://inivation.github.io/inivation-docs/Software%20user%20guides/User_guide_-_caerctl-gui-javafx_GUI)
- [User_guide_-_jAER](https://inivation.github.io/inivation-docs/Software%20user%20guides/User_guide_-_jAER)
- [User_guide_-_libcaer](https://inivation.github.io/inivation-docs/Software%20user%20guides/User_guide_-_libcaer)

# Hints on to write .md to have good html rendering
## Hint1
don't use raw links, as: https://github.com/inivation/inivation-docs; use instead ```[https://github.com/inivation/inivation-docs](https://github.com/inivation/inivation-docs)```
otherwise it does not work the automatic linking, when rendered
## Hint2
when doing internal links, put "-" for each space present in the title, **NOT CONSIDERING** symbols, like /.
For example, a title like "# hello / hello - hello" must be referenced as [ref](#hello--hello---hello)

Create separation for test -------------------------------------------------

Create separation for test -------------------------------------------------

Create separation for test -------------------------------------------------

Create separation for test -------------------------------------------------
### hello / hello - hello

## Hint3
If html does not render properly from some point of the document to the end, probably there is a html tag wrong.

For example you can have created erroneously a not recognised tag, like:
```html
    <hello>
```

Another possibility is that you have not closed an open html tag, like:
```html
    1. <p align="center"><img src="media/eDVS_force_program.png" width="600">
    2. <p align="center"><img src="media/eDVS_force_program.png" width="600"/>
    3. <p align="center"><img src="media/eDVS_force_program.png" width="600"/></p>
```
In the first case, i didn't close the image tag and the ```<p align="center"``` one.

In the second case i closed the image tag, but still not the ```<p align="center"``` one.

The third one is properly written

## Hint4
Leave a space between a title and a table, for example:
```markdown
# My title
| First col     | Second col    | 
| ------------- | ------------- |
| first row     | first row     |
| second row    | second row    |
| third row     | third row     |
```

Is not rendered properly, while:
```markdown
# My title

| First col     | Second col    | 
| ------------- | ------------- |
| first row     | first row     |
| second row    | second row    |
| third row     | third row     |
```