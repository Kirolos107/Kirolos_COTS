#ifndef DC_INTERFACE_H
#define DC_INTERFACE_H

typedef struct
{
	uint8 DC_u8PORT;
	uint8 DC_u8PIN1;
	uint8 DC_u8PIN2;

}DC_Config_t;

uint8 DC_voidMotor_Rotate_CW(const DC_Config_t* Copy_pConfiguration);

uint8 DC_voidMotor_Rotate_CCW(const DC_Config_t* Copy_pConfiguration);

uint8 DC_voidMotor_Stop(const DC_Config_t* Copy_pConfiguration);

#endif
