// Device.h

#ifndef _MOTOR_h
#define _MOTOR_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "Sensor.h"
#include <MotorShield.h>

class MotorClass : SensorClass
{
  protected:
    int pin;
  public:
    void init(int pin);
    void turnOn(int value);
    void turnOff();
    float getValue(String value);
    void setValue(int value);
};

extern MotorClass Motor;

#endif

