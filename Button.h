#ifndef GPIO_CONTROL_H_
#define GPIO_CONTROL_H_

#include <stdint.h>
#include "Stm32Register.h"

/**
 * @brief  Initialize PB0 and PB1 as inputs with pull-up
 */
void GPIOB_Input_Init(void);

/**
 * @brief  Initialize PA4, PA5, PA6, PA7 as inputs with pull-up
 */
void GPIOA_Input_Init(void);

/**
 * @brief  Button identifier values for check_button()
 */
#define BUTTON_PA4 4
#define BUTTON_PA5 5
#define BUTTON_PA6 6
#define BUTTON_PA7 7
#define BUTTON_PB0 100
#define BUTTON_PB1 101

/**
 * @brief  Read button state (active-low)
 * @param  button_number  Identifier BUTTON_PA4..BUTTON_PB1
 * @return 1 if pressed (logic low), 0 otherwise
 */
uint8_t check_button(uint8_t button_number);

#endif /* GPIO_CONTROL_H_ */

