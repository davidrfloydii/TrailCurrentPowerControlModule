#pragma once
#include <Arduino.h>
#include "globals.h"

namespace lightSequences
{
    void startInteriorSequnce01()
    {
        analogWrite(OUTPUT08_PIN, 0);
        analogWrite(OUTPUT07_PIN, 0);
        analogWrite(OUTPUT06_PIN, 0);
        analogWrite(OUTPUT05_PIN, 0);
        // Loop from 0 to 255 (increasing)
        for (int i = 0; i <= 255; i++)
        {
            analogWrite(OUTPUT08_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT07_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT06_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT05_PIN, i); // Set the PWM value to i
            delay(10);                    // Wait for 10 milliseconds before the next step
        }

        // Loop from 255 to 0 (decreasing)
        for (int i = 255; i >= 0; i--)
        {
            analogWrite(OUTPUT08_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT07_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT06_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT05_PIN, i); // Set the PWM value to i
            delay(10);                    // Wait for 10 milliseconds before the next step
        }

        for (int i = 0; i <= 30; i++)
        {
            analogWrite(OUTPUT05_PIN, 0);
            analogWrite(OUTPUT08_PIN, 255);
            analogWrite(OUTPUT07_PIN, 0);
            analogWrite(OUTPUT06_PIN, 0);
            delay(60);

            analogWrite(OUTPUT08_PIN, 0);
            analogWrite(OUTPUT07_PIN, 255);
            analogWrite(OUTPUT06_PIN, 0);
            analogWrite(OUTPUT05_PIN, 0);
            delay(60);

            analogWrite(OUTPUT08_PIN, 0);
            analogWrite(OUTPUT07_PIN, 0);
            analogWrite(OUTPUT06_PIN, 255);
            analogWrite(OUTPUT05_PIN, 0);
            delay(60);

            analogWrite(OUTPUT08_PIN, 0);
            analogWrite(OUTPUT07_PIN, 0);
            analogWrite(OUTPUT06_PIN, 0);
            analogWrite(OUTPUT05_PIN, 255);
            delay(60);

            analogWrite(OUTPUT08_PIN, 0);
            analogWrite(OUTPUT07_PIN, 0);
            analogWrite(OUTPUT06_PIN, 255);
            analogWrite(OUTPUT05_PIN, 0);
            delay(60);

            analogWrite(OUTPUT08_PIN, 0);
            analogWrite(OUTPUT07_PIN, 255);
            analogWrite(OUTPUT06_PIN, 0);
            analogWrite(OUTPUT05_PIN, 0);
            delay(60);

            analogWrite(OUTPUT08_PIN, 255);
            analogWrite(OUTPUT07_PIN, 0);
            analogWrite(OUTPUT06_PIN, 0);
            analogWrite(OUTPUT05_PIN, 0);
            delay(60);
        }
        analogWrite(OUTPUT08_PIN, 0);
        analogWrite(OUTPUT07_PIN, 0);
        analogWrite(OUTPUT06_PIN, 0);
        analogWrite(OUTPUT05_PIN, 0);
    }

    void startExteriorSequnce01()
    {
        analogWrite(OUTPUT04_PIN, 0);
        analogWrite(OUTPUT03_PIN, 0);
        // Loop from 0 to 255 (increasing)
        for (int i = 0; i <= 255; i++)
        {
            analogWrite(OUTPUT04_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT03_PIN, i); // Set the PWM value to i
            delay(10);                    // Wait for 10 milliseconds before the next step
        }

        // Loop from 255 to 0 (decreasing)
        for (int i = 255; i >= 0; i--)
        {
            analogWrite(OUTPUT04_PIN, i); // Set the PWM value to i
            analogWrite(OUTPUT03_PIN, i); // Set the PWM value to i
            delay(10);                    // Wait for 10 milliseconds before the next step
        }

        for (int i = 0; i <= 30; i++)
        {
            analogWrite(OUTPUT04_PIN, 0);
            analogWrite(OUTPUT03_PIN, 255);
            delay(250);

            analogWrite(OUTPUT04_PIN, 255);
            analogWrite(OUTPUT03_PIN, 0);
            delay(250);
        }
        analogWrite(OUTPUT04_PIN, 0);
        analogWrite(OUTPUT03_PIN, 0);
    }    
}