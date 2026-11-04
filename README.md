# BootLoopApp 
## Features
This application is not a DXE driver for SPI Flash, but rather a UEFI application that runs during the BDS phase. It is completely safe to use if you have physical access to the device.                                                                                                                                                                            In version 1.0.0, it has one function: to put the computer into a cold reboot and trigger a reboot cycle when set as the first item in the boot order. 
## Compilation
To compile this application, you'll need:
1. EDK 2 Installed
2. Your own custom Pkg or the ability to transfer files to MdeModulePkg (I'm considering the case of MdeModule; the process is similar for a custom Pkg)
3. A little patience and a GNU/Linux system
First, you need to create a folder named “BootLoopApp” inside the edk2/MdeModulePkg/Application directory and place the .c and .inf files from this repository there.
Next:`. edksetup.sh` `build -p MdeModulePkg/MdeModulePkg.dsc -m MdeModulePkg/Application/BootLoopApp/BootLoopApp.inf -a X64 -b RELEASE -t GCC`
