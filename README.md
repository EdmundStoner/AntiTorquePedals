# AntiTorquePedals
This is the code needed for creating a very simple Anti Torque / Rudder pedals

## Description
The pedals code will determine aa analog input to Analog 0 and will sent the computer a number from -256 to +256
  
The [picture](https://raw.githubusercontent.com/EdmundStoner/AntiTorquePedals/main/antitorquepedal.jpg) shows the Hall effect sensor that is facing a Diametric ring magnet mounted on a 1/4" bolt that is attached to the swingarm of the pedals

The closer the sensor is to the magnet, the less amount of degrees of movement is needed

## Installing
I loaded a [Library for joystick](https://github.com/MHeironimus/ArduinoJoystickLibrary) into the Arduino IDE
I loaded this code into an arduino pro micro

I wired the output of a UHS 3150U hall effect transistor into Analog input 0
Any analog voltage reading from 1 to 5 volts will work
