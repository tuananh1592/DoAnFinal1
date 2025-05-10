#ifndef ADC_H_
#define ADC_H_
#include <stdint.h>
#include "Stm32Register.h"
/**
 * @brief  Configure ADC input pins (PA0, PA3) as analog inputs
 */
void ADC_InPut_Init(void);

/**
 * @brief  Initialize ADC1 for continuous conversion on channel 0
 */
void ADC_Init(void);

/**
 * @brief  Start ADC1 conversion
 */
void ADC_Start(void);

/**
 * @brief  Read the latest ADC1 conversion result
 * @return 12-bit ADC conversion value
 */
float ADC_Read();

#endif /* ADC_H_ */
