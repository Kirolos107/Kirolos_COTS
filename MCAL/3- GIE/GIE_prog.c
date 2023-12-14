#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_reg.h"
#include "GIE_interface.h"

/********************************************************************************************/
/********************************************************************************************/
void GIE_voidEnableGlobal(void)
{
	__asm volatile("SLI");  /* Inline assembly: Set I-Bit */

	// SET_BIT(SREG, SREG_I);
}
/********************************************************************************************/
/********************************************************************************************/
void GIE_voidDisableGlobal(void)
{
	__asm volatile("CLI");  /* Inline assembly: Clear I-Bit */

	// CLR_BIT(SREG, SREG_I);
}
