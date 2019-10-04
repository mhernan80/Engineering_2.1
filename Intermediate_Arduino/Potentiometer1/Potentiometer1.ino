
#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
	Serial.begin(9600);
	lcd.init();
	lcd.backlight();
	lcd.setCursor(0,0);
	lcd.print("Brightness");
}

void loop()
{
	int LED = analogRead(A1);
	analogWrite(6, LED/5);
	Serial.println(LED);
	delay(50);
	lcd.setCursor(0,12);
	lcd.print(round(LED/100));
	lcd.print(" ");
}

