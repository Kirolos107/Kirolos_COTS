#ifndef BUTTON_INTERFACE_H
#define BUTTON_INTERFACE_H

#define PRESSED 			0u
#define RELEAESSED 			1u

/* Configurations:
 * 					-Pull Type:
 * 								 1-PULL_UP
 * 							     2-PULL_DOWN
 */

typedef enum
{
	PULL_UP   = 0u,
	PULL_DOWN = 1u,
}BUTTON_Pull_Type_t;

typedef struct
{
	uint8 BUTTON_u8PORT;
	uint8 BUTTON_u8PIN;
	BUTTON_Pull_Type_t BUTTON_u8ACT_TYPE;
}BUTTON_Config_t;


uint8 BUTTON_u8GetState(const BUTTON_Config_t* Copy_pConfiguration, uint8* Copy_pu8State);

#endif
