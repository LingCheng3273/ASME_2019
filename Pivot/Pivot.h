#ifndef Pivot_h
#define Pivot_h

#include "Motor.h"
#include "Variables.h"

class Pivot{
 public:
  Pivot();

  /* gets the current position of the arm */
  float getPivotPos();
  
  /* gets the zero position */
  float getPivotZeroPos();

    /* gets the current position of the arm */
  float getLinearPos();
  
  /* gets the zero position */
  float getLinearZeroPos();

  /* sets openPos to the current position */
  void setPivotZeroPos();

  /* sets openPos to the current position */
  void setLinearZeroPos();
  
  /*
    Move arm up at given speed
    @param speed between 0 and 100 inclusive
  */
  void turnUp(int speed, int time);

  /*
    Move arm down at given speed
    @param speed between 0 and 100 inclusive
  */
  void turnDown(int speed, int time);

  void moveUp(int speed, int time);

  void moveDown(int speed, int time);
  
  /*
    Stop arm
  */
  void stop();

 private:
  Motor pivot_motor1;
  Motor pivot_motor2;
  Motor linear_motor1;
  Motor linear_motor2;
  float pivotOpenPos;
  float linearOpenPos;
  
 private:
};
#endif
