SUMMARY = "A Simple library for communicating with USB and Bluetooth HID devices"
AUTHOR = "Alan Ott"
HOMEPAGE = "http://www.signal11.us/oss/hidapi/"
SECTION = "libs"

LICENSE = "BSD-3-Clause | GPLv3"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=7c3949a631240cb6c31c50f3eb696077"

DEPENDS = "libusb udev"

BBCLASSEXTEND += " native nativesdk"

inherit autotools pkgconfig

SRC_URI = "git://github.com/libusb/hidapi.git;protocol=https;branch=master"
PV = "0.14.0"
SRCREV = "d3013f0af3f4029d82872c1a9487ea461a56dee4"
S = "${WORKDIR}/git"
