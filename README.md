# Bare bones cpp17 support for Arduino

This is a demonstration of writing code for an Arduino using cpp17 features.

## Required for set up
This quick start guide was written for OS X.

** This projects assumes you have ARDUINO IDE 1.6+ installed **

### Get Arduino Make to work
See https://github.com/sudar/Arduino-Makefile for more details
```
# add tap
$ brew tap sudar/arduino-mk

# to install the last stable release
$ brew install arduino-mk

# to install the development version
$ brew install --HEAD arduino-mk

pip install pyserial
```

### Build the code
```
cd $PROJECT_DIR // root of this repo
cd src
make
```

It should build hello_world. Please let me know if this doesn't work.

## Thanks!
This repo runs on the following:

- Arduino Make: https://github.com/sudar/Arduino-Makefile
- `.ycm_config.py` from: https://github.com/ladislas/Bare-Arduino-Project

