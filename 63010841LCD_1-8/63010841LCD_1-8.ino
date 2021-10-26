#include<Wire.h>
#include<hd44780.h>
#include<hd44780_I2Cexp.h>
hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;
void setup() {
  // put your setup code here, to run once:
  int status;
  status = lcd.begin(LCD_COLS,LCD_ROWS);
  //lcd.clear();
  if(status){
    hd44780::fatalError(status);
  }
  lcd.print("LCD I2C");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.print("ASCII CODE Test");
  delay(60);
  lcd.clear();
  
}
