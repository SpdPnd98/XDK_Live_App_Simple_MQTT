/**
 * Generated by XDK LIVE.
 * @date 2018-06-29 23:25:09
 */


#include <BSP_BoardType.h>
#include <stdbool.h>
#include <BCDS_BSP_LED.h>
#include <BCDS_Retcode.h>
#include "XdkLiveExceptions.h"

static bool _ledStatusYellow = false;

Retcode_T ConnectivityLEDHmi_Setup(void)
{
	Retcode_T ledSetupStatus = RETCODE_OK;
	ledSetupStatus = BSP_LED_Connect();
	if(ledSetupStatus != RETCODE_OK)
	{
		return ledSetupStatus;
	}
	
	ledSetupStatus = BSP_LED_Enable((uint32_t) BSP_XDK_LED_Y);
	if(ledSetupStatus != RETCODE_OK)
	{
		return ledSetupStatus;
	} 		
	
	return NO_EXCEPTION;
}

Retcode_T ConnectivityLEDHmi_Enable(void)
{
	
	return NO_EXCEPTION;
}

/**
 * Provides read access to the led_test signal.
 */
Retcode_T ConnectivityLEDHmi_Led_test_Read(bool* result)
{
	*result = _ledStatusYellow;
	
	return NO_EXCEPTION;
}

/**
 * Provides write access to the led_test signal.
 */
Retcode_T ConnectivityLEDHmi_Led_test_Write(bool* value)
{
	if(*value == TRUE) {
		BSP_LED_Switch((uint32_t) BSP_XDK_LED_Y, (uint32_t) BSP_LED_COMMAND_ON);
	} else {
		BSP_LED_Switch((uint32_t) BSP_XDK_LED_Y, (uint32_t) BSP_LED_COMMAND_OFF);
	}
	_ledStatusYellow = *value;
	
	return NO_EXCEPTION;
}



