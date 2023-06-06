#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Define the potentiometer pins
const int potPin1 = A0;
const int potPin2 = A1;
const int potPin3 = A2;
const int potPin4 = A3;

// Variables to store potentiometer values
int potValue1;
int potValue2;
int potValue3;
int potValue4;

// Servo angles
int servoAngle1;
int servoAngle2;
int servoAngle3;
int servoAngle4;

void setup() {
  // Attach servo objects to the corresponding pins
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
}

void loop() {
  // Read potentiometer values
  potValue1 = analogRead(potPin1);
  potValue2 = analogRead(potPin2);
  potValue3 = analogRead(potPin3);
  potValue4 = analogRead(potPin4);

  // Map potentiometer values to servo angles
  servoAngle1 = map(potValue1, 0, 1023, 0, 180);
  servoAngle2 = map(potValue2, 0, 1023, 0, 180);
  servoAngle3 = map(potValue3, 0, 1023, 0, 180);
  servoAngle4 = map(potValue4, 0, 1023, 0, 30);

  // Set servo positions
  servo1.write(servoAngle1);
  servo2.write(servoAngle2);
  servo3.write(servoAngle3);
  servo4.write(servoAngle4);

  delay(15);
}
