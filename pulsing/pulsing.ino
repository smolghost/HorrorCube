/*
 * Magic and Technology
 * Elliot Grover
 * DIGF-1006FA Physical Computing
 * OCAD University
 * Created on: April 5th 2017
*/

#include <Servo.h> //include servo library

#define SERVO1_PWM 10 //define first servo to coordinating pin 10 on board
#define SERVO2_PWM 9 //define second servo to coordinating pin 9 on board

Servo servo_1; //establish the var servo_1 as a servo
Servo servo_2; //establish the var servo_2 as a servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_1.attach(SERVO1_PWM); //assign as output
  servo_2.attach(SERVO2_PWM); //assign as output
}

void loop() {
  // put your main code here, to run repeatedly:
  servo_1.write(0);  //start servo 1 at 0 degrees
  delay(1000); 
  servo_1.write(180); //move servo 1 to 180 degrees
  delay(500);

  servo_2.write(0); //start servo 2 at 0 degrees
  delay(750);
  servo_2.write(180); //move servo 2 to 180 degrees
  delay(1000);
}
