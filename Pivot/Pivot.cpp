#include "Pivot.h"

Pivot::Pivot():
  pivot_motor1(!LINEAR, COUNTABLE, 0),
  pivot_motor2(!LINEAR, COUNTABLE, 0),
  linear_motor1(LINEAR, COUNTABLE, 0),
  linear_motor2(LINEAR, COUNTABLE, 0)
{
}

/* gets the current position of the arm */
float Pivot::getPivotPos(){
  return pivot_motor1.getPos();
}

/* gets the current position of the arm */
float Pivot::getLinearPos(){
  return linear_motor1.getPos();
}
  
/* gets the zero position */
float Pivot::getPivotZeroPos(){
  return pivotOpenPos;
}

/* gets the zero position */
float Pivot::getLinearZeroPos(){
  return linearOpenPos;
}

/* sets openPos to the current position */
void Pivot::setPivotZeroPos(){
  pivotOpenPos = pivot_motor1.getPos();
}

/* sets openPos to the current position */
void Pivot::setLinearZeroPos(){
  linearOpenPos = linear_motor1.getPos();
}
  
/*
  Move arm up at given speed
  @param speed between 0 and 100 inclusive
*/
void Pivot::turnUp(int speed, int time){
  pivot_motor1.turn(speed, CW);
  pivot_motor2.turn(speed, CCW);
  delay(time);
  pivot_motor1.stop();
  pivot_motor2.stop();
  pivot_motor1.updatePos();
  pivot_motor2.updatePos();
}

/*
  Move arm down at given speed
  @param speed between 0 and 100 inclusive
*/
void Pivot::turnDown(int speed, int time){
  pivot_motor1.turn(speed, CCW);
  pivot_motor2.turn(speed, CW);
  delay(time);
  pivot_motor1.stop();
  pivot_motor2.stop();
  pivot_motor1.updatePos();
  pivot_motor2.updatePos();
}

void Pivot::moveUp(int speed, int time){
  linear_motor1.turn(speed, CW);
  linear_motor2.turn(speed, CCW);
  delay(time);
  linear_motor1.stop();
  linear_motor2.stop();
  linear_motor1.updatePos();
  linear_motor2.updatePos();
}

void Pivot::moveDown(int speed, int time){
  linear_motor1.turn(speed, CCW);
  linear_motor2.turn(speed, CW);
  delay(time);
  linear_motor1.stop();
  linear_motor2.stop();
  linear_motor1.updatePos();
  linear_motor2.updatePos();
}
  
/*
  Stop arm
*/
void Pivot::stop(){
  pivot_motor1.stop();
  pivot_motor2.stop();
}
