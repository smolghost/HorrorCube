/*
 * Magic and Technology
 * Elliot Grover
 * DIGF-1006FA Physical Computing
 * OCAD University
 * Created on: April 5th 2017
*/

#include <Servo.h>

#define SERVO1_PWM 10
#define SERVO2_PWM 9

Servo servo_1;
Servo servo_2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_1.attach(SERVO1_PWM);
  servo_2.attach(SERVO2_PWM);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo_1.write(0);  
  delay(1000);
  servo_1.write(180);
  delay(500);

  servo_2.write(0);
  delay(750);
  servo_2.write(180);
  delay(1000);
}
