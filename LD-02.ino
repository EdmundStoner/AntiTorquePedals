// Requires Arduino Joystick Library https://github.com/MHeironimus/ArduinoJoystickLibrary
//
#define AXIS_RES 256
#define A_RUDDER A0

#include <Joystick.h>

Joystick_ Joystick(0x23,        // DEVICE ID
  JOYSTICK_TYPE_JOYSTICK,0,0,   // TYPE,  # BUTTONS, # HAT SWITCHES
  false,false,false,            // XAXIS,YAXIS,ZAXIS
  false,false,false,            // XROTATION,YROTATION,ZROTATION
  true,false,false,             // RUDDER, THROTTLE, ACCELERATOR
  false,false);                 // DEVICE ID// TYPE,  # BUTTONS, # HAT SWITCHES// XAXIS,YAXIS,ZAXIS XROTATION,YROTATION,ZROTATION// BRAKE, STEERING
 
int RUDDERX;
//////////////////////////////////////////
void setup() {
   Joystick.begin();                                        // Initialize Joystick Library
   Joystick.setRudderRange(-1 * AXIS_RES,AXIS_RES); 
}

void loop() {
   RUDDERX = analogRead(A_RUDDER);                          // Read Joystick
   Joystick.setRudder(map(RUDDERX, 340, 710, -1 * AXIS_RES, AXIS_RES)* -1);
   Joystick.sendState();
} 
