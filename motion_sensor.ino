const int pirPin = 2; // Replace with your PIR sensor pin

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
}

void loop() {
  int sensorVal = digitalRead(pirPin);

  if (sensorVal == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected");
  }

  delay(100); // Adjust delay as needed
}
