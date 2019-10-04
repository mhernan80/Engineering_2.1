#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7


void setup()
{

lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("Hello World!");

}

void loop()
{
	delay(1000);
	int time = millis();
	lcd.setCursor(1, 2);
	lcd.print(time/1000);

}