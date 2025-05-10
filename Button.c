#include"stdint.h"
#include "Stm32Register.h"

void GPIOB_Input_Init(){
	/* Configure PB0 as input with pull-up */
	GPIOB->CRL &= ~GPIOB_CRL_MODE0_MASK;   // Clear MODE0 bits (input mode)
	GPIOB->CRL &= ~GPIOB_CRL_CNF0_MASK;    // Clear CNF0 bits
	GPIOB->CRL |= GPIOB_CRL_MODE0(0);      // MODE0 = 00 → Input
	GPIOB->CRL |= GPIOB_CRL_CNF0(2);       // CNF0  = 10 → Input pull-up/pull-down
	GPIOB->ODR |= GPIOB_ODR0(1);           // ODR0 = 1 → Activate pull-up

	/* Configure PB1 as input with pull-up */
	GPIOB->CRL &= ~GPIOB_CRL_MODE1_MASK;   // Clear MODE1 bits (input mode)
	GPIOB->CRL &= ~GPIOB_CRL_CNF1_MASK;    // Clear CNF1 bits
	GPIOB->CRL |= GPIOB_CRL_MODE1(0);      // MODE1 = 00 → Input
	GPIOB->CRL |= GPIOB_CRL_CNF1(2);       // CNF1  = 10 → Input pull-up/pull-down
	GPIOB->ODR |= GPIOB_ODR1(1);           // ODR1 = 1 → Activate pull-up
}

void GPIOA_Input_Init() {
    /* Configure PA4 as input with pull-up */
    GPIOA->CRL &= ~GPIOA_CRL_MODE4_MASK;   // Clear MODE4 bits (input mode)
    GPIOA->CRL &= ~GPIOA_CRL_CNF4_MASK;    // Clear CNF4 bits
    GPIOA->CRL |=  GPIOA_CRL_MODE4(0);     // MODE4 = 00 → Input
    GPIOA->CRL |=  GPIOA_CRL_CNF4(2);      // CNF4  = 10 → Input pull-up/pull-down
    GPIOA->ODR |=  GPIOA_ODR4(1);          // ODR4 = 1 → Activate pull-up

    /* Configure PA5 as input with pull-up */
    GPIOA->CRL &= ~GPIOA_CRL_MODE5_MASK;   // Clear MODE5 bits (input mode)
    GPIOA->CRL &= ~GPIOA_CRL_CNF5_MASK;    // Clear CNF5 bits
    GPIOA->CRL |=  GPIOA_CRL_MODE5(0);     // MODE5 = 00 → Input
    GPIOA->CRL |=  GPIOA_CRL_CNF5(2);      // CNF5  = 10 → Input pull-up/pull-down
    GPIOA->ODR |=  GPIOA_ODR5(1);          // ODR5 = 1 → Activate pull-up

    /* Configure PA6 as input with pull-up */
    GPIOA->CRL &= ~GPIOA_CRL_MODE6_MASK;   // Clear MODE6 bits (input mode)
    GPIOA->CRL &= ~GPIOA_CRL_CNF6_MASK;    // Clear CNF6 bits
    GPIOA->CRL |=  GPIOA_CRL_MODE6(0);     // MODE6 = 00 → Input
    GPIOA->CRL |=  GPIOA_CRL_CNF6(2);      // CNF6  = 10 → Input pull-up/pull-down
    GPIOA->ODR |=  GPIOA_ODR6(1);          // ODR6 = 1 → Activate pull-up

    /* Configure PA7 as input with pull-up */
    GPIOA->CRL &= ~GPIOA_CRL_MODE7_MASK;   // Clear MODE7 bits (input mode)
    GPIOA->CRL &= ~GPIOA_CRL_CNF7_MASK;    // Clear CNF7 bits
    GPIOA->CRL |=  GPIOA_CRL_MODE7(0);     // MODE7 = 00 → Input
    GPIOA->CRL |=  GPIOA_CRL_CNF7(2);      // CNF7  = 10 → Input pull-up/pull-down
    GPIOA->ODR |=  GPIOA_ODR7(1);          // ODR7 = 1 → Activate pull-up
}

uint8_t check_button(uint8_t button_number)
{
    switch (button_number)
    {
        case 4:   // PA4
            return ((GPIOA->IDR & GPIOA_IDR4_MASK) == 0);

        case 5:   // PA5
            return ((GPIOA->IDR & GPIOA_IDR5_MASK) == 0);

        case 6:   // PA6
            return ((GPIOA->IDR & GPIOA_IDR6_MASK) == 0);

        case 7:   // PA7
            return ((GPIOA->IDR & GPIOA_IDR7_MASK) == 0);

        case 100: // PB0
            return ((GPIOB->IDR & GPIOB_IDR0_MASK) == 0);

        case 101: // PB1
            return ((GPIOB->IDR & GPIOB_IDR1_MASK) == 0);

        default:
            return 0;  // invalid button_number → not pressed
    }
}
