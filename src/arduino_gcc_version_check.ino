// Made to run in an Arduino environment
// Tested with Arduino 1.8.13 which uses GCC version 4.8.2
// Tested with Arduino Pro IDE 0.1.2 which uses GCC version 7.3.0
#include <Arduino.h>
#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Serial.print("GCC Version ");
  Serial.println(__VERSION__);
  delay(5000);
}
