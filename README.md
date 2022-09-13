# AntiTorquePedals
This is the code needed for creating a very simple Anti Torque / Rudder pedals

## Description
The pedals code will determine an input to Analog 0 and will sent the computer a number from -256 to +256
 
Any voltage, that is between from 0 to 5 volts will work, 
* when 0 volts is applied a -256 is sent
* when 2.5 volts is applied a 0 is sent
* when 5 volts is applied a 256 is sent
 
This [picture](https://raw.githubusercontent.com/EdmundStoner/AntiTorquePedals/main/antitorquepedal.jpg) shows the Hall effect sensor that is facing a Diametric ring magnet mounted on a 1/4" bolt that is attached to the swingarm of the pedals

The closer that the sensor is to the magnet, the less degrees of movement will be needed until the sensor is saturated (max/min voltage)
#### For example:
* if the sensor is 1/4" away from the sensor, the defection from min to max could be 60 degrees
* if the sensor is 1/2" away from the sensor, the defection from min to max could be 120 degrees
* if the sensor is 1/8" away from the sensor, the defection from min to max could be 20 degrees

The higher the strength rating for a magnet will also decrease degrees of the movement


## Installing
I loaded a [Library for joystick](https://github.com/MHeironimus/ArduinoJoystickLibrary) into the Arduino IDE

I loaded this code into an arduino pro micro. If multiple joysticks are to be used on the same computer each [joystick should be redefined](https://github.com/EdmundStoner/AntiTorquePedals/blob/main/ChangeManufacturerID.md).

I wired the output of a UHS 3150U hall effect transistor into Analog input 0
