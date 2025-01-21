/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
//#include <stdio.h>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms



InterruptIn button(BUTTON1);
DigitalOut led(LED1);

void handler_rise() {
    led = true;
}
void handler_fall() {
    led = false;
}

int main()
{
    button.enable_irq();
    button.rise(&handler_rise); 
    button.fall(&handler_fall); 
    printf("Hello world\n");

    while (true) {
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
