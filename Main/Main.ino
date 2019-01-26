#include <Arms.h>


void setup() {
  pinMode(RIGHT_ARM_A, OUTPUT);
  pinMode(RIGHT_ARM_B, OUTPUT);
  pinMode(LEFT_ARM_A, OUTPUT);
  pinMode(LEFT_ARM_B, OUTPUT);
  pinMode(RIGHT_LIMIT_SWITCH_PIN, INPUT);
  pinMode(LEFT_LIMIT_SWITCH_PIN, INPUT);
  Serial.begin(9600);
  Arms arms = Arms();
}


void loop() {

}
