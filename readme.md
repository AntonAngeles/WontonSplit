# wontonsplit

*A short description of the keyboard/project*

* Keyboard Maintainer: [AntonAngeles](https://github.com/AntonAngeles)
* Hardware Supported: OXCB Helios
* Hardware Availability: https://ringerkeys.com/en-ca/products/0xcb-helios

Make example for this keyboard (after setting up your build environment):

    make wontonsplit:default

Flashing example for this keyboard:

   qmk flash -kb wontonsplit -km antonangeles -bl uf2-split-left
   qmk flash -kb wontonsplit -km antonangeles -bl uf2-split-right

## Bootloader

Enter the bootloader:

* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
