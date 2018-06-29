/**
 * Welcome to XDK LIVE.
 *
 * Not sure what to do now?
 * Check out the "Getting started" guide in the Eclipse help.
 */

package main;
import platforms.xdk110;

setup hmi:LED{
	var led_test = light_up(color = Yellow);
}



setup mywlan:WLAN{
	
	ssid = "YOUR SSID";
	psk = "YOUR PASSCODE";
	
}

setup mqtt_test:MQTT{
	
	
	transport = mywlan;
	clientId = "XDK_tester";
	url = "mqtt://broker.mqttdashboard.com";
	var data_publish = topic("XDK_test");
	
}

every button_one.pressed {
	print("Hello World\n");
	hmi.led_test.write(true);
	mqtt_test.data_publish.write("Test!");
}

every button_two.pressed{
	
	print("Bye!\n");
	hmi.led_test.write(false);
	
}

