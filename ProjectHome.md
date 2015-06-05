Pre-built modules available here:

http://www.starlino.com/store/usb-thumb

This  project contains some customized firmware code for USBThumb. Each project has a Release directory where you can get pre-compiled .hex files. These hex files can be loaded to UsbThumb using the USB HID Bootloader software (part of Microchip's USB Framework) or using a programmer, unless otherwise noted. Please note that some hex files that include a bootloader will have the prefix UsbThumbBootloader - you can use these to program UsbThumb with both bootloader and custom application, bootloader region can only be overwritten using a PIC programmer. If you use these hex files with software bootloader utility only the application part will be overwritten.

See: http://starlino.com/usbthumb_firmware_upgrade.html


---

**Open Hardware**

Unlike other PIC development platforms, anyone can build an UsbThumb, the Eagle schematics and board files are available here:

http://code.google.com/p/usbthumb/source/browse/#svn/trunk/Hardware


---

**USBThumbBootloader**

This is the bootloader firmware for USBThumb it allows other USBThumb firmwares to be loaded without the need of the programmer, using the USB port and "USB HID Bootloader" application part of Microchip's USB Framework. This is a modified version of  Microchip's "USB Device - Bootloaders" firmware. The main changes are that all pins are made inputs, original Microchip's bootloader makes some pins output while in bootloader mode.


---


**USBThumbBlink**

A really simple sample project that blinks a led+resistor connected between GND and pin B7. You can use it to start your own UsbThumb project.


---


**USBThumbSerial**

A USB to Serial converter, that can also be used as a propeller programmer. It is a modified version of Microchip's sample "USB Device - CDC - Serial Emulator". The main change is that the DTR pin output is inverted so it can sink current, thus providing a Reset function for the Propeller.

See:

http://starlino.com/usbthumb_propeller_programmer.html


---


**USBThumbImu**

A motion gamepad application. Implements a HID Gamepad device. Requires Acc\_Gyro shield board attached to UsbThumb.



---


**USBThumbMousePrank**

Example customization of Microchip's sample 'USB Device - HID - Mouse'. Makes use of Timer0 overflow interrupt to rotate mouse for 4 seconds, then delay for 60 seconds, then repeat. It's also a good example how to make use of remapped bootloader Interrupt routines.


---


**General Information about USBThumb**

USBThumb is a miniature PIC USB development platform with an integrated USB
bootloader. Its main purpose is development of thumb-sized USB gadgets , for example: SD/Flash thumb-drives, serial converters, mouse, gamepad , keyboard emulators, usb dongles for software protection, etc.

You can pick a module here:

http://www.starlino.com/store/usb-thumb


USBThumb was build as a small-size version of Mircochip's Low Pin Count USB Develpment Kit. All samples that Microchip provides for this board should also work with USBThumb.

Here are just few applications that you can customize or use "as is" once you download the Microchip's USB Framework, now part of Microchip Application Libraries:

USB Device - Audio - Microphone

USB Device - Audio - MIDI

USB Device - Bootloaders

USB Device - CDC - Basic Demo

USB Device - CDC - Serial Emulator

USB Device - HID - Custom Demos

USB Device - HID - Digitizers

USB Device - HID - Joystick

USB Device - HID - Keyboard

USB Device - HID - Mouse

USB Device - HID - Uninterruptible Power Supply

USB Device - LibUSB - Generic Driver Demo

USB Device - MCHPUSB - Generic Driver Demo

USB Device - WinUSB - Generic Driver Demo

USB Device - WinUSB - High Bandwidth Demo

USB OTG - MCHPUSB - Generic Driver Demo

USB PC - WM\_DEVICECHANGE Demo

USB Precompiled Demos

USB Precompiled Library Projects