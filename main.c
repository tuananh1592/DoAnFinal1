#include <stdint.h>
#include"STM32RIGISTER.h"

void delay_us(uint32_t us);
void delay_ms(uint32_t ms);
uint8_t check_button(uint8_t button_number)
{
    switch (button_number)
    {
        case 6: // PA6
            return ((GPIOA->IDR & GPIOA_IDR6_MASK) == 0);

        case 7: // PA7
            return ((GPIOA->IDR & GPIOA_IDR7_MASK) == 0);

        case 100: // PB0 (mình gán 100 vì A0, A6, A7 hết số rồi)
            return ((GPIOB->IDR & GPIOB_IDR0_MASK) == 0);

        default:
            return 0; // Nếu truyền sai thì coi như không nhấn
    }
}
int main(void)
{
	/* Enable clock for Port */
    RCC->APB2ENR |= RCC_AHB2ENR_IOPAEN(1u);
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN(1u);
    /* --- Cấu hình PB0 --- */
    GPIOB->CRL &= ~GPIOB_CRL_MODE0_MASK;
    GPIOB->CRL &= ~GPIOB_CRL_CNF0_MASK;
    GPIOB->CRL |= GPIOB_CRL_MODE0(0);    // chỉnh PB0 là input
    GPIOB->CRL |= GPIOB_CRL_CNF0(2);     // định dạng input là kiểu pull-up/pull-down
    GPIOB->ODR |= GPIOB_ODR0(1);         // để lên pull-up
    /* --- Cấu hình PB3 --- */
    /* Xoá các bit MODE3 và CNF3 để đảm bảo sạch */
    GPIOB->CRL &= ~GPIOB_CRL_MODE3_MASK;
    GPIOB->CRL &= ~GPIOB_CRL_CNF3_MASK;
    /* Thiết lập PB3 làm output push-pull 2MHz */
    GPIOB->CRL |= (GPIOB_CRL_MODE3(2)) | GPIOB_CRL_CNF3(0);
    /* --- Cấu hình PB4 --- */
    /* Xoá các bit MODE4 và CNF4 để đảm bảo sạch */
    GPIOB->CRL &= ~GPIOB_CRL_MODE4_MASK;
    GPIOB->CRL &= ~GPIOB_CRL_CNF4_MASK;
    /* Thiết lập PB4 làm output push-pull 2MHz */
    GPIOB->CRL |= (GPIOB_CRL_MODE4(2)) | GPIOB_CRL_CNF4(0);
    /* --- Cấu hình PB12 --- */
    /* Xoá các bit MODE12 và CNF12 để đảm bảo sạch */
    GPIOB->CRH &= ~GPIOB_CRH_MODE12_MASK;
    GPIOB->CRH &= ~GPIOB_CRH_CNF12_MASK;
    /* Thiết lập PB12 làm output push-pull 2MHz */
    GPIOB->CRH |= (GPIOB_CRH_MODE12(2)) | GPIOB_CRH_CNF12(0);
    /* --- Cấu hình PB8 --- */
        /* Xoá các bit MODE8 và CNF8 để đảm bảo sạch */
        GPIOB->CRH &= ~GPIOB_CRH_MODE8_MASK;
        GPIOB->CRH &= ~GPIOB_CRH_CNF8_MASK;
        /* Thiết lập PA8 làm output push-pull 2MHz */
        GPIOB->CRH |= (GPIOB_CRH_MODE8(2)) | GPIOB_CRH_CNF8(0);

        /* --- Cấu hình PB9 --- */
        /* Xoá các bit MODE9 và CNF9 để đảm bảo sạch */
        GPIOB->CRH &= ~GPIOB_CRH_MODE9_MASK;
        GPIOB->CRH &= ~GPIOB_CRH_CNF9_MASK;
        /* Thiết lập PA9 làm output push-pull 2MHz */
        GPIOB->CRH |= (GPIOB_CRH_MODE9(2)) | GPIOB_CRH_CNF9(0);
    /* --- Cấu hình PB13 --- */
    /* Xoá các bit MODE13 và CNF13 để đảm bảo sạch */
    GPIOB->CRH &= ~GPIOB_CRH_MODE13_MASK;
    GPIOB->CRH &= ~GPIOB_CRH_CNF13_MASK;
    /* Thiết lập PB13 làm output push-pull 2MHz */
    GPIOB->CRH |= (GPIOB_CRH_MODE13(2)) | GPIOB_CRH_CNF13(0);

    /* --- Cấu hình PB14 --- */
    /* Xoá các bit MODE14 và CNF14 để đảm bảo sạch */
    GPIOB->CRH &= ~GPIOB_CRH_MODE14_MASK;
    GPIOB->CRH &= ~GPIOB_CRH_CNF14_MASK;
    /* Thiết lập PB14 làm output push-pull 2MHz */
    GPIOB->CRH |= (GPIOB_CRH_MODE14(2)) | GPIOB_CRH_CNF14(0);

    /* --- Cấu hình PB15 --- */
    /* Xoá các bit MODE15 và CNF15 để đảm bảo sạch */
    GPIOB->CRH &= ~GPIOB_CRH_MODE15_MASK;
    GPIOB->CRH &= ~GPIOB_CRH_CNF15_MASK;
    /* Thiết lập PB15 làm output push-pull 2MHz */
    GPIOB->CRH |= (GPIOB_CRH_MODE15(2)) | GPIOB_CRH_CNF15(0);

    /* --- Cấu hình PA6 --- */
    GPIOA->CRL &= ~GPIOA_CRL_MODE6_MASK;
    GPIOA->CRL &= ~GPIOA_CRL_CNF6_MASK;
    GPIOA->CRL |= GPIOA_CRL_MODE6(0);    // chỉnh PA6 là input
    GPIOA->CRL |= GPIOA_CRL_CNF6(2);     // định dạng input là kiểu pull-up/pull-down
    GPIOA->ODR |= GPIOA_ODR6(1);         // để lên pull-up
    /* --- Cấu hình PA7 --- */
    GPIOA->CRL &= ~GPIOA_CRL_MODE7_MASK;
    GPIOA->CRL &= ~GPIOA_CRL_CNF7_MASK;
    GPIOA->CRL |= GPIOA_CRL_MODE7(0);    // chỉnh PA7 là input
    GPIOA->CRL |= GPIOA_CRL_CNF7(2);     // định dạng input là kiểu pull-up/pull-down
    GPIOA->ODR |= GPIOA_ODR7(1);         // để lên pull-up
    /* --- Cấu hình PA8 --- */
    /* Xoá các bit MODE8 và CNF8 để đảm bảo sạch */
    GPIOA->CRH &= ~GPIOA_CRH_MODE8_MASK;
    GPIOA->CRH &= ~GPIOA_CRH_CNF8_MASK;
    /* Thiết lập PA8 làm output push-pull 2MHz */
    GPIOA->CRH |= (GPIOA_CRH_MODE8(2)) | GPIOA_CRH_CNF8(0);

    /* --- Cấu hình PA9 --- */
    /* Xoá các bit MODE9 và CNF9 để đảm bảo sạch */
    GPIOA->CRH &= ~GPIOA_CRH_MODE9_MASK;
    GPIOA->CRH &= ~GPIOA_CRH_CNF9_MASK;
    /* Thiết lập PA9 làm output push-pull 2MHz */
    GPIOA->CRH |= (GPIOA_CRH_MODE9(2)) | GPIOA_CRH_CNF9(0);

    /* --- Cấu hình PA10 --- */
    /* Xoá các bit MODE10 và CNF10 để đảm bảo sạch */
    GPIOA->CRH &= ~GPIOA_CRH_MODE10_MASK;
    GPIOA->CRH &= ~GPIOA_CRH_CNF10_MASK;
    /* Thiết lập PA10 làm output push-pull 2MHz */
    GPIOA->CRH |= (GPIOA_CRH_MODE10(2)) | GPIOA_CRH_CNF10(0);

    /* --- Cấu hình PA11 --- */
    /* Xoá các bit MODE11 và CNF11 để đảm bảo sạch */
    GPIOA->CRH &= ~GPIOA_CRH_MODE11_MASK;
    GPIOA->CRH &= ~GPIOA_CRH_CNF11_MASK;
    /* Thiết lập PA11 làm output push-pull 2MHz */
    GPIOA->CRH |= (GPIOA_CRH_MODE11(2)) | GPIOA_CRH_CNF11(0);

    /* Enable clock for TIM2 */
    RCC->APB1ENR |= RCC_APB1ENR_TIM2EN(1u);
    /* Set PSR = 7 -> Fclock = CK_PSC / (PSC[15:0] + 1) = 8 / (7 + 1) = 1MHz */
    TIM2->PSC = TIM_PSC_PSC(7u);
    TIM2->ARR = TIM_ARR_ARR(0xFFFFu);
    /* Enable counter */
    TIM2->CR1 |= TIM_CR1_CEN(1u);

    /* Enable clock for TIM3 */
    RCC->APB1ENR |= RCC_APB1ENR_TIM3EN(1u);
    /* Set PSC = 7 -> Fclock = CK_PSC / (PSC + 1) = 8MHz / (7 + 1) = 1MHz */
    TIM3->PSC = TIM3_PSC_PSC(7u);
    /* Set Auto-Reload Register to maximum */
    TIM3->ARR = TIM3_ARR_ARR(0xFFFFu);
    /* Enable counter */
    TIM3->CR1 |= TIM3_CR1_CEN(1u);

    GPIOB->BSRR |= GPIOB_BSRR_BS8_MASK;
    delay_ms(500);
    GPIOB->BSRR |= GPIOB_BSRR_BS9_MASK;
    delay_ms(500);
    while(1){
    uint32_t count1;
    for (count1 = 0; count1 < 80; count1++){ //Auto Thuan kim dong do
    TIM3->CNT = 0;
    while ((TIM3->CNT) < 1000) {
        // Bước 1: IN4 (PB12)
        GPIOB->BSRR |= GPIOB_BSRR_BS12_MASK;  // Bật IN4
        delay_ms(5);
        GPIOB->BSRR |= GPIOB_BSRR_BR12_MASK;  // Tắt IN4
        delay_ms(5);

        // Bước 2: IN3 (PB13)
        GPIOB->BSRR |= GPIOB_BSRR_BS13_MASK;  // Bật IN3
        delay_ms(5);
        GPIOB->BSRR |= GPIOB_BSRR_BR13_MASK;  // Tắt IN3
        delay_ms(5);

        // Bước 3: IN2 (PB14)
        GPIOB->BSRR |= GPIOB_BSRR_BS14_MASK;  // Bật IN2
        delay_ms(5);
        GPIOB->BSRR |= GPIOB_BSRR_BR14_MASK;  // Tắt IN2
        delay_ms(5);

        // Bước 4: IN1 (PB15)
        GPIOB->BSRR |= GPIOB_BSRR_BS15_MASK;  // Bật IN1
        delay_ms(5);
        GPIOB->BSRR |= GPIOB_BSRR_BR15_MASK;  // Tắt IN1
        delay_ms(5);

        // Bước 1: IN4 (PA11)
        GPIOA->BSRR |= GPIOA_BSRR_BS11_MASK;  // Bật IN4
        delay_ms(5);
        GPIOA->BSRR |= GPIOA_BSRR_BR11_MASK;  // Tắt IN4
        delay_ms(5);

        // Bước 2: IN3 (PA10)
        GPIOA->BSRR |= GPIOA_BSRR_BS10_MASK;  // Bật IN3
        delay_ms(5);
        GPIOA->BSRR |= GPIOA_BSRR_BR10_MASK;  // Tắt IN3
        delay_ms(5);

        // Bước 3: IN2 (PA9)
        GPIOA->BSRR |= GPIOA_BSRR_BS9_MASK;   // Bật IN2
        delay_ms(5);
        GPIOA->BSRR |= GPIOA_BSRR_BR9_MASK;   // Tắt IN2
        delay_ms(5);

        // Bước 4: IN1 (PA8)
        GPIOA->BSRR |= GPIOA_BSRR_BS8_MASK;   // Bật IN1
        delay_ms(5);
        GPIOA->BSRR |= GPIOA_BSRR_BR8_MASK;   // Tắt IN1
        delay_ms(5);
    	}
    }
    delay_ms(2000);

    uint32_t count2;
       for (count2 = 0; count2 < 80; count2++){ //Auto Thuan kim dong do
       TIM3->CNT = 0;
       while ((TIM3->CNT) < 1000) {
    	   // Bước 1: IN1 (PB15)
    	       GPIOB->BSRR |= GPIOB_BSRR_BS15_MASK;  // Bật IN1
    	       delay_ms(5);
    	       GPIOB->BSRR |= GPIOB_BSRR_BR15_MASK;  // Tắt IN1
    	       delay_ms(5);

    	       // Bước 2: IN2 (PB14)
    	       GPIOB->BSRR |= GPIOB_BSRR_BS14_MASK;  // Bật IN2
    	       delay_ms(5);
    	       GPIOB->BSRR |= GPIOB_BSRR_BR14_MASK;  // Tắt IN2
    	       delay_ms(5);

    	       // Bước 3: IN3 (PB13)
    	       GPIOB->BSRR |= GPIOB_BSRR_BS13_MASK;  // Bật IN3
    	       delay_ms(5);
    	       GPIOB->BSRR |= GPIOB_BSRR_BR13_MASK;  // Tắt IN3
    	       delay_ms(5);

    	       // Bước 4: IN4 (PB12)
    	       GPIOB->BSRR |= GPIOB_BSRR_BS12_MASK;  // Bật IN4
    	       delay_ms(5);
    	       GPIOB->BSRR |= GPIOB_BSRR_BR12_MASK;  // Tắt IN4
    	       delay_ms(5);

    	       // Bước 1: IN1 (PA8)
    	           GPIOA->BSRR |= GPIOA_BSRR_BS8_MASK;   // Bật IN1
    	           delay_ms(5);
    	           GPIOA->BSRR |= GPIOA_BSRR_BR8_MASK;   // Tắt IN1
    	           delay_ms(5);

    	           // Bước 2: IN2 (PA9)
    	           GPIOA->BSRR |= GPIOA_BSRR_BS9_MASK;   // Bật IN2
    	           delay_ms(5);
    	           GPIOA->BSRR |= GPIOA_BSRR_BR9_MASK;   // Tắt IN2
    	           delay_ms(5);

    	           // Bước 3: IN3 (PA10)
    	           GPIOA->BSRR |= GPIOA_BSRR_BS10_MASK;  // Bật IN3
    	           delay_ms(5);
    	           GPIOA->BSRR |= GPIOA_BSRR_BR10_MASK;  // Tắt IN3
    	           delay_ms(5);

    	           // Bước 4: IN4 (PA11)
    	           GPIOA->BSRR |= GPIOA_BSRR_BS11_MASK;  // Bật IN4
    	           delay_ms(5);
    	           GPIOA->BSRR |= GPIOA_BSRR_BR11_MASK;  // Tắt IN4
    	           delay_ms(5);
       	   }
       }
       delay_ms(2000);
	}
}
void delay_us(uint32_t us)
{
	TIM2->CNT = 0;
    while ((TIM2->CNT) < us);   /* delay 1 us */
}

void delay_ms(uint32_t ms)
{
    uint32_t count;

    for (count = 0; count < ms; count++)
    {
        delay_us(1000);         /* delay 1ms */
    }
}

