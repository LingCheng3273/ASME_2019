#include "Motor.h"

Motor::Motor(boolean function_, boolean countable_, float rotationFactor_){
  function = function_;
  countable = countable_;
  rotationFactor = rotationFactor_;
}
  
//turn the motor at the given speed in the given direction.
//distance: 0 for clockwise, 1 for counterclockwise
void Motor::turn(int throttle, boolean direction){
  
}
  
//update the position of the motor
void Motor::updatePos(){
  
}
  
//returns the position of the motor
float Motor::getPos(){
  return 0;
}
  
//stops the motor
void Motor::stop(){
}
  
