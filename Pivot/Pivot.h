#ifndef Pivot_h
#define Pivot_h

#include "Motor.h"
#include "Variables.h"

class Pivot{
 public:
  Pivot();

  /* gets the current position of the arm */
  float getPos();
  
  /* gets the zero position */
  float getZeroPos();

  /* sets openPos to the current position */
  void setZeroPos();
  
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
  
  /*
    Stop arm
  */
  void stop();

 private:
  Motor motor;
  float openPos;
  
 private:
};
#endif
