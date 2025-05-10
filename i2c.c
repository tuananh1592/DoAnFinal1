#include <stdint.h>
#include"Stm32Register.h"
#include <stdbool.h>

bool scan_add(I2C_TYPE *base, uint8_t add)
{
    bool check = false;
    uint8_t temp;

    base->CR1 |= I2C1_CR1_START_MASK;
    while (!(base->SR1 & I2C1_SR1_SB_MASK)); // Đợi cho SB set

    temp = add << 1; // 7bit address
    temp &= ~(1 << 0); // + 1 bit write

    base->DR = temp & I2C1_DR_MASK;

    while (!(base->SR1 & (I2C1_SR1_AF_MASK | I2C1_SR1_ADDR_MASK)));// đợi phản hồi khi có ACK/NACK

    if(base->SR1&I2C1_SR1_ADDR_MASK) // check ACK
    {
        check = true;
    }
    else
    {
        base->SR1 &= ~I2C1_SR1_AF_MASK; // clear bit AF
    }

    base->CR1 |= I2C1_CR1_STOP_MASK;

    return check;
}

uint8_t I2C_MasterScanBus(void)
{
    uint8_t i=0;
    uint8_t address=0;

    for(i=0x08; i<=0x77;i++)
    {
        if(scan_add(I2C1,i))
        {
            address = i;
            break;
        }
    }
    return address;

}

void I2C_MasterTransmit(I2C_TYPE* base, uint8_t* buf, uint32_t len, uint8_t add)
{
    uint8_t temp=0;
    uint8_t i=0;

    base->CR1 |= I2C1_CR1_START_MASK;
    while (!(base->SR1 & I2C1_SR1_SB_MASK)); // Đợi cho SB set

    temp = add<<1;
    temp &= ~(1<<0); // chế độ transmitter

    I2C1->DR = temp&I2C1_DR_MASK;

    while(!(I2C1->SR1&I2C1_SR1_ADDR_MASK)); //Đợi ADDR set
    for(i=0; i<len;i++)
    {
        while (!(I2C1->SR1 & I2C1_SR1_TxE_MASK)); // kiểm tra xem data register trống ko, có thì mới gửi đc
        I2C1->DR = buf[i]&I2C1_DR_MASK;
    }
    while (!(I2C1->SR1 & I2C1_SR1_TxE_MASK));
    while (!(I2C1->SR1 & I2C1_SR1_BTF_MASK));

    I2C1->CR1 |= I2C1_CR1_STOP_MASK;


}

void I2C_init()
{
    /*Cấp clock cho I2C1*/
    RCC->APB1ENR |= RCC_APB1ENR_I2C1(1);

    I2C1->CR1 |= I2C1_CR1_SWRST_MASK; //Software reset cho I2C
    I2C1->CR1 &= ~I2C1_CR1_SWRST_MASK;

    I2C1->CR1 &= ~I2C1_CR1_NOSTRETCH_MASK; // Clock stretching enabled

    I2C1->CR2 &= ~I2C1_CR2_FREQ_MASK; // clear FREQ
    I2C1->CR2 |= I2C1_CR2_FREQ(8); // tần số cho ngoại vi = tần số chung

    I2C1->CCR &= ~0xFFFF; //clear cả thanh ghi CCR
    I2C1->CCR &= ~I2C1_CRR_FS(1); // Sm mode
    I2C1->CCR |= I2C1_CRR_CRR(0x28u); // clock SCL

    I2C1->TRISE &= ~I2C1_TRISE_MASK;// Clear
    I2C1->TRISE |= I2C1_TRISE(9); // time rise

    I2C1->CR1 |= I2C1_CR1_PE_MASK; // peripheral enable
    I2C1->CR1 |= I2C1_CR1_ACK_MASK; // enable cho ACK
}

void I2C_InPut_Init(){
	/* Clear bit */
	    GPIOB->CRL &= ~(GPIOB_CRL_MODE6_MASK | GPIOB_CRL_CNF6_MASK);
	    GPIOB->CRL &= ~(GPIOB_CRL_MODE7_MASK | GPIOB_CRL_CNF7_MASK);
	    /* Set bit cho chân PB6(SCL) và PB7(SDA)*/
	    GPIOB->CRL |= GPIOB_CRL_MODE6(2u);
	    GPIOB->CRL |= GPIOB_CRL_CNF6(3u);
	    GPIOB->CRL |= GPIOB_CRL_CNF7(2u);
	    GPIOB->CRL |= GPIOB_CRL_MODE7(3u);
}


