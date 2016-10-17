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

byte auge [8] = {
  B11111,
  B10001,
  B10101,
  B10101,
  B10101,
  B10001,
  B11111,
};

byte auge2 [8] = {
  B11111,
  B10001,
  B10101,
  B10101,
  B10101,
  B10001,
  B11111,
};

byte mund [8] = {
  B00000,
  B00000,
  B00000,
  B10000,
  B01100,
  B00011,
  B00000,
};

byte mund2 [8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B00000,
};

byte mund3 [8] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00110,
  B11000,
  B00000,
};


void setup()
{
lcd.begin (16,2); // <<----- My LCD was 16x2
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
lcd.setCursor (0,0);
lcd.createChar(0, auge);
lcd.createChar(1, auge2);
lcd.createChar(2, mund);
lcd.createChar(3, mund2);
lcd.createChar(4, mund3);

lcd.setCursor(6,0);
lcd.write(byte(0));
lcd.setCursor(8,0);
lcd.write(byte(1));
lcd.setCursor(6,1);
lcd.write(byte(2));
lcd.setCursor(7,1);
lcd.write(byte(3));
lcd.setCursor(8,1);
lcd.write(byte(4));



}

void loop()
{


} 
