/**
 * Generated by XDK LIVE.
 * @date 2018-06-29 23:25:09
 */


#include <stdio.h>
#include <stdbool.h>
#include <BCDS_Basics.h>
#include <BCDS_Retcode.h>
#include "ConnectivityMQTTMqtt_test.h"
#include "ConnectivityLEDHmi.h"
#include "XdkLiveExceptions.h"
#include "application.h"



Retcode_T HandleEveryButton_onePressed1(void* userParameter1, uint32_t userParameter2)
{
	
	BCDS_UNUSED(userParameter1);
	BCDS_UNUSED(userParameter2);

	Retcode_T exception = NO_EXCEPTION;
	
	
	printf("Hello World\n");
	bool _newConnectivityLEDHmi_Led_test_0 = true;
	exception = ConnectivityLEDHmi_Led_test_Write(&_newConnectivityLEDHmi_Led_test_0);
	if(exception != NO_EXCEPTION) return exception;
	char* _newConnectivityMQTTMqtt_test_Data_publish_1 = "Test!";
	exception = ConnectivityMQTTMqtt_test_Data_publish_Write(&_newConnectivityMQTTMqtt_test_Data_publish_1);
	if(exception != NO_EXCEPTION) return exception;


	return NO_EXCEPTION;
}

Retcode_T HandleEveryButton_twoPressed1(void* userParameter1, uint32_t userParameter2)
{
	
	BCDS_UNUSED(userParameter1);
	BCDS_UNUSED(userParameter2);

	Retcode_T exception = NO_EXCEPTION;
	
	
	printf("Bye!\n");
	bool _newConnectivityLEDHmi_Led_test_0 = false;
	exception = ConnectivityLEDHmi_Led_test_Write(&_newConnectivityLEDHmi_Led_test_0);
	if(exception != NO_EXCEPTION) return exception;


	return NO_EXCEPTION;
}


