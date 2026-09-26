#include "api/ArduinoAPI.h"
#include <Arduino.h>

#define EYE_L PIN_PA4
#define EYE_R PIN_PA5
#define MODE_SW PIN_PA3

void setup() {
  pinMode(EYE_L, OUTPUT);
  pinMode(EYE_R, OUTPUT);
  pinMode(MODE_SW, INPUT_PULLUP);
}

void loop() {
  digitalWrite(EYE_L, digitalRead(MODE_SW) == LOW);
  digitalWrite(EYE_R, digitalRead(MODE_SW) == LOW);
}
