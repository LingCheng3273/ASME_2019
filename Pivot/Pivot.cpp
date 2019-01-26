#include "Pivot.h"

Pivot::Pivot():motor(!LINEAR, COUNTABLE, 0){
}

/* gets the current position of the arm */
float Pivot::getPos(){
  return motor.getPos();
}
  
/* gets the zero position */
float Pivot::getZeroPos(){
  return openPos;
}

/* sets openPos to the current position */
void Pivot::setZeroPos(){
  openPos = motor.getPos();
}
  
/*
  Move arm up at given speed
  @param speed between 0 and 100 inclusive
*/
void Pivot::turnUp(int speed, int time){
  motor.turn(speed, CW);
  delay(time);
  motor.stop();
  motor.updatePos();
}

/*
  Move arm down at given speed
  @param speed between 0 and 100 inclusive
*/
void Pivot::turnDown(int speed, int time){
  motor.turn(speed, CCW);
  delay(time);
  motor.stop();
  motor.updatePos();
}
  
/*
  Stop arm
*/
void Pivot::stop(){
  motor.stop();
}
