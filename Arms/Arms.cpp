#include "Arms.h"

/* Arms is a wrapper for the Arm class to control the arms */


/* @param: pins for arm motors
   creates an instance of rightArm and leftArm using the pins*/
Arms::Arms(){
  rightArm = Arm();
  leftArm = Arm();
  pivot = Pivot();
}

/* returns whether rightArm is open */
boolean Arms::checkRightOpen(){
  return !digitalRead(RIGHT_LIMIT_SWITCH_PIN);
}

/* returns whether leftArm is open */
boolean Arms::checkLeftOpen(){
  return !digitalRead(LEFT_LIMIT_SWITCH_PIN);
}

/* returns whether  is open */
boolean Arms::checkArmsDown(){
  return !digitalRead(BOTTOM_LIMIT_SWITCH_PIN);
}

/* returns whether rightArm is closed */
boolean Arms::checkRightClose(){
  return !digitalRead(RIGHT_LIGHT_PIN);
}

/* returns whether leftArm is closed */
boolean Arms::checkLeftClose(){
  return !digitalRead(LEFT_LIGHT_PIN);
}

int Arms::rightOpenSpeed(){
  if(abs(rightArm.getZeroPos() - rightArm.getPos()) >= OPEN_THRESHOLD){
    return FAST_SPEED;
  }else{
    return SLOW_SPEED;
  }
}

int Arms::leftOpenSpeed(){
 if(abs(leftArm.getZeroPos() - leftArm.getPos()) >= OPEN_THRESHOLD){
    return FAST_SPEED;
  }else{
    return SLOW_SPEED;
  }
}

/*int Arms::openSpeed(){

  }*/


/* opens rightArm and leftArm until they're completely open */
void Arms::open(){
  int r_speed, l_speed;
  while(!checkRightOpen() || !checkLeftOpen()){
    if(!checkRightOpen()){
      rightArm.moveRight(rightOpenSpeed(), TIME);
    }
    if(!checkLeftOpen()){
      leftArm.moveLeft(leftOpenSpeed(), TIME);
    }
  }
}

/* closes rightArm and leftArm until they're completely closed */
void Arms::close(){
  while(!checkRightClose() || !checkLeftClose()){
    if(!checkRightClose()){
      rightArm.moveLeft(SLOW_SPEED, TIME);
    }
    if(!checkLeftClose()){
      leftArm.moveRight(SLOW_SPEED, TIME);
    }
  }
}

void Arms::turnUp(){
  pivot.turnUp(SLOW_SPEED, TIME);
}

void Arms::turnDown(){
  pivot.turnDown(SLOW_SPEED, TIME);
}

void Arms::setPivotZero(){
  pivot.setPivotZeroPos();
}

void Arms::setLinearZero(){
  pivot.setLinearZeroPos();
}

void Arms::pickUp(){
  close();
  //move up
  //pivot
  
}

/* opens the arms */
void Arms::setup(){
  // opens the arms
  while(!checkRightOpen() || !checkLeftOpen()){
    if(!checkRightOpen()){
      rightArm.moveRight(SLOW_SPEED, TIME);
    }
    if(!checkLeftOpen()){
      leftArm.moveLeft(SLOW_SPEED, TIME);
    }
  }
  rightArm.setZeroPos();
  leftArm.setZeroPos();
}

/* */
void Arms::reset(){
  int r_speed, l_speed, r_time, l_time;
  while(!checkRightOpen() || !checkLeftOpen()){
    if(abs(rightArm.getZeroPos() - rightArm.getPos()) >= OPEN_THRESHOLD){
      r_speed = FAST_SPEED;
      r_time = 1000;
    }else{
      r_speed = SLOW_SPEED;
      r_time = 500;
    }
    if(abs(leftArm.getZeroPos() - leftArm.getPos()) >= OPEN_THRESHOLD){
      r_speed = FAST_SPEED;
      r_time = 1000;
    }else{
      r_speed = SLOW_SPEED;
      r_time = 500;
    }
    if(!checkRightOpen()){
      rightArm.moveRight(r_speed, r_time);
    }
    if(!checkLeftOpen()){
      leftArm.moveLeft(l_speed, l_time);
    }
  }
}
