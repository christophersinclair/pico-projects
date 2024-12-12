/******************************
* @file main.h
* @brief Function declarations for the Blink program
*
* @author Chris Sinclair
* @date 12/2024
*
**************************************/
#ifndef __MAIN_H__
#define __MAIN_H__

/**
* Function: pico_gpio_init
* @brief Initialize a GPIO pin
* @param pin_number The GPIO pin number
* @param dir The GPIO direction (in or out)
* @return int
*/
int pico_gpio_init(int pin_number, int dir);

/**
* Function: pico_set_gpio
* @brief Set a GPIO pin to a particular state
* @param pin_number The GPIO pin number
* @param gpio_state HIGH or LOW digital out
* @return void
*/
void pico_set_gpio(int pin_number, bool gpio_state);

#endif /* __MAIN_H__ */