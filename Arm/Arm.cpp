#include "Arm.h"
#include <assert.h>

/* Constructor creates the arm and set the pin values and side type
 @param: pinA, pinB, side type*/
Arm::Arm():motor(LINEAR, COUNTABLE, 0){
}


/* gets the current position of the arm */
float Arm::getPos(){
  return motor.getPos();
}

/* gets the zero position */
float Arm::getZeroPos(){
  return openPos;
}

/* sets the zero position to the current position*/
void Arm::setZeroPos(){
  openPos = motor.getPos();
}

/*
  Move given arm right at given speed
  @param speed between 0 and 100 inclusive
*/
void Arm::moveRight(int speed, int time) {
  motor.turn(speed, CW);
  delay(time);
  motor.stop();
  motor.updatePos();
}

/*
  Move given arm left at given speed
  @param speed between 0 and 100 inclusive
*/
void Arm::moveLeft(int speed, int time) {
  motor.turn(speed, CCW);
  delay(time);
  motor.stop();
  motor.updatePos();
}

/* Stop arm */
void Arm::stop() {
  motor.stop();
}
