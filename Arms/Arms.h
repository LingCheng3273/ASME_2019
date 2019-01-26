#ifndef Arms_h
#define Arms_h

#include <stdlib.h>
#include "Arm.h"

/* Arms is a wrapper for the Arm class to open and close the arm */
class Arms{
 public:
  /* constructor needs 2 pins for each arm */
  Arms();

  /* opens both arms */
  void open();
 
  /* closes both arms */
  void close();

  /* set everything to initial position */
  void setup();

  /* reset all parts to starting position */
  void reset();
  
 private:
  /* uses the arm class */
  Arm rightArm;
  Arm leftArm;

  /* returns whether the right/left arm is open/closed */
  boolean checkRightOpen();
  boolean checkLeftOpen();
  boolean checkRightClose();
  boolean checkLeftClose();
};
#endif
