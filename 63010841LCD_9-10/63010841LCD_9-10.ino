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
  lcd.lineWrap();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.print("ASCII CODE Test");
  delay(60);
  lcd.clear();
  lcd.cursor();
  int col = 0;
  int row = 0;
  for(int i = 0;i<256;i++){
    lcd.write(i);
    delay(50);
    /*col = col+1;
    if(col==16){
      col=0;
      row=row+1;
      if(row==2){
        row = 0;
        
      }
      delay(50);
    }*/
    delay(30);
  }
}
