// ensures this file is only included once
#ifndef Arm_h
#define Arm_h

// includes variable constants
#include <Arduino.h>
#include "Variables.h"

class Arm{
 public:
  /* constructor needs the pins for the motor and which arm */
  Arm(int pinA_, int pinB_, char side_);

  /* return whether the arm is completely open*/
  Boolean checkOpen();

  /* return whether the arm is completely closed*/
  Boolean checkClose();
  
  /*
    Move arm right at given speed
    @param speed between 0 and 255 inclusive
  */
  void moveRight(int duty);

  /*
    Move arm left at given speed
    @param speed between 0 and 255 inclusive
  */
  void moveLeft(int duty);
  
  /*
    Stop arm
  */
  void stop();
  
  /* Set arm to starting position */
  void startPosition();

  /* Open arm all the way */
  void openArm();
  
  /* Close arm all the way */
  void closeArm();

 private:
  char side; //'l' for left, 'r' for right
  int pinA;
  int pinB;
};
#endif
