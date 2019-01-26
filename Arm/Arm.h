// ensures this file is only included once
#ifndef Arm_h
#define Arm_h

// includes variable constants
#include "Variables.h"
#include "Motor.h"

class Arm{
 public:
  /* constructor */
  Arm();

  /* gets the current position of the arm */
  float getPos();
  
  /* gets the zero position */
  float getZeroPos();

  /* sets openPos to the current position */
  void setZeroPos();
  
  /*
    Move arm right at given speed
    @param speed between 0 and 255 inclusive
  */
  void moveRight(int speed, int time);

  /*
    Move arm left at given speed
    @param speed between 0 and 255 inclusive
  */
  void moveLeft(int speed, int time);
  
  /*
    Stop arm
  */
  void stop();

 private:
  Motor motor;
  float openPos;
};
#endif
