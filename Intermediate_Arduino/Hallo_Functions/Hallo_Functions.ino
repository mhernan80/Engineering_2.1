#include "Arduino.h"

void setup()
{

	Serial.begin(9600);
}

void loop()
{
	Serial.println(digitalRead(8));
	delay(20);
}


