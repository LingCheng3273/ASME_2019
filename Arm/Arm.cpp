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
  @param speed between 0 and 255 inclusive
*/
void Arm::moveRight(int speed, int time) {
  motor.turn(speed, 0);
  delay(time);
  motor.stop();
  motor.updatePos();
  /*  
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      analogWrite(SPEED_PIN, duty);
  */
}

/*
  Move given arm left at given speed
  @param speed between 0 and 255 inclusive
*/
void Arm::moveLeft(int speed, int time) {
  motor.turn(speed, 1);
  delay(time);
  motor.stop();
  motor.updatePos();
  /*  digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      analogWrite(SPEED_PIN, duty);
  */
}

/* Stop arm */
void Arm::stop() {
  motor.stop();
}
