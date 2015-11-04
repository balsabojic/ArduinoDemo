//
//
//

#include "Motor.h"

void MotorClass::init(int pin)
{
  this->pin = pin;
  //the code to setup channel A
  pinMode (A1, OUTPUT); // sets the digital motor pin 5
  pinMode (A5, OUTPUT); // sets the digital break pin 6
}

void MotorClass::turnOn(int value)
{
  if (value >= 1 && value < 5) {
    analogWrite(3, 100);
    Serial.println("MOTOR IS SLOWED");
  }
  else if (value >=5 && value <= 10) {
    analogWrite(3, 179); //channel A motor at maximum speed
    Serial.println("MOTOR IS ON");
  }
}

void MotorClass::turnOff()
{
  analogWrite(3, 0); //channel A motor at 0 speed
  Serial.println("MOTOR IS OFF");
}

float MotorClass::getValue(String value) {
  return 0;
}

void MotorClass::setValue(int value) {
  if (value == 0) {
    turnOff();
  }
  else {
    turnOn(value);
  }
}

MotorClass Motor;

