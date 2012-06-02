TARGET = kegboard-v3
MCU = atmega328p
F_CPU = 16000000
ARDUINO_LIBS = EEPROM SoftwareSerial
AVRDUDE_ARD_BAUDRATE = 115200
AVRDUDE_ARD_PROGRAMMER = arduino

UNAME_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')

ifeq ($(UNAME_S), Linux)
ARDUINO_DIR ?= /usr/share/arduino
ARDUINO_PORT ?= /dev/ttyACM0

AVR_TOOLS_PATH ?= /usr/bin
AVRDUDE ?= $(ARDUINO_DIR)/hardware/tools/avrdude
AVRDUDE_CONF ?= $(ARDUINO_DIR)/hardware/tools/avrdude.conf
endif

ifeq ($(UNAME_S), Darwin)
ARDUINO_DIR ?= /Applications/Arduino.app/Contents/Resources/Java
ARDUINO_PORT ?= /dev/tty.usbserial*
endif

include Arduino.mk
