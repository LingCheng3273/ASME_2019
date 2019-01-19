#include "Arm.h"
#include <assert.h>

/* Constructor creates the arm and set the pin values and side type
 @param: pinA, pinB, side type*/
Arm::Arm(int pinA_, int pinB_, char side_){
  assert(side_ == 'r' || side == 'l');
  pinA = pinA_;
  pinB = pinB_;
  side = side_;
}


Boolean Arm::checkOpen(){
  if(side == 'r'){
    return digitalRead(RIGHT_LIMIT_SWITCH_PIN) == 0;
  }else{
    return digitalRead(LEFT_LIMIT_SWITCH_PIN) == 0;
  }
}

Boolean Arm::checkClose(){
  if(side == 'r'){
    return digitalRead(RIGHT_LIGHT_PIN) == 0;
  }else{
    return digitalRead(LEFT_LIGHT_PIN) == 0;
  }
}

/*
  Move given arm right at given speed
  @param speed between 0 and 255 inclusive
*/
void Arm::moveRight(int duty) {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  analogWrite(SPEED_PIN, duty);
}

/*
  Move given arm left at given speed
  @param speed between 0 and 255 inclusive
*/
void Arm::moveLeft(int duty) {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  analogWrite(SPEED_PIN, duty);
}

/* Stop arm */
void Arm::stop() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
}

void Arm::startPosition() {
  openArm();
}

/* Open right arm all the way */
void Arm::openArm() {
  while (!checkOpen()) { //while right limit switch not hit, move right arm right
    if(side == "r"){
      moveRight(SPEED);
    }else{
      moveLeft(SPEED);
    }
  }
  stop();
}

/* Open right arm all the way */
void Arm::closeArm() {
  while (!checkClose()) { //while right limit switch not hit, move right arm right
    if(side == "r"){
      moveLeft(SPEED);
    }else{
      moveRight(SPEED);
    }
  }
  stop();
}

