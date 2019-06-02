### PROJECT_DIR
### This is the path to where you have created/cloned your project
PROJECT_DIR       = $(shell dirname $(shell pwd))

### ARDMK_DIR
### Path to the Arduino-Makefile directory.
ARDMK_DIR         = $(HOME)/git/Arduino-Makefile

### ARDUINO_DIR
### Path to the Arduino application and resources directory.
### For Arduino IDE 1.6.x ++
ARDUINO_DIR       = /Applications/Arduino.app/Contents/Java

### USER_LIB_PATH
### Path to where the your project's libraries are stored.
USER_LIB_PATH    :=  $(realpath $(PROJECT_DIR)/lib)

### BOARD_TAG & BOARD_SUB
### For Arduino IDE 1.6.x
### Both BOARD_TAG and BOARD_SUB are needed. They must be set to the board you are currently using. (i.e BOARD_TAG = uno, mega, etc. & BOARD_SUB = atmega2560, etc.)
### Note: for the Arduino Uno, only BOARD_TAG is mandatory and BOARD_SUB can be equal to anything
BOARD_TAG         = uno
BOARD_SUB         = atmega2560

### The port your board is connected to. 
### Using an '*' tries all the ports and finds the right one.
MONITOR_PORT      = /dev/tty.usbmodem*

### It must be set to Serial baudrate value you are using.
MONITOR_BAUDRATE  = 115200

### AVR_TOOLS_DIR
### Path to the AVR tools directory such as avr-gcc, avr-g++, etc.
AVR_TOOLS_DIR     = /usr/local

### Path to avrdude directory.
AVRDUDE           = /usr/local/bin/avrdude

CFLAGS_STD        = -std=gnu11
CXXFLAGS_STD      = -std=gnu++17
CXXFLAGS         += -pedantic -Wall -Wextra
LDFLAGS          += -fdiagnostics-color

### OBJDIR
### Don't touch this!
### This is where you put the binaries you just compile using 'make'
CURRENT_DIR       = $(shell basename $(CURDIR))
OBJDIR            = $(PROJECT_DIR)/build/$(CURRENT_DIR)/$(BOARD_TAG)

### path to Arduino.mk, inside the ARDMK_DIR, don't touch.
include $(ARDMK_DIR)/Arduino.mk

