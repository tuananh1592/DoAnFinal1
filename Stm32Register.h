
#ifndef STM32REGISTER_H_
#define STM32REGISTER_H_

typedef struct
{
    uint32_t CR;
    uint32_t CFGR;
    uint32_t CIR;
    uint32_t APB2RSTR;
    uint32_t APB1RSTR;
    uint32_t AHBENR;
    uint32_t APB2ENR;
    uint32_t APB1ENR;
    uint32_t BDCR;
    uint32_t CSR;

} RCC_Type;
/* Define to access RCC peripheral registers */
#define RCC_BASE                    (0x40021000u)
#define RCC                         ((RCC_Type *)RCC_BASE)


/* EN IOPA*/
#define RCC_AHB2ENR_IOPAEN_SHIFT     (2u)
#define RCC_AHB2ENR_IOPAEN_MASK      (0x4u)
#define RCC_AHB2ENR_IOPAEN(x)        (((x) << RCC_AHB2ENR_IOPAEN_SHIFT) & (RCC_AHB2ENR_IOPAEN_MASK))
/* EN IOPA*/

/* EN IOPB*/
#define RCC_APB2ENR_IOPBEN_SHIFT    (3u)
#define RCC_APB2ENR_IOPBEN_MASK     (0x8u)
#define RCC_APB2ENR_IOPBEN(x)       (((x) << RCC_APB2ENR_IOPBEN_SHIFT) & (RCC_APB2ENR_IOPBEN_MASK))
/* EN IOPB*/

/*EN IOPC*/
#define RCC_APB2ENR_IOC_SHIFT (4u)
#define RCC_APB2ENR_IOC_MASK (0x10u)
#define RCC_APB2ENR_IOC(x) (((x)<<RCC_APB2ENR_IOC_SHIFT) & RCC_APB2ENR_IOC_MASK)
/*EN IOPC*/

/* EN TIMER2*/
#define RCC_APB1ENR_TIM2EN_SHIFT    (0u)
#define RCC_APB1ENR_TIM2EN_MASK     (0x1u)
#define RCC_APB1ENR_TIM2EN(x)       (((x) << RCC_APB1ENR_TIM2EN_SHIFT) & (RCC_APB1ENR_TIM2EN_MASK))
/* EN TIMER2*/

/* EN TIMER3*/
#define RCC_APB1ENR_TIM3EN_SHIFT    (1u)
#define RCC_APB1ENR_TIM3EN_MASK     (0x2u)
#define RCC_APB1ENR_TIM3EN(x)       (((x) << RCC_APB1ENR_TIM3EN_SHIFT) & (RCC_APB1ENR_TIM3EN_MASK))
/* EN TIMER3*/

/* EN ADC1 */
#define RCC_APB2ENR_ADC1EN_SHIFT    (9u)
#define RCC_APB2ENR_ADC1EN_MASK     (0x200u)
#define RCC_APB2ENR_ADC1EN(x)       (((x) << RCC_APB2ENR_ADC1EN_SHIFT) & (RCC_APB2ENR_ADC1EN_MASK))
/* EN ADC1 */

/*EN I2C1*/
#define RCC_APB1ENR_I2C1_SHIFT 		(21u)
#define RCC_APB1ENR_I2C1_MASK 		(0x200000u)
#define RCC_APB1ENR_I2C1(x) 		(((x)<<RCC_APB1ENR_I2C1_SHIFT) & RCC_APB1ENR_I2C1_MASK)
/*EN I2C1*/

/* Define to access RCC peripheral registers */

typedef struct
{
	uint32_t CRL;
	uint32_t CRH;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t BRR;
	uint32_t LCKR;
} GPIO_Type;
/*configure PC13*/
#define GPIOC ((GPIO_Type*) (0x40011000u))

#define GPIO_CRH_MODE13_SHIFT       (20u)
#define GPIO_CRH_MODE13_MASK        (0x300000u)
#define GPIO_CRH_MODE13(x)          (((x) << GPIO_CRH_MODE13_SHIFT) & (GPIO_CRH_MODE13_MASK))

#define GPIO_CRH_CNF13_SHIFT        (22u)
#define GPIO_CRH_CNF13_MASK         (0xC00000u)
#define GPIO_CRH_CNF13(x)           (((x) << GPIO_CRH_CNF13_SHIFT) & (GPIO_CRH_CNF13_MASK))

#define GPIOC_ODR13_SHIFT (13u)
#define GPIOC_ODR13_MASK (0x2000u)
#define GPIOC_ODR13(x) (((x)<<GPIOC_ODR13_SHIFT) & GPIOC_ODR13_MASK)

/* Define to access GPIOA peripheral registers */
#define GPIOA_BASE        (0x40010800u)
#define GPIOA             ((GPIO_Type *)GPIOA_BASE)

// ---------- PIN0 ----------
#define GPIOA_CRL_MODE0_SHIFT      (0u)
#define GPIOA_CRL_MODE0_MASK       (0x3u)
#define GPIOA_CRL_MODE0(x)         (((x)<<GPIOA_CRL_MODE0_SHIFT) & (GPIOA_CRL_MODE0_MASK))

#define GPIOA_CRL_CNF0_SHIFT       (2u)
#define GPIOA_CRL_CNF0_MASK        (0xCu)
#define GPIOA_CRL_CNF0(x)          (((x)<<GPIOA_CRL_CNF0_SHIFT) & (GPIOA_CRL_CNF0_MASK))

#define GPIOA_BSRR_BS0_SHIFT       (0u)
#define GPIOA_BSRR_BS0_MASK        (0x1u)
#define GPIOA_BSRR_BS0(x)          (((x)<<GPIOA_BSRR_BS0_SHIFT) & (GPIOA_BSRR_BS0_MASK))

#define GPIOA_BSRR_BR0_SHIFT       (16u)
#define GPIOA_BSRR_BR0_MASK        (0x10000u)
#define GPIOA_BSRR_BR0(x)          (((x)<<GPIOA_BSRR_BR0_SHIFT) & (GPIOA_BSRR_BR0_MASK))

// ---------- PIN1 ----------
#define GPIOA_CRL_MODE1_SHIFT      (4u)
#define GPIOA_CRL_MODE1_MASK       (0x30u)
#define GPIOA_CRL_MODE1(x)         (((x)<<GPIOA_CRL_MODE1_SHIFT) & (GPIOA_CRL_MODE1_MASK))

#define GPIOA_CRL_CNF1_SHIFT       (6u)
#define GPIOA_CRL_CNF1_MASK        (0xC0u)
#define GPIOA_CRL_CNF1(x)          (((x)<<GPIOA_CRL_CNF1_SHIFT) & (GPIOA_CRL_CNF1_MASK))

#define GPIOA_BSRR_BS1_SHIFT       (1u)
#define GPIOA_BSRR_BS1_MASK        (0x2u)
#define GPIOA_BSRR_BS1(x)          (((x)<<GPIOA_BSRR_BS1_SHIFT) & (GPIOA_BSRR_BS1_MASK))

#define GPIOA_BSRR_BR1_SHIFT       (17u)
#define GPIOA_BSRR_BR1_MASK        (0x20000u)
#define GPIOA_BSRR_BR1(x)          (((x)<<GPIOA_BSRR_BR1_SHIFT) & (GPIOA_BSRR_BR1_MASK))

// ---------- PIN2 ----------
#define GPIOA_CRL_MODE2_SHIFT      (8u)
#define GPIOA_CRL_MODE2_MASK       (0x300u)
#define GPIOA_CRL_MODE2(x)         (((x)<<GPIOA_CRL_MODE2_SHIFT) & (GPIOA_CRL_MODE2_MASK))

#define GPIOA_CRL_CNF2_SHIFT       (10u)
#define GPIOA_CRL_CNF2_MASK        (0xC00u)
#define GPIOA_CRL_CNF2(x)          (((x)<<GPIOA_CRL_CNF2_SHIFT) & (GPIOA_CRL_CNF2_MASK))

#define GPIOA_BSRR_BS2_SHIFT       (2u)
#define GPIOA_BSRR_BS2_MASK        (0x4u)
#define GPIOA_BSRR_BS2(x)          (((x)<<GPIOA_BSRR_BS2_SHIFT) & (GPIOA_BSRR_BS2_MASK))

#define GPIOA_BSRR_BR2_SHIFT       (18u)
#define GPIOA_BSRR_BR2_MASK        (0x40000u)
#define GPIOA_BSRR_BR2(x)          (((x)<<GPIOA_BSRR_BR2_SHIFT) & (GPIOA_BSRR_BR2_MASK))

// ---------- PIN3 ----------
#define GPIOA_CRL_MODE3_SHIFT      (12u)
#define GPIOA_CRL_MODE3_MASK       (0x3000u)
#define GPIOA_CRL_MODE3(x)         (((x)<<GPIOA_CRL_MODE3_SHIFT) & (GPIOA_CRL_MODE3_MASK))

#define GPIOA_CRL_CNF3_SHIFT       (14u)
#define GPIOA_CRL_CNF3_MASK        (0xC000u)
#define GPIOA_CRL_CNF3(x)          (((x)<<GPIOA_CRL_CNF3_SHIFT) & (GPIOA_CRL_CNF3_MASK))

#define GPIOA_BSRR_BS3_SHIFT       (3u)
#define GPIOA_BSRR_BS3_MASK        (0x8u)
#define GPIOA_BSRR_BS3(x)          (((x)<<GPIOA_BSRR_BS3_SHIFT) & (GPIOA_BSRR_BS3_MASK))

#define GPIOA_BSRR_BR3_SHIFT       (19u)
#define GPIOA_BSRR_BR3_MASK        (0x80000u)
#define GPIOA_BSRR_BR3(x)          (((x)<<GPIOA_BSRR_BR3_SHIFT) & (GPIOA_BSRR_BR3_MASK))

// ---------- PIN4 ----------
#define GPIOA_CRL_MODE4_SHIFT      (16u)
#define GPIOA_CRL_MODE4_MASK       (0x30000u)
#define GPIOA_CRL_MODE4(x)         (((x) << GPIOA_CRL_MODE4_SHIFT) & (GPIOA_CRL_MODE4_MASK))

#define GPIOA_CRL_CNF4_SHIFT       (18u)
#define GPIOA_CRL_CNF4_MASK        (0xC0000u)
#define GPIOA_CRL_CNF4(x)          (((x) << GPIOA_CRL_CNF4_SHIFT) & (GPIOA_CRL_CNF4_MASK))

#define GPIOA_BSRR_BS4_SHIFT       (4u)
#define GPIOA_BSRR_BS4_MASK        (0x10u)
#define GPIOA_BSRR_BS4(x)          (((x) << GPIOA_BSRR_BS4_SHIFT) & (GPIOA_BSRR_BS4_MASK))

#define GPIOA_BSRR_BR4_SHIFT       (20u)
#define GPIOA_BSRR_BR4_MASK        (0x100000u)
#define GPIOA_BSRR_BR4(x)          (((x) << GPIOA_BSRR_BR4_SHIFT) & (GPIOA_BSRR_BR4_MASK))

#define GPIOA_ODR4_SHIFT           (4u)
#define GPIOA_ODR4_MASK            (0x10u)
#define GPIOA_ODR4(x)              (((x) << GPIOA_ODR4_SHIFT) & GPIOA_ODR4_MASK)

#define GPIOA_IDR4_SHIFT           (4u)
#define GPIOA_IDR4_MASK            (0x10u)
#define GPIOA_IDR4(x)              (((x) << GPIOA_IDR4_SHIFT) & GPIOA_IDR4_MASK)

// ---------- PIN5 ----------
#define GPIOA_CRL_MODE5_SHIFT      (20u)
#define GPIOA_CRL_MODE5_MASK       (0x300000u)
#define GPIOA_CRL_MODE5(x)         (((x) << GPIOA_CRL_MODE5_SHIFT) & (GPIOA_CRL_MODE5_MASK))

#define GPIOA_CRL_CNF5_SHIFT       (22u)
#define GPIOA_CRL_CNF5_MASK        (0xC00000u)
#define GPIOA_CRL_CNF5(x)          (((x) << GPIOA_CRL_CNF5_SHIFT) & (GPIOA_CRL_CNF5_MASK))

#define GPIOA_BSRR_BS5_SHIFT       (5u)
#define GPIOA_BSRR_BS5_MASK        (0x20u)
#define GPIOA_BSRR_BS5(x)          (((x) << GPIOA_BSRR_BS5_SHIFT) & (GPIOA_BSRR_BS5_MASK))

#define GPIOA_BSRR_BR5_SHIFT       (21u)
#define GPIOA_BSRR_BR5_MASK        (0x200000u)
#define GPIOA_BSRR_BR5(x)          (((x) << GPIOA_BSRR_BR5_SHIFT) & (GPIOA_BSRR_BR5_MASK))

#define GPIOA_ODR5_SHIFT           (5u)
#define GPIOA_ODR5_MASK            (0x20)
#define GPIOA_ODR5(x)              (((x) << GPIOA_ODR5_SHIFT) & GPIOA_ODR5_MASK)

#define GPIOA_IDR5_SHIFT           (5u)
#define GPIOA_IDR5_MASK            (0x20u)
#define GPIOA_IDR5(x)              (((x) << GPIOA_IDR5_SHIFT) & GPIOA_IDR5_MASK)

// ---------- PIN6 ----------
#define GPIOA_CRL_MODE6_SHIFT      (24u)
#define GPIOA_CRL_MODE6_MASK       (0x3000000u)
#define GPIOA_CRL_MODE6(x)         (((x)<<GPIOA_CRL_MODE6_SHIFT) & (GPIOA_CRL_MODE6_MASK))

#define GPIOA_CRL_CNF6_SHIFT       (26u)
#define GPIOA_CRL_CNF6_MASK        (0xC000000u)
#define GPIOA_CRL_CNF6(x)          (((x)<<GPIOA_CRL_CNF6_SHIFT) & (GPIOA_CRL_CNF6_MASK))

#define GPIOA_BSRR_BS6_SHIFT       (6u)
#define GPIOA_BSRR_BS6_MASK        (0x40u)
#define GPIOA_BSRR_BS6(x)          (((x)<<GPIOA_BSRR_BS6_SHIFT) & (GPIOA_BSRR_BS6_MASK))

#define GPIOA_BSRR_BR6_SHIFT       (22u)
#define GPIOA_BSRR_BR6_MASK        (0x400000u)
#define GPIOA_BSRR_BR6(x)          (((x)<<GPIOA_BSRR_BR6_SHIFT) & (GPIOA_BSRR_BR6_MASK))

#define GPIOA_ODR6_SHIFT 		   (6u)
#define GPIOA_ODR6_MASK  		   (0x40u)
#define GPIOA_ODR6(x)    		   (((x) << GPIOA_ODR6_SHIFT) & GPIOA_ODR6_MASK)

#define GPIOA_IDR6_SHIFT 		   (6u)
#define GPIOA_IDR6_MASK  		   (0x40u)
#define GPIOA_IDR6(x)    		   (((x) << GPIOA_IDR6_SHIFT) & GPIOA_IDR6_MASK)


// ---------- PIN7 ----------
#define GPIOA_CRL_MODE7_SHIFT      (28u)
#define GPIOA_CRL_MODE7_MASK       (0x30000000u)
#define GPIOA_CRL_MODE7(x)         (((x)<<GPIOA_CRL_MODE7_SHIFT) & (GPIOA_CRL_MODE7_MASK))

#define GPIOA_CRL_CNF7_SHIFT       (30u)
#define GPIOA_CRL_CNF7_MASK        (0xC0000000u)
#define GPIOA_CRL_CNF7(x)          (((x)<<GPIOA_CRL_CNF7_SHIFT) & (GPIOA_CRL_CNF7_MASK))

#define GPIOA_BSRR_BS7_SHIFT       (7u)
#define GPIOA_BSRR_BS7_MASK        (0x80u)
#define GPIOA_BSRR_BS7(x)          (((x)<<GPIOA_BSRR_BS7_SHIFT) & (GPIOA_BSRR_BS7_MASK))

#define GPIOA_BSRR_BR7_SHIFT       (23u)
#define GPIOA_BSRR_BR7_MASK        (0x800000u)
#define GPIOA_BSRR_BR7(x)          (((x)<<GPIOA_BSRR_BR7_SHIFT) & (GPIOA_BSRR_BR7_MASK))

#define GPIOA_ODR7_SHIFT 		   (7u)
#define GPIOA_ODR7_MASK            (0x80u)
#define GPIOA_ODR7(x)    	   	   (((x) << GPIOA_ODR7_SHIFT) & GPIOA_ODR7_MASK)

#define GPIOA_IDR7_SHIFT 		   (7u)
#define GPIOA_IDR7_MASK        	   (0x80u)
#define GPIOA_IDR7(x)   		   (((x) << GPIOA_IDR7_SHIFT) & GPIOA_IDR7_MASK)

// ---------- PIN8 ----------
#define GPIOA_CRH_MODE8_SHIFT      (0u) // bit bat dau
#define GPIOA_CRH_MODE8_MASK       (0x3u) // Onl bit 0 1
#define GPIOA_CRH_MODE8(x)         (((x)<<GPIOA_CRH_MODE8_SHIFT) & (GPIOA_CRH_MODE8_MASK))

#define GPIOA_CRH_CNF8_SHIFT       (2u)
#define GPIOA_CRH_CNF8_MASK        (0xCu) // Onl bit 2 3
#define GPIOA_CRH_CNF8(x)          (((x)<<GPIOA_CRH_CNF8_SHIFT) & (GPIOA_CRH_CNF8_MASK))

#define GPIOA_BSRR_BS8_SHIFT       (8u)
#define GPIOA_BSRR_BS8_MASK        (0x100u) // Onl bit 8
#define GPIOA_BSRR_BS8(x)          (((x)<<GPIOA_BSRR_BS8_SHIFT) & (GPIOA_BSRR_BS8_MASK))

#define GPIOA_BSRR_BR8_SHIFT       (24u) // bit bat dau
#define GPIOA_BSRR_BR8_MASK        (0x1000000u) // Onl bit 24
#define GPIOA_BSRR_BR8(x)          (((x)<<GPIOA_BSRR_BR8_SHIFT) & (GPIOA_BSRR_BR8_MASK))

// ---------- PIN9 ----------
#define GPIOA_CRH_MODE9_SHIFT      (4u) // bit bat dau
#define GPIOA_CRH_MODE9_MASK       (0x30u) // Onl bit 4 5
#define GPIOA_CRH_MODE9(x)         (((x)<<GPIOA_CRH_MODE9_SHIFT) & (GPIOA_CRH_MODE9_MASK))

#define GPIOA_CRH_CNF9_SHIFT       (6u)
#define GPIOA_CRH_CNF9_MASK        (0xC0u) // Onl bit 6 7
#define GPIOA_CRH_CNF9(x)          (((x)<<GPIOA_CRH_CNF9_SHIFT) & (GPIOA_CRH_CNF9_MASK))

#define GPIOA_BSRR_BS9_SHIFT       (9u)
#define GPIOA_BSRR_BS9_MASK        (0x200u) // Onl bit 9
#define GPIOA_BSRR_BS9(x)          (((x)<<GPIOA_BSRR_BS9_SHIFT) & (GPIOA_BSRR_BS9_MASK))

#define GPIOA_BSRR_BR9_SHIFT       (25u) // bit bat dau
#define GPIOA_BSRR_BR9_MASK        (0x2000000u) // Onl bit 25
#define GPIOA_BSRR_BR9(x)          (((x)<<GPIOA_BSRR_BR9_SHIFT) & (GPIOA_BSRR_BR9_MASK))

// ---------- PIN10 ----------
#define GPIOA_CRH_MODE10_SHIFT     (8u) // bit bat dau
#define GPIOA_CRH_MODE10_MASK      (0x300u) // Onl bit 8 9
#define GPIOA_CRH_MODE10(x)        (((x)<<GPIOA_CRH_MODE10_SHIFT) & (GPIOA_CRH_MODE10_MASK))

#define GPIOA_CRH_CNF10_SHIFT      (10u)
#define GPIOA_CRH_CNF10_MASK       (0xC00u) // Onl bit 10 11
#define GPIOA_CRH_CNF10(x)         (((x)<<GPIOA_CRH_CNF10_SHIFT) & (GPIOA_CRH_CNF10_MASK))

#define GPIOA_BSRR_BS10_SHIFT      (10u)
#define GPIOA_BSRR_BS10_MASK       (0x400u) // onl bit 10
#define GPIOA_BSRR_BS10(x)         (((x)<<GPIOA_BSRR_BS10_SHIFT) & (GPIOA_BSRR_BS10_MASK))

#define GPIOA_BSRR_BR10_SHIFT      (26u) // bit bat dau
#define GPIOA_BSRR_BR10_MASK       (0x4000000u) // onl bit 26
#define GPIOA_BSRR_BR10(x)         (((x)<<GPIOA_BSRR_BR10_SHIFT) & (GPIOA_BSRR_BR10_MASK))

// ---------- PIN11 ----------
#define GPIOA_CRH_MODE11_SHIFT     (12u) // bit bat dau
#define GPIOA_CRH_MODE11_MASK      (0x3000u) // Onl bit 12 13
#define GPIOA_CRH_MODE11(x)        (((x)<<GPIOA_CRH_MODE11_SHIFT) & (GPIOA_CRH_MODE11_MASK))

#define GPIOA_CRH_CNF11_SHIFT      (14u)
#define GPIOA_CRH_CNF11_MASK       (0xC000u) // Onl bit 14 15
#define GPIOA_CRH_CNF11(x)         (((x)<<GPIOA_CRH_CNF11_SHIFT) & (GPIOA_CRH_CNF11_MASK))

#define GPIOA_BSRR_BS11_SHIFT      (11u)
#define GPIOA_BSRR_BS11_MASK       (0x800u) // onl bit 11
#define GPIOA_BSRR_BS11(x)         (((x)<<GPIOA_BSRR_BS11_SHIFT) & (GPIOA_BSRR_BS11_MASK))

#define GPIOA_BSRR_BR11_SHIFT      (27u) // bit bat dau
#define GPIOA_BSRR_BR11_MASK       (0x8000000u) // onl bit 27
#define GPIOA_BSRR_BR11(x)         (((x)<<GPIOA_BSRR_BR11_SHIFT) & (GPIOA_BSRR_BR11_MASK))
/* Define to access GPIOA peripheral registers */

/* Define to access GPIOB peripheral registers */
#define GPIOB_BASE        (0x40010C00u)
#define GPIOB             ((GPIO_Type *)GPIOB_BASE)

// ---------- PIN B0 ----------
#define GPIOB_CRL_MODE0_SHIFT      (0u)
#define GPIOB_CRL_MODE0_MASK       (0x3u)
#define GPIOB_CRL_MODE0(x)         (((x) << GPIOB_CRL_MODE0_SHIFT) & GPIOB_CRL_MODE0_MASK)

#define GPIOB_CRL_CNF0_SHIFT       (2u)
#define GPIOB_CRL_CNF0_MASK        (0xCu)
#define GPIOB_CRL_CNF0(x)          (((x) << GPIOB_CRL_CNF0_SHIFT) & GPIOB_CRL_CNF0_MASK)

#define GPIOB_BSRR_BS0_SHIFT       (0u)
#define GPIOB_BSRR_BS0_MASK        (0x1u)
#define GPIOB_BSRR_BS0(x)          (((x) << GPIOB_BSRR_BS0_SHIFT) & GPIOB_BSRR_BS0_MASK)

#define GPIOB_BSRR_BR0_SHIFT       (16u)
#define GPIOB_BSRR_BR0_MASK        (0x10000u)
#define GPIOB_BSRR_BR0(x)          (((x) << GPIOB_BSRR_BR0_SHIFT) & GPIOB_BSRR_BR0_MASK)

#define GPIOB_ODR0_SHIFT           (0u)
#define GPIOB_ODR0_MASK            (0x1u)
#define GPIOB_ODR0(x)              (((x) << GPIOB_ODR0_SHIFT) & GPIOB_ODR0_MASK)

#define GPIOB_IDR0_SHIFT           (0u)
#define GPIOB_IDR0_MASK            (0x1u)
#define GPIOB_IDR0(x)              (((x) << GPIOB_IDR0_SHIFT) & GPIOB_IDR0_MASK)

// ---------- PIN B1 ----------
#define GPIOB_CRL_MODE1_SHIFT      (4u)
#define GPIOB_CRL_MODE1_MASK       (0x30u)
#define GPIOB_CRL_MODE1(x)         (((x) << GPIOB_CRL_MODE1_SHIFT) & GPIOB_CRL_MODE1_MASK)

#define GPIOB_CRL_CNF1_SHIFT       (6u)
#define GPIOB_CRL_CNF1_MASK        (0xC0u)
#define GPIOB_CRL_CNF1(x)          (((x) << GPIOB_CRL_CNF1_SHIFT) & GPIOB_CRL_CNF1_MASK)

#define GPIOB_BSRR_BS1_SHIFT       (1u)
#define GPIOB_BSRR_BS1_MASK        (0x2u)
#define GPIOB_BSRR_BS1(x)          (((x) << GPIOB_BSRR_BS1_SHIFT) & GPIOB_BSRR_BS1_MASK)

#define GPIOB_BSRR_BR1_SHIFT       (17u)
#define GPIOB_BSRR_BR1_MASK        (0x20000u)
#define GPIOB_BSRR_BR1(x)          (((x) << GPIOB_BSRR_BR1_SHIFT) & GPIOB_BSRR_BR1_MASK)

#define GPIOB_ODR1_SHIFT           (1u)
#define GPIOB_ODR1_MASK            (0x2u)
#define GPIOB_ODR1(x)              (((x) << GPIOB_ODR1_SHIFT) & GPIOB_ODR1_MASK)

#define GPIOB_IDR1_SHIFT           (1u)
#define GPIOB_IDR1_MASK            (0x2u)
#define GPIOB_IDR1(x)              (((x) << GPIOB_IDR1_SHIFT) & GPIOB_IDR1_MASK)

// ---------- PIN3 ----------
#define GPIOB_CRL_MODE3_SHIFT      (12u)
#define GPIOB_CRL_MODE3_MASK       (0x3000u)
#define GPIOB_CRL_MODE3(x)         (((x)<<GPIOB_CRL_MODE3_SHIFT) & (GPIOB_CRL_MODE3_MASK))

#define GPIOB_CRL_CNF3_SHIFT       (14u)
#define GPIOB_CRL_CNF3_MASK        (0xC000u)
#define GPIOB_CRL_CNF3(x)          (((x)<<GPIOB_CRL_CNF3_SHIFT) & (GPIOB_CRL_CNF3_MASK))

#define GPIOB_BSRR_BS3_SHIFT       (3u)
#define GPIOB_BSRR_BS3_MASK        (0x8u)
#define GPIOB_BSRR_BS3(x)          (((x)<<GPIOB_BSRR_BS3_SHIFT) & (GPIOB_BSRR_BS3_MASK))

#define GPIOB_BSRR_BR3_SHIFT       (19u)
#define GPIOB_BSRR_BR3_MASK        (0x80000u)
#define GPIOB_BSRR_BR3(x)          (((x)<<GPIOB_BSRR_BR3_SHIFT) & (GPIOB_BSRR_BR3_MASK))

// ---------- PIN4 ----------
#define GPIOB_CRL_MODE4_SHIFT      (16u)
#define GPIOB_CRL_MODE4_MASK       (0x30000u)
#define GPIOB_CRL_MODE4(x)         (((x)<<GPIOB_CRL_MODE4_SHIFT) & (GPIOB_CRL_MODE4_MASK))

#define GPIOB_CRL_CNF4_SHIFT       (18u)
#define GPIOB_CRL_CNF4_MASK        (0xC0000u)
#define GPIOB_CRL_CNF4(x)          (((x)<<GPIOB_CRL_CNF4_SHIFT) & (GPIOB_CRL_CNF4_MASK))

#define GPIOB_BSRR_BS4_SHIFT       (4u)
#define GPIOB_BSRR_BS4_MASK        (0x10u)
#define GPIOB_BSRR_BS4(x)          (((x)<<GPIOB_BSRR_BS4_SHIFT) & (GPIOB_BSRR_BS4_MASK))

#define GPIOB_BSRR_BR4_SHIFT       (20u)
#define GPIOB_BSRR_BR4_MASK        (0x100000u)
#define GPIOB_BSRR_BR4(x)          (((x)<<GPIOB_BSRR_BR4_SHIFT) & (GPIOB_BSRR_BR4_MASK))

// ---------- PIN6 ----------
#define GPIOB_CRL_MODE6_SHIFT      (24u)
#define GPIOB_CRL_MODE6_MASK       (0x3000000u)
#define GPIOB_CRL_MODE6(x)         (((x)<<GPIOB_CRL_MODE6_SHIFT) & (GPIOB_CRL_MODE6_MASK))

#define GPIOB_CRL_CNF6_SHIFT       (26u)
#define GPIOB_CRL_CNF6_MASK        (0xC000000u)
#define GPIOB_CRL_CNF6(x)          (((x)<<GPIOB_CRL_CNF6_SHIFT) & (GPIOB_CRL_CNF6_MASK))

#define GPIOB_BSRR_BS6_SHIFT       (6u)
#define GPIOB_BSRR_BS6_MASK        (0x40u)
#define GPIOB_BSRR_BS6(x)          (((x)<<GPIOB_BSRR_BS6_SHIFT) & (GPIOB_BSRR_BS6_MASK))

#define GPIOB_BSRR_BR6_SHIFT       (22u)
#define GPIOB_BSRR_BR6_MASK        (0x400000u)
#define GPIOB_BSRR_BR6(x)          (((x)<<GPIOB_BSRR_BR6_SHIFT) & (GPIOB_BSRR_BR6_MASK))

// ---------- PIN7 ----------
#define GPIOB_CRL_MODE7_SHIFT      (28u)
#define GPIOB_CRL_MODE7_MASK       (0x30000000u)
#define GPIOB_CRL_MODE7(x)         (((x)<<GPIOB_CRL_MODE7_SHIFT) & (GPIOB_CRL_MODE7_MASK))

#define GPIOB_CRL_CNF7_SHIFT       (30u)
#define GPIOB_CRL_CNF7_MASK        (0xC0000000u)
#define GPIOB_CRL_CNF7(x)          (((x)<<GPIOB_CRL_CNF7_SHIFT) & (GPIOB_CRL_CNF7_MASK))

#define GPIOB_BSRR_BS7_SHIFT       (7u)
#define GPIOB_BSRR_BS7_MASK        (0x80u)
#define GPIOB_BSRR_BS7(x)          (((x)<<GPIOB_BSRR_BS7_SHIFT) & (GPIOB_BSRR_BS7_MASK))

#define GPIOB_BSRR_BR7_SHIFT       (23u)
#define GPIOB_BSRR_BR7_MASK        (0x800000u)
#define GPIOB_BSRR_BR7(x)          (((x)<<GPIOB_BSRR_BR7_SHIFT) & (GPIOB_BSRR_BR7_MASK))

// ---------- PIN8 ----------
#define GPIOB_CRH_MODE8_SHIFT      (0u) // bit bat dau
#define GPIOB_CRH_MODE8_MASK       (0x3u) // Onl bit 0 1
#define GPIOB_CRH_MODE8(x)         (((x)<<GPIOB_CRH_MODE8_SHIFT) & (GPIOB_CRH_MODE8_MASK))

#define GPIOB_CRH_CNF8_SHIFT       (2u)
#define GPIOB_CRH_CNF8_MASK        (0xCu) // Onl bit 2 3
#define GPIOB_CRH_CNF8(x)          (((x)<<GPIOB_CRH_CNF8_SHIFT) & (GPIOB_CRH_CNF8_MASK))

#define GPIOB_BSRR_BS8_SHIFT       (8u)
#define GPIOB_BSRR_BS8_MASK        (0x100u) // Onl bit 8
#define GPIOB_BSRR_BS8(x)          (((x)<<GPIOB_BSRR_BS8_SHIFT) & (GPIOB_BSRR_BS8_MASK))

#define GPIOB_BSRR_BR8_SHIFT       (24u) // bit bat dau
#define GPIOB_BSRR_BR8_MASK        (0x1000000u) // Onl bit 24
#define GPIOB_BSRR_BR8(x)          (((x)<<GPIOB_BSRR_BR8_SHIFT) & (GPIOB_BSRR_BR8_MASK))

// ---------- PIN9 ----------
#define GPIOB_CRH_MODE9_SHIFT      (4u) // bit bat dau
#define GPIOB_CRH_MODE9_MASK       (0x30u) // Onl bit 4 5
#define GPIOB_CRH_MODE9(x)         (((x)<<GPIOB_CRH_MODE9_SHIFT) & (GPIOB_CRH_MODE9_MASK))

#define GPIOB_CRH_CNF9_SHIFT       (6u)
#define GPIOB_CRH_CNF9_MASK        (0xC0u) // Onl bit 6 7
#define GPIOB_CRH_CNF9(x)          (((x)<<GPIOB_CRH_CNF9_SHIFT) & (GPIOB_CRH_CNF9_MASK))

#define GPIOB_BSRR_BS9_SHIFT       (9u)
#define GPIOB_BSRR_BS9_MASK        (0x200u) // Onl bit 9
#define GPIOB_BSRR_BS9(x)          (((x)<<GPIOB_BSRR_BS9_SHIFT) & (GPIOB_BSRR_BS9_MASK))

#define GPIOB_BSRR_BR9_SHIFT       (25u) // bit bat dau
#define GPIOB_BSRR_BR9_MASK        (0x2000000u) // Onl bit 25
#define GPIOB_BSRR_BR9(x)          (((x)<<GPIOB_BSRR_BR9_SHIFT) & (GPIOB_BSRR_BR9_MASK))

// ---------- PIN12 ----------
#define GPIOB_CRH_MODE12_SHIFT      (16u)
#define GPIOB_CRH_MODE12_MASK       (0x30000u)
#define GPIOB_CRH_MODE12(x)         (((x) << GPIOB_CRH_MODE12_SHIFT) & GPIOB_CRH_MODE12_MASK)

#define GPIOB_CRH_CNF12_SHIFT       (18u)
#define GPIOB_CRH_CNF12_MASK        (0xC0000u)
#define GPIOB_CRH_CNF12(x)          (((x) << GPIOB_CRH_CNF12_SHIFT) & GPIOB_CRH_CNF12_MASK)

#define GPIOB_BSRR_BS12_SHIFT       (12u)
#define GPIOB_BSRR_BS12_MASK        (0x1000u)
#define GPIOB_BSRR_BS12(x)          (((x) << GPIOB_BSRR_BS12_SHIFT) & GPIOB_BSRR_BS12_MASK)

#define GPIOB_BSRR_BR12_SHIFT       (28u)
#define GPIOB_BSRR_BR12_MASK        (0x10000000u)
#define GPIOB_BSRR_BR12(x)          (((x) << GPIOB_BSRR_BR12_SHIFT) & GPIOB_BSRR_BR12_MASK)

// ---------- PIN13 ----------
#define GPIOB_CRH_MODE13_SHIFT      (20u)
#define GPIOB_CRH_MODE13_MASK       (0x300000u)
#define GPIOB_CRH_MODE13(x)         (((x) << GPIOB_CRH_MODE13_SHIFT) & GPIOB_CRH_MODE13_MASK)

#define GPIOB_CRH_CNF13_SHIFT       (22u)
#define GPIOB_CRH_CNF13_MASK        (0xC00000u)
#define GPIOB_CRH_CNF13(x)          (((x) << GPIOB_CRH_CNF13_SHIFT) & GPIOB_CRH_CNF13_MASK)

#define GPIOB_BSRR_BS13_SHIFT       (13u)
#define GPIOB_BSRR_BS13_MASK        (0x2000u)
#define GPIOB_BSRR_BS13(x)          (((x) << GPIOB_BSRR_BS13_SHIFT) & GPIOB_BSRR_BS13_MASK)

#define GPIOB_BSRR_BR13_SHIFT       (29u)
#define GPIOB_BSRR_BR13_MASK        (0x20000000u)
#define GPIOB_BSRR_BR13(x)          (((x) << GPIOB_BSRR_BR13_SHIFT) & GPIOB_BSRR_BR13_MASK)

// ---------- PIN14 ----------
#define GPIOB_CRH_MODE14_SHIFT      (24u)
#define GPIOB_CRH_MODE14_MASK       (0x3000000u)
#define GPIOB_CRH_MODE14(x)         (((x) << GPIOB_CRH_MODE14_SHIFT) & GPIOB_CRH_MODE14_MASK)

#define GPIOB_CRH_CNF14_SHIFT       (26u)
#define GPIOB_CRH_CNF14_MASK        (0xC000000u)
#define GPIOB_CRH_CNF14(x)          (((x) << GPIOB_CRH_CNF14_SHIFT) & GPIOB_CRH_CNF14_MASK)

#define GPIOB_BSRR_BS14_SHIFT       (14u)
#define GPIOB_BSRR_BS14_MASK        (0x4000u)
#define GPIOB_BSRR_BS14(x)          (((x) << GPIOB_BSRR_BS14_SHIFT) & GPIOB_BSRR_BS14_MASK)

#define GPIOB_BSRR_BR14_SHIFT       (30u)
#define GPIOB_BSRR_BR14_MASK        (0x40000000u)
#define GPIOB_BSRR_BR14(x)          (((x) << GPIOB_BSRR_BR14_SHIFT) & GPIOB_BSRR_BR14_MASK)

// ---------- PIN15 ----------
#define GPIOB_CRH_MODE15_SHIFT      (28u)
#define GPIOB_CRH_MODE15_MASK       (0x30000000u)
#define GPIOB_CRH_MODE15(x)         (((x) << GPIOB_CRH_MODE15_SHIFT) & GPIOB_CRH_MODE15_MASK)

#define GPIOB_CRH_CNF15_SHIFT       (30u)
#define GPIOB_CRH_CNF15_MASK        (0xC0000000u)
#define GPIOB_CRH_CNF15(x)          (((x) << GPIOB_CRH_CNF15_SHIFT) & GPIOB_CRH_CNF15_MASK)

#define GPIOB_BSRR_BS15_SHIFT       (15u)
#define GPIOB_BSRR_BS15_MASK        (0x8000u)
#define GPIOB_BSRR_BS15(x)          (((x) << GPIOB_BSRR_BS15_SHIFT) & GPIOB_BSRR_BS15_MASK)

#define GPIOB_BSRR_BR15_SHIFT       (31u)
#define GPIOB_BSRR_BR15_MASK        (0x80000000u)
#define GPIOB_BSRR_BR15(x)          (((x) << GPIOB_BSRR_BR15_SHIFT) & GPIOB_BSRR_BR15_MASK)
/* Define to access GPIOB peripheral registers */

typedef struct
{
    uint32_t CR1;
    uint32_t CR2;
    uint32_t SMCR;
    uint32_t DIER;
    uint32_t SR;
    uint32_t EGR;
    uint32_t CCMR1;
    uint32_t CCMR2;
    uint32_t CCER;
    uint32_t CNT;
    uint32_t PSC;
    uint32_t ARR;
    uint32_t RESERVED_1;
    uint32_t CCR1;
    uint32_t CCR2;
    uint32_t CCR3;
    uint32_t CCR4;
    uint32_t RESERVED_2;
    uint32_t DCR;
    uint32_t DMAR;
} TIM_Type;
/* TIMER2 */
#define TIM2_BASE                   (0x40000000u)
#define TIM2                        ((TIM_Type *)TIM2_BASE)

#define TIM_CR1_CEN_SHIFT           (0u)
#define TIM_CR1_CEN_MASK            (0x1u)
#define TIM_CR1_CEN(x)              (((x) << TIM_CR1_CEN_SHIFT) & (TIM_CR1_CEN_MASK))

#define TIM_PSC_PSC_SHIFT           (0u)
#define TIM_PSC_PSC_MASK            (0xFFFFu)
#define TIM_PSC_PSC(x)               (((x) << TIM_PSC_PSC_SHIFT) & (TIM_PSC_PSC_MASK))

#define TIM_ARR_ARR_SHIFT           (0u)
#define TIM_ARR_ARR_MASK            (0xFFFFu)
#define TIM_ARR_ARR(x)              (((x) << TIM_ARR_ARR_SHIFT) & (TIM_ARR_ARR_MASK))
/* TIMER2 */

/* TIMER3 */
#define TIM3_BASE                   (0x40000400u)
#define TIM3                        ((TIM_Type *)TIM3_BASE)

#define TIM3_CR1_CEN_SHIFT          (0u)
#define TIM3_CR1_CEN_MASK           (0x1u)
#define TIM3_CR1_CEN(x)             (((x) << TIM3_CR1_CEN_SHIFT) & (TIM3_CR1_CEN_MASK))

#define TIM3_PSC_PSC_SHIFT          (0u)
#define TIM3_PSC_PSC_MASK           (0xFFFFu)
#define TIM3_PSC_PSC(x)             (((x) << TIM3_PSC_PSC_SHIFT) & (TIM3_PSC_PSC_MASK))

#define TIM3_ARR_ARR_SHIFT          (0u)
#define TIM3_ARR_ARR_MASK           (0xFFFFu)
#define TIM3_ARR_ARR(x)             (((x) << TIM3_ARR_ARR_SHIFT) & (TIM3_ARR_ARR_MASK))
/* TIMER3 */

typedef struct
{
    uint32_t CR1;
    uint32_t CR2;
    uint32_t OAR1;
    uint32_t OAR2;
    uint32_t DR;
    uint32_t SR1;
    uint32_t SR2;
    uint32_t CCR;
    uint32_t TRISE;
} I2C_TYPE;

#define I2C1 ((I2C_TYPE *) (0x40005400u))

/* để FREQ bằng với APB clock frequency */
#define I2C1_CR2_FREQ_SHIFT (0u)
#define I2C1_CR2_FREQ_MASK (0x3Fu)
#define I2C1_CR2_FREQ(x) (((x)<<I2C1_CR2_FREQ_SHIFT) &  I2C1_CR2_FREQ_MASK)

/* configured CCR 100kHz*/
// tốc độ là sm
#define I2C1_CRR_FS_SHIFT (15u)
#define I2C1_CRR_FS_MASK (0x8000u)
#define I2C1_CRR_FS(x) (((x)<<I2C1_CRR_FS_SHIFT) &  I2C1_CRR_FS_MASK)

// CCR la 100kHz cho SCL
/*
    FREQ = 8 -> T(PCLK1) = 1/FREQ = 0,125us = 125ns
    T(high) = CRR*T(PCLK1); T(low) = CRR*T(PCLK1)
    f(SCL) = 1/(high+low) -> t(scl) = high + low = 2CRR*T(PClK1) -> CRR = t(scl)/2T hay CRR = f(PCLK1)/2F(scl)
    => CRR = 8000000/2*100000 = 40 = 0x28
*/
#define I2C1_CRR_CRR_SHIFT (0u)
#define I2C1_CRR_CRR_MASK (0x28u)
#define I2C1_CRR_CRR(x) (((x)<<I2C1_CRR_CRR_SHIFT) & I2C1_CRR_CRR_MASK)


/* config TRISE
 T(PCLK1) = 125ns;
 Sm có rise time = 1000ns
TRISE = (1000/125) + 1 = 9
 */
#define I2C1_TRISE_SHIFT (0u)
#define I2C1_TRISE_MASK (0x3Fu)
#define I2C1_TRISE(x) (((x)<<I2C1_TRISE_SHIFT) & I2C1_TRISE_MASK)


/*peripheral enable*/
#define I2C1_CR1_PE_SHIFT (0u)
#define I2C1_CR1_PE_MASK (0x1u)
#define I2C1_CR1_PE(x) (((x)<<I2C1_CR1_PE_SHIFT)&I2C1_CR1_PE_MASK)

/* START */
#define I2C1_CR1_START_SHIFT (8u)
#define I2C1_CR1_START_MASK (0x100u)
#define I2C1_CR1_START(x) (((x)<<I2C1_CR1_START_SHIFT)&I2C1_CR1_START_MASK)

/* STOP */
#define I2C1_CR1_STOP_SHIFT (9u)
#define I2C1_CR1_STOP_MASK (0x200u)
#define I2C1_CR1_STOP(x) (((x)<<I2C1_CR1_STOP_SHIFT)&I2C1_CR1_STOP_MASK)

/* Address */
#define I2C1_OAR1_ADDMODE_SHIFT (15u)
#define I2C1_OAR1_ADDMODE_MASK (0x8000u)
#define I2C1_OAR1_ADDMODE(x) (((x)<<I2C1_OAR1_ADDMODE_SHIFT) & I2C1_OAR1_ADDMODE_MASK)

/*NOSTRETCH*/
#define I2C1_CR1_NOSTRETCH_SHIFT (7u)
#define I2C1_CR1_NOSTRETCH_MASK (0x80u)
#define I2C1_CR1_NOSTRETCH(x) (((x) << I2C1_CR1_NOSTRETCH_SHIFT) & (I2C1_CR1_NOSTRETCH_MASK))

/*ACK*/
#define I2C1_CR1_ACK_SHIFT (10u)
#define I2C1_CR1_ACK_MASK (0x400u)
#define I2C1_CR1_ACK(x) (((x) << I2C1_CR1_ACK_SHIFT) & (I2C1_CR1_ACK_MASK))

/*SWRST*/
#define I2C1_CR1_SWRST_SHIFT (15u)
#define I2C1_CR1_SWRST_MASK (0x8000)
#define I2C1_CR1_SWRST(x) (((x) << I2C1_CR1_SWRST_SHIFT) & (I2C1_CR1_SWRST_MASK))



/*SR1*/
//AF
#define I2C1_SR1_AF_SHIFT (10u)
#define I2C1_SR1_AF_MASK (0x400u)
#define I2C1_SR1_AF(x) (((x)<<I2C1_SR1_AF_SHIFT)&I2C1_SR1_AF_MASK)

/* check SB */
#define I2C1_SR1_SB_SHIFT (0u)
#define I2C1_SR1_SB_MASK (0x1u)
#define I2C1_SR1_SB(x) (((x)<<I2C1_SR1_SB_SHIFT)&I2C1_SR1_SB_MASK)

//ADDR
#define I2C1_SR1_ADDR_SHIFT (1u)
#define I2C1_SR1_ADDR_MASK (0x2u)
#define I2C1_SR1_ADDR(x) (((x)<<I2C1_SR1_ADDR_SHIFT)&I2C1_SR1_ADDR_MASK)

//BTF
#define I2C1_SR1_BTF_SHIFT (2u)
#define I2C1_SR1_BTF_MASK (0x4u)
#define I2C1_SR1_BTF(x) (((x)<<I2C1_SR1_BTF_SHIFT)&I2C1_SR1_BTF_MASK)

//TxE
#define I2C1_SR1_TxE_SHIFT (7u)
#define I2C1_SR1_TxE_MASK (0x80u)
#define I2C1_SR1_TxE(x) (((x)<<I2C1_SR1_TxE_SHIFT)&I2C1_SR1_TxE_MASK)



/*DR*/
#define I2C1_DR_SHIFT (0u)
#define I2C1_DR_MASK (0xFFu)
#define I2C1_DR(x) (((x)<<I2C1_DR_SHIFT)&I2C1_DR_MASK)


typedef struct
{
    uint32_t SR;
    uint32_t CR1;
    uint32_t CR2;
    uint32_t SMPR1;
    uint32_t SMPR2;
    uint32_t JOFR1;
    uint32_t JOFR2;
    uint32_t JOFR3;
    uint32_t JOFR4;
    uint32_t HTR;
    uint32_t LTR;
    uint32_t SQR1;
    uint32_t SQR2;
    uint32_t SQR3;
    uint32_t JSQR;
    uint32_t JDR1;
    uint32_t JDR2;
    uint32_t JDR3;
    uint32_t JDR4;
    uint32_t DR;
} ADC_Type;

#define ADC1_BASE                   (0x40012400u)
#define ADC1                        ((ADC_Type *)ADC1_BASE)

#define ADC_SR_EOC_SHIFT            (1u)
#define ADC_SR_EOC_MASK             (0x2u)
#define ADC_SR_EOC(x)               (((x) << ADC_SR_EOC_SHIFT) & (ADC_SR_EOC_MASK))

#define ADC_CR1_SCAN_SHIFT          (8u)
#define ADC_CR1_SCAN_MASK           (0x100u)
#define ADC_CR1_SCAN(x)             (((x) << ADC_CR1_SCAN_SHIFT) & (ADC_CR1_SCAN_MASK))

#define ADC_CR2_ADON_SHIFT          (0u)
#define ADC_CR2_ADON_MASK           (0x1u)
#define ADC_CR2_ADON(x)             (((x) << ADC_CR2_ADON_SHIFT) & (ADC_CR2_ADON_MASK))

#define ADC_CR2_CONT_SHIFT          (1u)
#define ADC_CR2_CONT_MASK           (0x2u)
#define ADC_CR2_CONT(x)             (((x) << ADC_CR2_CONT_SHIFT) & (ADC_CR2_CONT_MASK))

#define ADC_CR2_ALIGN_SHIFT         (11u)
#define ADC_CR2_ALIGN_MASK          (0x800u)
#define ADC_CR2_ALIGN(x)            (((x) << ADC_CR2_ALIGN_SHIFT) & (ADC_CR2_ALIGN_MASK))

#define ADC_CR2_SWSTART_SHIFT       (22u)
#define ADC_CR2_SWSTART_MASK        (0x400000u)
#define ADC_CR2_SWSTART(x)          (((x) << ADC_CR2_SWSTART_SHIFT) & (ADC_CR2_SWSTART_MASK))

#define ADC_SMPR2_SMP0_SHIFT        (0u)
#define ADC_SMPR2_SMP0_MASK         (0x7u)
#define ADC_SMPR2_SMP0(x)           (((x) << ADC_SMPR2_SMP0_SHIFT) & (ADC_SMPR2_SMP0_MASK))

#define ADC_SQR1_L_SHIFT            (20u)
#define ADC_SQR1_L_MASK             (0xF00000u)
#define ADC_SQR1_L(x)               (((x) << ADC_SQR1_L_SHIFT) & (ADC_SQR1_L_MASK))

#define ADC_SQR3_SQ1_SHIFT          (0u)
#define ADC_SQR3_SQ1_MASK           (0x1Fu)
#define ADC_SQR3_SQ1(x)             (((x) << ADC_SQR3_SQ1_SHIFT) & (ADC_SQR3_SQ1_MASK))

#define ADC_DR_DATA_SHIFT           (0u)
#define ADC_DR_DATA_MASK            (0xFFFFu)
#define ADC_DR_DATA(x)              (((x) << ADC_DR_DATA_SHIFT) & (ADC_DR_DATA_MASK))


#endif /* STM32REGISTER_H_ */
