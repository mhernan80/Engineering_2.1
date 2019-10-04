# include <Wire.h>
# include <LCD.h>
# include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);//LCD Backpack.ino

int led = 13;

void setup() {
  // put your setup code here, to run once:
  
lcd.begin (16,2); // for 16 x 2 LCD module
lcd.setBacklightPin(3,POSITIVE);
lcd.setBacklight(HIGH);
}

void loop() {
	delay(1000);
	int time = millis();
	lcd.setCursor(1, 2);
	lcd.print(time/1000);       // wait for a second
}
