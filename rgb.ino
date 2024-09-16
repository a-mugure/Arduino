/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-rgb-led
 */

#define PIN_RED 5
#define PIN_GREEN 6 
#define  PIN_BLUE 9

void setup() {
  pinMode(PIN_RED,OUTPUT);
  pinMode(PIN_GREEN,OUTPUT);
  pinMode(PIN_BLUE,OUTPUT);
}

void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  analogWrite(PIN_RED,153);
  analogWrite(PIN_GREEN,153);
  analogWrite(PIN_BLUE,102);
}
  