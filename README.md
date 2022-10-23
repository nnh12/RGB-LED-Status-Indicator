# LED Microcontroller Indicator Module
This is the schematic/ PCB Layout design for RGB LED Status Indicator Module for the NASA Robot Mining Competition team. It is powered from a 24V system and uses a CAN transciever to listen for commands from a STM32 microcontroller. A buck converter then steps down the 24V to 12 V, which then gets fed to output a 3.3V supply via a linear regulator to the STM32 microcontroller (needs a smaller voltage supply). The STM32 microcontroller then controls the LED driver which will then indicate the desired color. 

Worked with hardware team lead to design this project.

LED Node
---
This is the ROS (Robot Operating System) LED node that will listen to a ROS service and relay the signal in a CAN Frame message to the Hardware Controller (HWCTRL) node. The HWCTRL will then signal to the STM32Microcontroller which will recieve that information to know which LED to turn on. This is written in C++.
