#include "STD_TYPES.h"
#include "DC_interface.h"
#include "ErrType.h"

#include "DIO_interface.h"

uint8 DC_voidMotor_Rotate_CW(const DC_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN1, DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN2, DIO_u8PIN_HIGH);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}
/********************************************************************************************/
/********************************************************************************************/
uint8 DC_voidMotor_Rotate_CCW(const DC_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN2, DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN1, DIO_u8PIN_HIGH);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}
/********************************************************************************************/
/********************************************************************************************/
uint8 DC_voidMotor_Stop(const DC_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN1, DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_pConfiguration -> DC_u8PORT, Copy_pConfiguration -> DC_u8PIN2, DIO_u8PIN_LOW);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}


