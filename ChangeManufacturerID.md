# Change the name of a Joystick Manufacturer

#### The information in this document is in reference to defining a joystick controller on a Pro Micro board that uses a ATMEGA32U4 processor, using the Arduino IDE. 

The ATMEGA32U4 processors can be used to create a 'Dual Boot' Arduino board. The board will be both a joystick controller and an Arduino device on the same USB.

I created multiple joysticks and then plugged them all into my computer, but, since they were all using the same default defininitions, with the same name, manufacturer and id number, they did not operate properly together. So, this led me to define the menu items on the **Arduino IDE Tools/Boards** for each board that I created.

Adding new boards to the **Arduino IDE** is acheived by creating a boards.txt file in the proper location with the proper folder tree structure. This file defines the procedures, variables, processors, layouts for memory and speed of the components that are used in all of the boards that the **Arduino IDE** can create and upload files to and is used for the menu items that are in your **Arduino IDE** menu under **Tools/Boards:**. I have created an  [example boards.txt](https://github.com/EdmundStoner/AntiTorquePedals/blob/main/boards.txt) in this repository

==The Manufactures name and ID's and product names and ID's have been licensed to each manufactureer by USB.org. A list can be found @ http://www.linux-usb.org/usb.ids==

*The definitions and descriptions to the variables that are used in the boards.txt files are beyond the scope of this document.*

## Finding the Default boards.txt
The files that are used by the Arduino for the hardware definitions for the many different Arduino boards are stored in a file named boards.txt. 

To find the location of the default boards.txt:
- Open your **Arduino IDE**
- Open the **Preferences** dialog. (File/Preferences)
- There is a link to a file location that is under the **More prefences can be edited directly in the file"*
- Click on this link that is under that title and a filemanager should open to that location
- Guide the file manager to the **packages/arduino/hardware/avr** location
- This location will have folders/directories that are titled for each of the IDE versions that you have installed, Mine was **1.8.5**. 
- Open the location of your *IDE Version (**1.8.5**)* and you will find the default boards.txt
- This location will be known as your **default hardware location**

## Create a new boards.txt 
- Create a **hardware** folder in your default Sketchbook location, which is defined in the **Arduino IDE Preference** dialog
- Create a **myboards** folder in the new **hardware** folder. *this folder can be named whatever you would like*
- Create an **avr** folder in the new **myboards** folder
- This location is your **New hardware location** *(mine was '/home/edmund/Arduino/hardware/joystickcontroller/avr/')*
- Create a **bootloaders** folder in the new **myboards** folder
- copy the **caterina** folder from the **bootloaders** folder that is in your **default hardware location** to the **bootloaders** folder in your **New hardware location**
- I created a file named boards.txt in the **New hardware location** that defines the board that I am creating
  - Copy the section from the **default hardware location**/boards.txt that defines the board that you will be using *(mine was the 'Arduino Micro' section)*
  - Paste the copy of the default section of definitions into the **New hardware location**/boards.txt file
  - Every variable defined in this section starts with a 'class' name that can be related to each board *(mine was 'micro.')*
  - replace all of these class names with a name that will define your particular board, such as joysticka. or joy2.. **NO SPACES**
  - change the following variables
    - joysticka.name will define the unquoted name that is used in the menu
    - joysticka.build.vid will define the 16 bit Manufacturers ID number that was created for that manufacturer (Arduino is 0x2341)
    - joysticka.build.usb_manufacturer is the quoted text name of the manufacturer
    - joysticka.build.pid is the 16 bit id of the board that you are creating
    - joysticka.build.usb_product is the quoted text name of your board that will be shown on the computer that it is plugged into
   
Restart the **Arduino IDE** to see the new menu items 
Choose the board that you want your joystick to be developed as
Upload the program to your board
