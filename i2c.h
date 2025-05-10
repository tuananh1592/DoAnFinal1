#ifndef I2C_H
#define I2C_H
#include <stdbool.h>

void I2C_init(void);

uint8_t I2C_MasterScanBus(void);

bool scan_add(I2C_TYPE *base, uint8_t add);

void I2C_MasterTransmit(I2C_TYPE* I2C_base, uint8_t* buf, uint32_t len, uint8_t add);

void I2C_InPut_Init();

#endif

