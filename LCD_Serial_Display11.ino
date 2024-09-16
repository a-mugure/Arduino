
#include <LiquidCrystal.h>
const int VCC = 5;
const int GND = GND; // Assuming GND is defined somewhere
const int SDA = A4;
const int SCL = A5;
LiquidCrystal lcd(VCC, GND, SDA, SCL);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello world!");
}

void loop() {
  lcd.setCursor(0, 1);  // Set cursor to beginning of second line
  lcd.print(millis() / 1000);  // Display current time in seconds
}