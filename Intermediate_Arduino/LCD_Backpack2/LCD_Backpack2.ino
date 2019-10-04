#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
boolean on_off = 0;
int counter = 0;
void setup()
{
	lcd.init();
	lcd.backlight();
	lcd.setCursor(0,0);
	lcd.print("Press Counter:");
}

void loop()
{
	if(on_off == 0&&digitalRead(2)==1){
		on_off = 1;
		counter++;
		lcd.setCursor(0,1);
		lcd.print(counter);
	}
	if(on_off == 1&&digitalRead(2)==0){
		on_off = 0;
	}
}

