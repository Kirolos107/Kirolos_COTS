#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ErrType.h"

#include "DIO_interface.h"
#include "LED_interface.h"


uint8 LED_u8SetON(const LED_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		if(Copy_pConfiguration -> LED_u8ACT_TYPE == ACTIVE_LOW)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> LED_u8PORT, Copy_pConfiguration -> LED_u8PIN, DIO_u8PIN_LOW);
		}
		else if(Copy_pConfiguration -> LED_u8ACT_TYPE == ACTIVE_HIGH)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> LED_u8PORT, Copy_pConfiguration -> LED_u8PIN, DIO_u8PIN_HIGH);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}
/********************************************************************************************************************************************/
/********************************************************************************************************************************************/
uint8 LED_u8SetOFF(const LED_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		if(Copy_pConfiguration -> LED_u8ACT_TYPE == ACTIVE_LOW)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> LED_u8PORT, Copy_pConfiguration -> LED_u8PIN, DIO_u8PIN_HIGH);
		}
		else if(Copy_pConfiguration -> LED_u8ACT_TYPE == ACTIVE_HIGH)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> LED_u8PORT, Copy_pConfiguration -> LED_u8PIN, DIO_u8PIN_LOW);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}
/********************************************************************************************************************************************/
/********************************************************************************************************************************************/
uint8 LED_u8SetToggle(const LED_Config_t* Copy_pConfiguration)
{
	uint8 Local_u8ErrorState = OK;
	if(Copy_pConfiguration != NULL)
	{
		DIO_u8TogglePinValue(Copy_pConfiguration -> LED_u8PORT, Copy_pConfiguration -> LED_u8PIN);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}

	return Local_u8ErrorState;
}
/********************************************************************************************************************************************/
/********************************************************************************************************************************************/
