This bootloader is based on standard Microchip sample bootloader HID Bootloader - Firmware for PIC18 Non-J Devices.

The main IMPORTANT edit (targeted at 20pin devices only)
is that all pins are made input to protect UsbThumb add-on boards (for example AccGyroBoard).


Notice following line io_cfg.h

#define mInitAllLEDs()      LATC &= 0xF0; TRISC &= 0xF0;


It has been commented out to prevent these pins from entering OUTPUT state.