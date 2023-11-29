#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ErrType.h"

#include "DIO_interface.h"
#include "BUTTON_interface.h"


uint8 BUTTON_u8GetState(const BUTTON_Config_t* Copy_pConfiguration, uint8* Copy_pu8State)
{
	uint8 Local_u8Error_State = OK;
	uint8 Local_u8ReadPin;
	if((Copy_pConfiguration != NULL) || (Copy_pu8State != NULL))
	{
		if(Copy_pConfiguration -> BUTTON_u8ACT_TYPE == PULL_UP)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> BUTTON_u8PORT, Copy_pConfiguration -> BUTTON_u8PIN, DIO_u8PIN_HIGH);
			DIO_u8ReadPinValue(Copy_pConfiguration -> BUTTON_u8PORT, Copy_pConfiguration -> BUTTON_u8PIN, &Local_u8ReadPin);

			if(Local_u8ReadPin == DIO_u8PIN_LOW)
			{
				*Copy_pu8State = PRESSED;
			}
			else if(Local_u8ReadPin == DIO_u8PIN_HIGH)
			{
				*Copy_pu8State = RELEAESSED;
			}
			else
			{
				Local_u8Error_State = NOK;
			}
		}
		else if(Copy_pConfiguration -> BUTTON_u8ACT_TYPE == PULL_DOWN)
		{
			DIO_u8SetPinValue(Copy_pConfiguration -> BUTTON_u8PORT, Copy_pConfiguration -> BUTTON_u8PIN, DIO_u8PIN_HIGH);
			DIO_u8ReadPinValue(Copy_pConfiguration -> BUTTON_u8PORT, Copy_pConfiguration -> BUTTON_u8PIN, &Local_u8ReadPin);

			if(Local_u8ReadPin == DIO_u8PIN_LOW)
			{
				*Copy_pu8State = RELEAESSED;
			}
			else if(Local_u8ReadPin == DIO_u8PIN_HIGH)
			{
				*Copy_pu8State = PRESSED;
			}
			else
			{
				Local_u8Error_State = NOK;
			}
		}
		else
		{
			Local_u8Error_State = NOK;
		}
	}
	else
	{
		Local_u8Error_State = NULL_PTR_ERR;
	}

	return Local_u8Error_State;
}
/********************************************************************************************************************************************/
/********************************************************************************************************************************************/
