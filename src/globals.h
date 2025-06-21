#pragma once
#include <Arduino.h>
#define DEBUG 1 // This sets whether or not the Serial.println and Serial.print will even be compiled
#define OUTPUT01_PIN 32
#define OUTPUT02_PIN 33
#define OUTPUT03_PIN 26
#define OUTPUT04_PIN 14
#define OUTPUT05_PIN 4
#define OUTPUT06_PIN 17
#define OUTPUT07_PIN 19
#define OUTPUT08_PIN 23
// Conditional definition for debugging if DEBUG is 1 then it will print to serial port.
// If DEBUG = 0 then the lines will be removed by the compiler.
#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugf(x,y) Serial.printf(x,y)
#define debugg(x,y,z) Serial.printf(x, y, z);
#else
#define debug(x)
#define debugln(x)
#define debugf(x,y)
#define debugg(x,y,z)
#endif

namespace globals {

}
