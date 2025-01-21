/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
using namespace std::chrono;

// Blinking rate in milliseconds


#define TIMESTAMP1 200ms
#define TIMESTAMP2 50ms


InterruptIn button(BUTTON1);
DigitalOut led(LED1);
Ticker flipper;

bool flag_change_t;
bool switch_flag;




void handler_rise() { 
    flag_change_t = true;
}

void flip() {
    led = !led;
}


int main()
{
    printf("Hello prg\n");
    flag_change_t = false;

    button.rise(&handler_rise); 

    flipper.attach(&flip, TIMESTAMP1);
    switch_flag = false;   

    while (true) {
        if (flag_change_t) {
            printf("Changement de fréqence\n");
            flag_change_t = false;
            flipper.detach();
            if (switch_flag) {
                printf("F1\n");
                flipper.attach(flip, TIMESTAMP1);
                switch_flag = false;
            } else {
                printf("F2\n");
                switch_flag = true;
                flipper.attach(flip, TIMESTAMP2);
            }

        }

        ThisThread::sleep_for(50ms);
    }
}
