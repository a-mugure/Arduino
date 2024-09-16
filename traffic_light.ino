
#define red 9;
#define green 2;
#define yellow 5;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, LOW); 
  digitalWrite(5, LOW); 
  delay(3000);


 digitalWrite(5, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(2, LOW); 
  delay(2500);

  digitalWrite(2, HIGH); 
   digitalWrite(5, LOW); 
  digitalWrite(9, LOW); 
  delay(3000);

  digitalWrite(5, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(2, LOW); 
  delay(2500);
}
