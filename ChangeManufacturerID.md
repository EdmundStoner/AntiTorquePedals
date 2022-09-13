# Change the name of a Joystick Manufacturer

##### The information in this document is in reference to define a joystick controller on the Pro Micro board with the ATMEGA32U4 processor using the Arduino IDE(IDE). 
The ATMEGA32U4 processors can used to create a 'Dual Boot' Arduino. The board will be both a joystick controller and an Arduino device on the same USB.

## Finding the Default boards.txt
The files that are used by the Arduino for the hardware definitions for the many different Arduino boards are usually stored in a file named boards.txt. 

To find the location of the default boards.txt:
- Open your **Arduino IDE**
- Open the **Preferences** dialog. (File/Preferences)
- There is a link to a file location that is under the **More prefences can be edited directly in the file"*
- Click on this link that is under that title and a filemanager should open to that location
- Guide the file manager to the **packages/arduino/hardware/avr** location
- This location will have folders/directories that are titled for each of the IDE versions that you have installed, Mine is **1.8.5**. 
- Open the location of your *IDE Version* and you will find the default boards.txt
- This location will be known as your **default hardware location**

This boards.txt defines all of the menu items that in your Arduino IDE mune items under **Tools/Board:/Arduino AVR Boards**

## Create a new boards.txt 
- Create a **hardware** folder in your default Sketchbook location, which is defined in the **Arduino IDE Preference** dialog
- Create a **myboards** folder in the new **hardware** folder. *this folder can be named whatever you would like*
- Create an **avr** folder in the new **myboards** folder
- This location is your **New hardware location**
- Create a **bootloaders** folder in the new **myboards** folder
- copy the **caterina** folder from the **bootloaders** folder that is in your **default hardware location** to the **bootloaders** folder in your **New hardware location**
- 


When you define a new boards.txt file, that is in your system, a new menu is used by the IDE.


Find the folder/Directory that the boards.txt.
