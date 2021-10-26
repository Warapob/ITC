#include<Wire.h>
#include<hd44780.h>
#include<hd44780_I2Cexp.h>
hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;
int i =15;
uint8_t char0[8] = {0x0,0xe,0x11,0x1,0x1,0x1,0x3,0x3};
uint8_t char1[8] = {0x0,0xf,0x10,0xe,0x2,0x2,0x6,0x6};
uint8_t char2[8] = {0x0,0xf,0x11,0x9,0x9,0x9,0x19,0x19};
uint8_t char3[8] = {0x0,0x11,0x15,0x15,0x1b,0x1b,0x11,0x11};
void setup() {
  // put your setup code here, to run once:
  int status;
  status = lcd.begin(LCD_COLS,LCD_ROWS);
  //lcd.clear();
  if(status){
    hd44780::fatalError(status);
  }
  lcd.print("eie");
  //lcd.lineWrap();
 lcd.createChar(0, char0);
 lcd.createChar(1, char1);
 lcd.createChar(2, char2);
 lcd.createChar(3, char3);
}

void loop() {
/*  // put your main code here, to run repeatedly:
for(int i = 15;i>=-4;i--){
 
 delay(300);
 lcd.clear();
 if(i==-1){
  lcd.setCursor(0, 0);
  lcd.write(1); // write character 1
  lcd.write(2); // write character 2
  lcd.write(3); // write character 3
 }
 else if(i==-2){
  lcd.setCursor(0, 0);
  lcd.write(2); // write character 2
  lcd.write(3); // write character 3
 }
  else if(i==-3){
  lcd.setCursor(0, 0);
  lcd.write(3); // write character 3
 }
 else if(i>=0){
  lcd.setCursor(i, 0);
 lcd.write(0); // write character 0
 lcd.write(1); // write character 1
 lcd.write(2); // write character 2
 lcd.write(3); // write character 3
 }
}
*/

}
