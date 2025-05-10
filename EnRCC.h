#ifndef ENRCC_H_
#define ENRCC_H_

#include <stdint.h>
#include "Stm32Register.h"

/**
 * @brief  Enable clocks for TIM2 and TIM3 peripherals.
 */
void EnTimer(void);

/**
 * @brief  Enable clocks for GPIOA and GPIOB ports.
 */
void EnGPIO(void);

#endif /* ENRCC_H_ */
