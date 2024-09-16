       #define trigPin 9  // Pin connected to ultrasonic sensor trigger
#define echoPin 10 // Pin connected to ultrasonic sensor echo
#define ledGreen 8  // Pin connected to green LED
#define ledYellow 7 // Pin connected to yellow LED
#define ledRed 6   // Pin connected to red LED
#define buzzerPin 5 // Pin connected to buzzer

long duration; // Variable to store pulse duration
int distance;   // Variable to store calculated distance

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(trigPin, OUTPUT);  // Set trigger pin as output
  pinMode(echoPin, INPUT);   // Set echo pin as input
  pinMode(ledGreen, OUTPUT); // Set LED pins as output
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
}

void loop() {
  // Trigger ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure pulse duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  // Print distance on serial monitor
  Serial.print("Distance (cm): ");
  Serial.println(distance);

  // Control LEDs and buzzer based on distance
  if (distance > 50) {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledRed, LOW);
    //tone(buzzerPin, 2000, 10); // Low frequency sound (replace 1000 with lower value for even lower)
  } else if (distance > 30) {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, LOW);
    tone(buzzerPin, 2000, 50); // Medium frequency sound (adjust frequency and duration for desired intensity)
  } else if (distance < 10) {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledRed, HIGH);
    tone(buzzerPin, 2000, 100); // High frequency sound (adjust frequency and duration for desired intensity)
  } else {
    // Handle potential sensor errors (optional)
  }

  delay(100); // Adjust delay based on desired update rate
}
