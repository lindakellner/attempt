#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h> //Bibliotheken: https://arduino-info.wikispaces.com/LCD-Blue-I2C



#define I2C_ADDR 0x3F // <<----- Add your address here. Find it from I2C Scanner
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7


LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

byte smiley [8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B01100,
};

byte smiley2 [8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00110,
};

byte smiley3 [8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};


void setup()
{
lcd.begin (16,2); // <<----- My LCD was 16x2
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
lcd.setCursor (0,0);
lcd.createChar(0, smiley);
lcd.createChar(1, smiley2);
lcd.createChar(2, smiley3);

lcd.setCursor(0,0);
lcd.print("Huiii");
lcd.setCursor(0,1);
lcd.print("crazy");
lcd.setCursor(7,1);
lcd.print(" ");
lcd.setCursor(6,0);
lcd.write(byte(2));



}

void loop()
{
lcd.setCursor(8,1);
lcd.write(byte(0));
delay(500);
lcd.setCursor(8,1);
lcd.write(byte(1));
delay(500);

} 
