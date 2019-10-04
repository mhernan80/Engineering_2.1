#include <Arduino.h>

int pin = 3;
int potent = 0;

void setup()
{
	Serial.begin(9600);
	pinMode(pin, OUTPUT);
}

void loop()
{
	potent = analogRead(A1)/4;
	delay(50);
	analogWrite(pin, potent);
}

