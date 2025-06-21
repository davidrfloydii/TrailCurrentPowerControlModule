#include "globals.h"
#include "canHelper.h"

void setup()
{
  Serial.begin(115200);
  pinMode(OUTPUT01_PIN, OUTPUT);
  pinMode(OUTPUT02_PIN, OUTPUT);
  pinMode(OUTPUT03_PIN, OUTPUT);
  pinMode(OUTPUT04_PIN, OUTPUT);
  pinMode(OUTPUT05_PIN, OUTPUT);
  pinMode(OUTPUT06_PIN, OUTPUT);
  pinMode(OUTPUT07_PIN, OUTPUT);
  pinMode(OUTPUT08_PIN, OUTPUT);
  canHelper::setupCan();
}

void loop()
{
  canHelper::canLoop();
  canHelper::send_status_message();
}
