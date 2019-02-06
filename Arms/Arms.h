#ifndef Arms_h
#define Arms_h

#include <stdlib.h>
#include "Arm.h"
#include "Pivot.h"
#include "Motor.h"

/* Arms is a wrapper for the Arm class to open and close the arm */
class Arms{
 public:
  /* constructor needs 2 pins for each arm */
  Arms();

  /* set everything to initial position */
  void setup();
  
  /* opens both arms */
  void open();
  
  /* closes both arms */
  void close();

  void turnUp();

  void turnDown();

  void setPivotZero();

  void setLinearZero();

  void pickUp();



  /* reset all parts to starting position */
  void reset();
  
 private:
  /* uses the arm class */
  Arm rightArm;
  Arm leftArm;
  Pivot pivot;

  /* returns whether the right/left arm is open/closed */
  boolean checkRightOpen();
  boolean checkLeftOpen();
  boolean checkArmsDown();
  boolean checkRightClose();
  boolean checkLeftClose();

  int rightOpenSpeed();
  int leftOpenSpeed();
  //  int openSpeed();

};
#endif
