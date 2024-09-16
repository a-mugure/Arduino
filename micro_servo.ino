#include <Servo.h>
Servo myServo;
unsigned long MOVING_TIME = 500; // moving time is 3 seconds
unsigned long moveStartTime;
int startAngle = 0; // 30°
int stopAngle  = 180; // 90°

void setup() {
  myServo.attach(9);
  moveStartTime = millis(); // start moving

  // TODO: other code
}

void loop() {
  unsigned long progress = millis() - moveStartTime;

  if (progress <= MOVING_TIME) {
    long angle = map(progress, 0, MOVING_TIME, startAngle, stopAngle);
    myServo.write(angle); 
  }

  // TODO: other code
}
