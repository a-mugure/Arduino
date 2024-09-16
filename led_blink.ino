
#define blue 4;
#define button 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}
void loop(){
digitalWrite(9, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(75);                      // wait for a second
  digitalWrite(9, LOW);   // turn the LED off by making the voltage LOW
  delay(75);                      // wait for a second
}