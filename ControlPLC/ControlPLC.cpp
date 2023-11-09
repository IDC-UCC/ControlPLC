#include "ControlPLC.h"

OutputRelay::OutputRelay(int pinWrite) {
  _pinWrite = pinWrite;
  pinMode(pinWrite, OUTPUT);
}
void OutputRelay::Active () {
#define Activo LOW
  digitalWrite(_pinWrite, Activo);
  Serial.println("RElAY Activo.");
}
void OutputRelay::NotActive() {
#define NoActivo HIGH
  digitalWrite(_pinWrite, NoActivo);
  Serial.println("RElAY No activo.");
}


