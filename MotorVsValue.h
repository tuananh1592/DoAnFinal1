#ifndef MOTORVSVALUE_H_
#define MOTORVSVALUE_H_
#include <stdint.h>
#include "Stm32Register.h"

/**
 * @brief  Initialize PA8, PA9, PA10, PA11 as output push-pull @ 2 MHz
 */
void GPIOA_OutPut_Init(void);

/**
 * @brief  Initialize PB3, PB4, PB12, PB13, PB14, PB15 as output push-pull @ 2 MHz
 */
void GPIOB_OutPut_Init(void);


/* Pin definitions for motors */
#define OPA8_Mortor   8
#define OPA9_Mortor   9
#define OPA10_Mortor 10
#define OPA11_Mortor 11

#define OPB12_Mortor 12
#define OPB13_Mortor 13
#define OPB14_Mortor 14
#define OPB15_Mortor 15
/* Pin definitions for Value */
#define OPB8_Value 108
#define OPB9_Value 109
/*Status OutPut*/
#define On 1
#define Off 0


/**
 * @brief  Set or reset a configured output pin
 * @param  OutPut_Number: pin identifier (e.g., 8 for PA8, 3 for PB3, etc.)
 * @param  Status: 1 = set (BSRR), 0 = reset (BRR)
 */
void OnOff_OutPut(char OutPut_Number, char Status);
void Auto_Motor();
#endif /* MOTORVSVALUE_H_ */
