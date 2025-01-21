/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <stdio.h>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main()
{
    // Initialise the digital pin LED1 as an output
#ifdef LED1
    DigitalOut led(LED1);
#else
    bool led;
#endif

#ifdef BUTTON1
    DigitalIn button(BUTTON1); // Bouton connecté à BUTTON1
#else
    bool button;
#endif
    
    printf("Hello world\n");
    while (true) {
        if (button) {
            printf("Button pressed\n");
            led = true;
        } else {
            led = false;
        }
       //led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
