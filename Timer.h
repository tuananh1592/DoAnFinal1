#ifndef TIMER_H_
#define TIMER_H_

#include <stdint.h>
#include "Stm32Register.h"

/**
 * @brief  Initialize TIM2 for basic timing at 1 MHz (PSC = 7)
 * @note   Auto-reload register set to 0xFFFF
 */
void InitTimer2(void);

/**
 * @brief  Initialize TIM3 for basic timing at 1 MHz (PSC = 7)
 * @note   Auto-reload register set to 0xFFFF
 */
void InitTimer3(void);

/**
 * @brief  Delay for a specified number of microseconds using TIM2
 * @param  us: number of microseconds to delay
 */
void delay2_us(uint32_t us);

/**
 * @brief  Delay for a specified number of milliseconds using TIM2
 * @param  ms: number of milliseconds to delay
 */
void delay2_ms(uint32_t ms);

/**
 * @brief  Delay for a specified number of microseconds using TIM3
 * @param  us: number of microseconds to delay
 */
void delay3_us(uint32_t us);

/**
 * @brief  Delay for a specified number of milliseconds using TIM3
 * @param  ms: number of milliseconds to delay
 */
void delay3_ms(uint32_t ms);

#endif /* TIMER_H_ */
