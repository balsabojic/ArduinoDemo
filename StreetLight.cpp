//
//
//

#include "StreetLight.h"

void StreetLightClass::init(int pin)
{
  this->pin = pin;
  //the code to setup channel B
  pinMode (A4, OUTPUT); // sets the digital motor pin 9
  pinMode (A3, OUTPUT); // sets the digital break pin 0
  analogWrite(5, 0);
}

void StreetLightClass::turnOn(int value)
{
  analogWrite(5, 255); //channel B motor at maximum light
  Serial.println("STREET LIGHT IS ON");
}

void StreetLightClass::turnOff()
{
  analogWrite(5, 0); //channel B motor at 0
  Serial.println("STREET LIGHT IS OFF");
}

float StreetLightClass::getValue(String value) {
  return 0;
}

void StreetLightClass::setValue(int value) {
  if (value == 0) {
    turnOff();
  }
  else {
    turnOn(value);
  }
}

StreetLightClass StreetLight;

