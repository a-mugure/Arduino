const int sensorPin = A0; // Replace with the analog pin connected to your sensor
const int redLED = 11;
const int greenLED = 12;

int sensorValue = 0; // Variable to store the sensor reading
int baseline = 0;    // Variable to store the baseline sensor reading

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  // Get baseline reading for 5 seconds
  Serial.println("Calibrating...");
  for (int i = 0; i < 100; i++) {
    sensorValue = analogRead(sensorPin);
    baseline = (baseline + sensorValue) / 2;
    delay(50);
  }
  Serial.println("Calibration complete.");
}

void loop() {
  sensorValue = analogRead(sensorPin);
  int difference = abs(sensorValue - baseline); // Calculate absolute difference from baseline

  // Update LEDs based on difference from baseline (adjust threshold as needed)
  if (difference > 100) { // Adjust threshold for your sensor's sensitivity
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    Serial.println("Possible Deception Detected!");
  } else {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    Serial.println("Truthful (likely)");
  }

  delay(250); // Adjust delay between readings
}
