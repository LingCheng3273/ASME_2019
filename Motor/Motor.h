#ifndef Motor_h
#define Motor_h

#include <Arduino.h>

class Motor{
 public:
  Motor(boolean function, boolean countable, float rotationFactor);
  
  //turn the motor at the given speed in the given direction.
  //distance: 0 for clockwise, 1 for counterclockwise
  void turn(int throttle, boolean direction);
  
  //update the position of the motor
  void updatePos();
  
  //returns the position of the motor
  float getPos();
  
  //stops the motor
  void stop();
  
 private:
  boolean function; // 0 for linear motion, 1 for rotational motion
  boolean countable; // 0 if position matters, 1 if position doesn't matter
  float position; // current position of the bot. Either in distance or degrees
  float rotationFactor; // ratio between degrees and distance
};
#endif
