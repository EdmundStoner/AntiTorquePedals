# AntiTorquePedals
This is the code needed for creating a very simple Anti Torque / Rudder pedals

## Description
The pedals code will determine an input to Analog 0 and will sent the computer a number from -256 to +256
 
Any voltage, that is between from 0 to 5 volts will work, 
* when 0 volts is applied a -256 is sent
* when 2.5 volts is applied a 0 is sent
* when 5 volts is applied a 256 is sent
 
This [picture](https://raw.githubusercontent.com/EdmundStoner/AntiTorquePedals/main/antitorquepedal.jpg) shows the Hall effect sensor that is facing a Diametric ring magnet mounted on a 1/4" bolt that is attached to the swingarm of the pedals

The closer that the sensor is to the magnet, the less amount of degrees of movement is needed until the sensor is saturated (max/min voltage)

## Installing
I loaded a [Library for joystick](https://github.com/MHeironimus/ArduinoJoystickLibrary) into the Arduino IDE

I loaded this code into an arduino pro micro

I wired the output of a UHS 3150U hall effect transistor into Analog input 0
