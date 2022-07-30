
//SDA=A4
//SCL=A5
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  lcd.setCursor(0,9);
  lcd.print("Tinkerers");

}
//lcd.setCursor(0, 0);
//              lcd.print(" UNREGISTERED              "); 
//              delay(500);
//              lcd.setCursor(0, 1);
//              lcd.print(".........");
//                             
//                  for (int positionCounter = 0; positionCounter < 43; positionCounter++) {
//    // scroll one position left:
//    lcd.scrollDisplayLeft();
//         // wait a bit:
//    delay(150);


void loop()
{
}
