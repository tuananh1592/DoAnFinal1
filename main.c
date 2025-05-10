#include<stdint.h>
#include<stdio.h>
#include"EnRCC.h"
#include"Timer.h"
#include"Button.h"
#include"MotorVsValue.h"
#include"i2c.h"
#include"i2c.h"
#include"Stm32Register.h"
#include"ADC.h"
int main(void)
{
	EnGPIO();

	EnTimer();
	InitTimer2();
	InitTimer3();

	GPIOB_Input_Init();
	GPIOA_Input_Init();
	GPIOA_OutPut_Init();
	GPIOB_OutPut_Init();

	ADC_InPut_Init();
	ADC_Init();
	ADC_Start();
	ADC_Read();

	I2C_InPut_Init();
	I2C_init();
	uint8_t slave_address = 0;
	slave_address = I2C_MasterScanBus();
	lcd_update_address(slave_address);
	lcd_init();
	delay2_ms(50);
	uint8_t string1[16];
	uint8_t string2[16];

	float humidity_setting = 30.0f;
	//if{
	while(1){
		sprintf(string1, "DoAm : %2.f %%",ADC_Read());
		sprintf(string2, "HeThongTuoiCay");
		lcd_put_cur(0, 0);
		lcd_send_string(string1);
		lcd_put_cur(1, 0);
		lcd_send_string(string2);

		if(ADC_Read()<=humidity_setting){	//Compare humidity
		while(ADC_Read()<=humidity_setting){
		sprintf(string1, "DoAm : %2.f %%",ADC_Read());
		sprintf(string2, "HeThongTuoiCay");
		lcd_put_cur(0, 0);
		lcd_send_string(string1);
		lcd_put_cur(1, 0);
		lcd_send_string(string2);

		OnOff_OutPut(OPB8_Value,On);
		OnOff_OutPut(OPB9_Value,On);
		Auto_Motor();
		}
	}
		else {
		OnOff_OutPut(OPB8_Value, Off);
		OnOff_OutPut(OPB9_Value, Off);
			}
	}
	    return 0;
}


