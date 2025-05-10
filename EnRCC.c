#include"stdint.h"
#include "Stm32Register.h"

void EnTimer(){
	/* Enable clock for TIM2 */
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN(1u);
	/* Enable clock for TIM3 */
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN(1u);
}

void EnGPIO(){
	/* Enable clock for Port */
	RCC->APB2ENR |= RCC_AHB2ENR_IOPAEN(1u);
	RCC->APB2ENR |= RCC_APB2ENR_IOPBEN(1u);
}
