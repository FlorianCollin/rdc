/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
using namespace std::chrono;

// Blinking rate in milliseconds
// #define BLINKING_RATE     500ms


// InterruptIn button(BUTTON1);
DigitalOut led(LED1);
// Timer t;

Ticker flipper;
// char flag_to_print;
// float current_timer_delta;


// void handler_rise() {
//     current_timer_delta = t.read_ms();
// }
// 
// void handler_fall() {
//     current_timer_delta = t.read_ms() - current_timer_delta;
//     flag_to_print = 1;
//     
// }


void flip() {
    led = !led;
}

int main()
{
    // flag_to_print = 0;
    // t.start();

    // button.enable_irq();
    // button.rise(&handler_rise); 
    // button.fall(&handler_fall); 
    // printf("Hello world\n");
    flipper.attach(&flip, 2.0);
    while(true) {
    }
    // while (true) {
    //     if (flag_to_print) {
    //         flag_to_print = 0;
    //         printf("timer : %f ms\n", current_timer_delta);
    //     }
    //     ThisThread::sleep_for(BLINKING_RATE);
    // }
}
