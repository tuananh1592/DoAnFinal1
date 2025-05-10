#include"stdint.h"
#include "Stm32Register.h"
#include"math.h"

void ADC_InPut_Init(){
	/* Configure PTA0 as input pin, analog mode */
	    GPIOA->CRL &= ~GPIOA_CRL_MODE0_MASK; /* 00: Input mode */
	    GPIOA->CRL &= ~GPIOA_CRL_CNF0_MASK;  /* 00: Analog mode */
	/* Configure PTA3 as input pin, analog mode */
	    GPIOA->CRL &= ~GPIOA_CRL_MODE3_MASK; /* 00: Input mode */
	    GPIOA->CRL &= ~GPIOA_CRL_CNF3_MASK;  /* 00: Analog mode */
}

void ADC_Init(){
	RCC->APB2ENR |= RCC_APB2ENR_ADC1EN_MASK;
	/* Disable ADC1 to start ADC configuration */
	    ADC1->CR2 &= ~ADC_CR2_ADON_MASK;
	/**
	* ADC configuration for ADC1, IN0, only 1 conversion
	* SCANMODE = OFF, continuous conversion
	* Right alignment data
	* Sample time: 1.5 cycles
	*/
	 ADC1->CR1   &= ~ADC_CR1_SCAN_MASK;      /* Disable SCAN mode */
	 ADC1->CR2   |= ADC_CR2_CONT_MASK;       /* Continuous conversion mode */
	 ADC1->CR2   &= ~ADC_CR2_ALIGN_MASK;     /* Right alignment */
	 ADC1->SMPR2 &= ~ADC_SMPR2_SMP0_MASK;    /* Sample time = 1.5 cycles */
	 ADC1->SQR1  &= ~ADC_SQR1_L_MASK;        /* 1 conversion */
	 ADC1->SQR3  &= ~ADC_SQR3_SQ1_MASK;      /* First conversion is channel 0 */
}

void ADC_Start(){
	 /* When the ADON bit is set for the first time, it wakes up the ADC from Power Down mode. */
	 ADC1->CR2 |= ADC_CR2_ADON_MASK;
	 /* Wait for ADC stable (1us) */
	 delay2_ms(1);
	 /* Conversion starts when ADON bit is set for a second time by software after ADC power-up time (tSTAB). */
	 ADC1->CR2 |= ADC_CR2_ADON_MASK;
	 ADC1->CR2 |= ADC_CR2_SWSTART_MASK;/* Start ADC conversion */
}

float ADC_Read(){
	float adc_data = 0.0;
	float real_adc_data = 0.0;
	/* Clear EOC flag */
	ADC1->SR &= ~ADC_SR_EOC_MASK;           /* Write 0 to clear */
	/* Wait until conversion finish */
	while ((ADC1->SR & ADC_SR_EOC(1u)) == 0);
	/* Read ADC data */
	adc_data = (ADC1->DR) & ADC_DR_DATA_MASK;
	real_adc_data = sqrt((561.0f - adc_data)/(561.0f - 200.0f)) * 100.0f;
	return real_adc_data;
}

