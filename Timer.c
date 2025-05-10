#include"stdint.h"
#include "Stm32Register.h"
void InitTimer2(){
    /* Set PSR = 7 -> Fclock = CK_PSC / (PSC[15:0] + 1) = 8 / (7 + 1) = 1MHz */
    TIM2->PSC = TIM_PSC_PSC(7u);
    /* Set Auto-Reload Register to maximum */
    TIM2->ARR = TIM_ARR_ARR(0xFFFFu);
    /* Enable counter */
    TIM2->CR1 |= TIM_CR1_CEN(1u);
}

void InitTimer3(){
    /* Set PSC = 7 -> Fclock = CK_PSC / (PSC + 1) = 8MHz / (7 + 1) = 1MHz */
    TIM3->PSC = TIM3_PSC_PSC(7u);
    /* Set Auto-Reload Register to maximum */
    TIM3->ARR = TIM3_ARR_ARR(0xFFFFu);
    /* Enable counter */
    TIM3->CR1 |= TIM3_CR1_CEN(1u);
}

void delay2_us(uint32_t us)
{
	TIM2->CNT = 0;
    while ((TIM2->CNT) < us);   /* delay 1 us */
}

void delay2_ms(uint32_t ms)
{
    uint32_t count;
    for (count = 0; count < ms; count++)
    {
        delay2_us(1000);         /* delay 1ms */
    }
}

void delay3_us(uint32_t us)
{
	TIM3->CNT = 0;
    while ((TIM3->CNT) < us);   /* delay 1 us */
}

void delay3_ms(uint32_t ms)
{
    uint32_t count;
    for (count = 0; count < ms; count++)
    {
        delay3_us(1000);         /* delay 1ms */
    }
}
