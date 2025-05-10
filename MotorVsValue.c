#include"stdint.h"
#include "Stm32Register.h"
#include"MotorVsValue.h"

void GPIOA_OutPut_Init(){
	/* --- Configure PA8 as output push-pull, 2 MHz --- */
	GPIOA->CRH &= ~GPIOA_CRH_MODE8_MASK;   /* Clear MODE8 bits */
	GPIOA->CRH &= ~GPIOA_CRH_CNF8_MASK;    /* Clear CNF8 bits */
	GPIOA->CRH |= GPIOA_CRH_MODE8(2)       /* Set MODE8 = 2 (2 MHz output) */
	             | GPIOA_CRH_CNF8(0);      /* Set CNF8 = 0 (push-pull) */

	/* --- Configure PA9 as output push-pull, 2 MHz --- */
	GPIOA->CRH &= ~GPIOA_CRH_MODE9_MASK;   /* Clear MODE9 bits */
	GPIOA->CRH &= ~GPIOA_CRH_CNF9_MASK;    /* Clear CNF9 bits */
	GPIOA->CRH |= GPIOA_CRH_MODE9(2)       /* Set MODE9 = 2 (2 MHz output) */
	             | GPIOA_CRH_CNF9(0);      /* Set CNF9 = 0 (push-pull) */

	/* --- Configure PA10 as output push-pull, 2 MHz --- */
	GPIOA->CRH &= ~GPIOA_CRH_MODE10_MASK;  /* Clear MODE10 bits */
	GPIOA->CRH &= ~GPIOA_CRH_CNF10_MASK;   /* Clear CNF10 bits */
	GPIOA->CRH |= GPIOA_CRH_MODE10(2)      /* Set MODE10 = 2 (2 MHz output) */
	             | GPIOA_CRH_CNF10(0);     /* Set CNF10 = 0 (push-pull) */

	/* --- Configure PA11 as output push-pull, 2 MHz --- */
	GPIOA->CRH &= ~GPIOA_CRH_MODE11_MASK;  /* Clear MODE11 bits */
	GPIOA->CRH &= ~GPIOA_CRH_CNF11_MASK;   /* Clear CNF11 bits */
	GPIOA->CRH |= GPIOA_CRH_MODE11(2)      /* Set MODE11 = 2 (2 MHz output) */
	             | GPIOA_CRH_CNF11(0);     /* Set CNF11 = 0 (push-pull) */
}

void GPIOB_OutPut_Init(){
	/* --- Configure PB8 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE8_MASK;  /* Clear MODE8 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF8_MASK;   /* Clear CNF8 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE8(2)      /* Set MODE8 = 2 (2 MHz output) */
	              | GPIOB_CRH_CNF8(0);    /* Set CNF8 = 0 (push-pull) */

	/* --- Configure PB9 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE9_MASK;  /* Clear MODE9 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF9_MASK;   /* Clear CNF9 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE9(2)      /* Set MODE9 = 2 (2 MHz output) */
	              | GPIOB_CRH_CNF9(0);    /* Set CNF9 = 0 (push-pull) */
	/* --- Configure PB12 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE12_MASK;  /* Clear MODE12 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF12_MASK;   /* Clear CNF12 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE12(2)      /* Set MODE12 = 2 (2 MHz output) */
	             | GPIOB_CRH_CNF12(0);     /* Set CNF12 = 0 (push-pull) */

	/* --- Configure PB13 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE13_MASK;  /* Clear MODE13 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF13_MASK;   /* Clear CNF13 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE13(2)      /* Set MODE13 = 2 (2 MHz output) */
	             | GPIOB_CRH_CNF13(0);     /* Set CNF13 = 0 (push-pull) */

	/* --- Configure PB14 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE14_MASK;  /* Clear MODE14 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF14_MASK;   /* Clear CNF14 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE14(2)      /* Set MODE14 = 2 (2 MHz output) */
	             | GPIOB_CRH_CNF14(0);     /* Set CNF14 = 0 (push-pull) */

	/* --- Configure PB15 as output push-pull, 2 MHz --- */
	GPIOB->CRH &= ~GPIOB_CRH_MODE15_MASK;  /* Clear MODE15 bits */
	GPIOB->CRH &= ~GPIOB_CRH_CNF15_MASK;   /* Clear CNF15 bits */
	GPIOB->CRH |= GPIOB_CRH_MODE15(2)      /* Set MODE15 = 2 (2 MHz output) */
	             | GPIOB_CRH_CNF15(0);     /* Set CNF15 = 0 (push-pull) */
}

void OnOff_OutPut(char OutPut_Number, char Status){
    switch (OutPut_Number) {
        /* PA8 */
        case 8:
            if (Status == 1) {
                GPIOA->BSRR |= GPIOA_BSRR_BS8_MASK;   /* Set PA8 */
            }
            else if (Status == 0) {
                GPIOA->BSRR |= GPIOA_BSRR_BR8_MASK;   /* Reset PA8 */
            }
            break;

        /* PA9 */
        case 9:
            if (Status == 1) {
                GPIOA->BSRR |= GPIOA_BSRR_BS9_MASK;   /* Set PA9 */
            }
            else if (Status == 0) {
                GPIOA->BSRR |= GPIOA_BSRR_BR9_MASK;   /* Reset PA9 */
            }
            break;

        /* PA10 */
        case 10:
            if (Status == 1) {
                GPIOA->BSRR |= GPIOA_BSRR_BS10_MASK;  /* Set PA10 */
            }
            else if (Status == 0) {
                GPIOA->BSRR |= GPIOA_BSRR_BR10_MASK;  /* Reset PA10 */
            }
            break;

        /* PA11 */
        case 11:
            if (Status == 1) {
                GPIOA->BSRR |= GPIOA_BSRR_BS11_MASK;  /* Set PA11 */
            }
            else if (Status == 0) {
                GPIOA->BSRR |= GPIOA_BSRR_BR11_MASK;  /* Reset PA11 */
            }
            break;

        /* PB8 */
        case 108:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS8_MASK;   /* Set PB8 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR8_MASK;   /* Reset PB8 */
            }
            break;

        /* PB9 */
        case 109:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS9_MASK;   /* Set PB9 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR9_MASK;   /* Reset PB9 */
            }
            break;

        /* PB12 */
        case 12:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS12_MASK;  /* Set PB12 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR12_MASK;  /* Reset PB12 */
            }
            break;

        /* PB13 */
        case 13:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS13_MASK;  /* Set PB13 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR13_MASK;  /* Reset PB13 */
            }
            break;

        /* PB14 */
        case 14:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS14_MASK;  /* Set PB14 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR14_MASK;  /* Reset PB14 */
            }
            break;

        /* PB15 */
        case 15:
            if (Status == 1) {
                GPIOB->BSRR |= GPIOB_BSRR_BS15_MASK;  /* Set PB15 */
            }
            else if (Status == 0) {
                GPIOB->BSRR |= GPIOB_BSRR_BR15_MASK;  /* Reset PB15 */
            }
            break;

        default:
            /* Unsupported pin number or Status not 0/1 → do nothing */
            break;
    }
}

void Auto_Motor() {
	uint32_t count1;
	    for (count1 = 0; count1 < 80; count1++) { // Quay theo chiều thuận
	        TIM3->CNT = 0;
	        while ((TIM3->CNT) < 1000) {
	            // Bước 1: IN4 (PB12)
	            OnOff_OutPut(OPB12_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB12_Mortor, Off);
	            delay2_ms(5);

	            // Bước 2: IN3 (PB13)
	            OnOff_OutPut(OPB13_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB13_Mortor, Off);
	            delay2_ms(5);

	            // Bước 3: IN2 (PB14)
	            OnOff_OutPut(OPB14_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB14_Mortor, Off);
	            delay2_ms(5);

	            // Bước 4: IN1 (PB15)
	            OnOff_OutPut(OPB15_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB15_Mortor, Off);
	            delay2_ms(5);

	            // Bước 1: IN4 (PA11)
	            OnOff_OutPut(OPA11_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA11_Mortor, Off);
	            delay2_ms(5);

	            // Bước 2: IN3 (PA10)
	            OnOff_OutPut(OPA10_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA10_Mortor, Off);
	            delay2_ms(5);

	            // Bước 3: IN2 (PA9)
	            OnOff_OutPut(OPA9_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA9_Mortor, Off);
	            delay2_ms(5);

	            // Bước 4: IN1 (PA8)
	            OnOff_OutPut(OPA8_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA8_Mortor, Off);
	            delay2_ms(5);
	        }
	    }
	    delay2_ms(2000);

	    uint32_t count2;
	    for (count2 = 0; count2 < 80; count2++) { // Quay theo chiều nghịch
	        TIM3->CNT = 0;
	        while ((TIM3->CNT) < 1000) {
	            // Bước 1: IN1 (PB15)
	            OnOff_OutPut(OPB15_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB15_Mortor, Off);
	            delay2_ms(5);

	            // Bước 2: IN2 (PB14)
	            OnOff_OutPut(OPB14_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB14_Mortor, Off);
	            delay2_ms(5);

	            // Bước 3: IN3 (PB13)
	            OnOff_OutPut(OPB13_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB13_Mortor, Off);
	            delay2_ms(5);

	            // Bước 4: IN4 (PB12)
	            OnOff_OutPut(OPB12_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPB12_Mortor, Off);
	            delay2_ms(5);

	            // Bước 1: IN1 (PA8)
	            OnOff_OutPut(OPA8_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA8_Mortor, Off);
	            delay2_ms(5);

	            // Bước 2: IN2 (PA9)
	            OnOff_OutPut(OPA9_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA9_Mortor, Off);
	            delay2_ms(5);

	            // Bước 3: IN3 (PA10)
	            OnOff_OutPut(OPA10_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA10_Mortor, Off);
	            delay2_ms(5);

	            // Bước 4: IN4 (PA11)
	            OnOff_OutPut(OPA11_Mortor, On);
	            delay2_ms(5);
	            OnOff_OutPut(OPA11_Mortor, Off);
	            delay2_ms(5);
	        }
	    }
	    delay2_ms(2000);
}
