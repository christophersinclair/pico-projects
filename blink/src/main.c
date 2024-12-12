/******************************
* @file main.c
* @brief Raspberry Pi Pico LED Blink
*
* @author Chris Sinclair
* @date 12/2024
*
**************************************/
#include "pico/stdlib.h"

#ifndef LED_DELAY_MS
#define LED_DELAY_MS 250
#endif

int main(void) {
    int rc = pico_gpio_init(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    if (rc != PICO_OK) {
        return 1;
    }

    while(true) {
        pico_set_gpio(PICO_DEFAULT_LED_PIN, true);
        sleep_ms(LED_DELAY_MS);
        pico_set_gpio(PICO_DEFAULT_LED_PIN, false);
        sleep_ms(LED_DELAY_MS);
    }
}

int pico_gpio_init(int pin_number, int dir) {
    gpio_init(pin_number);

    gpio_set_dir(pin_number, dir);

    return PICO_OK;
}

void pico_set_gpio(int pin_number, bool gpio_state) {
    gpio_put(pin_number, gpio_state);
}