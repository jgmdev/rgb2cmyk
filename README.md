# RGB to CMYK GUI

A simple graphical user interface to facilitate the conversion of an
image from the RGB color space into the CMYK color space on Linux.
The GUI sits in top of the imagemagick __convert__ command to perform
the color space conversion operation.

![RGB2CMYK Icon](https://raw.githubusercontent.com/jgmdev/rgb2cmyk/master/resources/rgb2cmyk.svg)

* OS: Linux
* License: GPLv3

## Requirements

* [ImageMagick](https://www.imagemagick.org/) - perform color conversion
* [colord](https://www.freedesktop.org/software/colord) - provides .icc color profiles
* [wxWidgets](https://wxwidgets.org) - graphical interface
* [Meson](https://mesonbuild.com/) - build the application

## Compilation

To build the application execute the following commands:

```sh
meson setup build --prefix /usr
ninja -C build
```

You can specify a different __wx-config__ file by editing the
nativefile.ini and compiling with the additional __--native-file__
flag as follows:

```sh
meson setup build --native-file nativefile.ini --prefix /usr
ninja -C build
```

## Installation

After a successfull build you can install the utility by executing:

```sh
sudo ninja -C build install
```

## Screenshots

![RGB2CMYK main](https://raw.githubusercontent.com/jgmdev/rgb2cmyk/master/screenshots/main.png)

![RGB2CMYK settings](https://raw.githubusercontent.com/jgmdev/rgb2cmyk/master/screenshots/settings.png)
