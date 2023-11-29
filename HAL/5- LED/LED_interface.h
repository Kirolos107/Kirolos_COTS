#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

/* Configurations:
 * 					-LED Activity Type:
 * 								   1-ACTIVE_HIGH
 * 								   2-ACTIVE_LOW
 */

typedef enum
{
	ACTIVE_LOW  = 0u,
	ACTIVE_HIGH = 1u,
}LED_Act_Type_t;

typedef struct
{
	uint8 LED_u8PORT;
	uint8 LED_u8PIN;
	LED_Act_Type_t LED_u8ACT_TYPE;
}LED_Config_t;

uint8 LED_u8SetON(const LED_Config_t* Copy_pConfiguration);

uint8 LED_u8SetOFF(const LED_Config_t* Copy_pConfiguration);

uint8 LED_u8SetToggle(const LED_Config_t* Copy_pConfiguration);


#endif
