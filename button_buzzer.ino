const int buttonPin = 3; // Button connected to pin 2
const int buzzerPin = 8; // Buzzer connected to pin 9

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    tone(buzzerPin, 0); // Play a 1kHz tone
  } else {
    noTone(buzzerPin); // Stop the tone
  }
}
