const int touchPin = A0;  // Analog pin connected to the touch sensor
const int buzzerPin = 8;  // Digital pin connected to the buzzer
const int ledPin = 13;    // Digital pin connected to the LED

int threshold = 2000;     // Threshold value for touch detection (adjust as needed)

void setup() {
  pinMode(touchPin, INPUT);  // Set touch sensor pin as input
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
}

void loop() {
  int sensorValue = analogRead(touchPin);  // Read sensor value

  // Check if sensor value is above threshold, indicating touch
  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
    digitalWrite(ledPin, HIGH);    // Turn on LED
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
    digitalWrite(ledPin, LOW);    // Turn off LED
  }
}
