#include<Wire.h>
#include<hd44780.h>
#include<hd44780_I2Cexp.h>
hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;
int i =15;
uint8_t char0[8] = {0x11,0x1d,0x1,0x19,0x19,0x9,0x9,0xf};
uint8_t char1[8] = {0x0,0x0,0x0,0x1a,0x1a,0xa,0xf,0xb};
uint8_t char2[8] = {0x11,0x1d,0x1,0x19,0x19,0x9,0x9,0xf};
uint8_t char3[8] = {0x0,0x0,0x0,0x1a,0x1a,0xa,0xf,0xb};
uint8_t char4[8] = {  0xe,0xe,0xa,0xe,0x0,0x0,0x0,0x0};
uint8_t char5[8] = {  0x0,0x0,0x0,0x0,0x0,0x0,0x11,0xe};
uint8_t char6[8] = {  0xe,0xe,0xa,0xe,0x0,0x0,0x0,0x0};
uint8_t erase[8] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
  
void setup() {
  // put your setup code here, to run once:
  int status;
  status = lcd.begin(LCD_COLS,LCD_ROWS);
  //lcd.clear();
  if(status){
    hd44780::fatalError(status);
  }
  //lcd.lineWrap();
 lcd.createChar(0, char0);
 lcd.createChar(1, char1);
 lcd.createChar(2, char2);
 lcd.createChar(3, char3);
 lcd.createChar(4, char4);
 lcd.createChar(5, char5);
 lcd.createChar(6, char6);
 lcd.createChar(7, erase);
 pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 15;i>=0;i--){
 
 delay(500);
 lcd.clear();
 lcd.setCursor(i, 0);
 lcd.write(0); // write character 0
 lcd.write(1); // write character 1
 lcd.write(2); // write character 2
 lcd.write(3); // write character 3
 if(i==0){
  while(true){
  lcd.clear();
  lcd.write(0); // write character 0
  lcd.write(1); // write character 1
  lcd.write(2); // write character 2
  lcd.write(3); // write character 3
  lcd.print(" -_-");
  delay(500);
  lcd.clear();
  lcd.write(0); // write character 0
  lcd.write(1); // write character 1
  lcd.write(2); // write character 2
  lcd.write(3); // write character 3
  lcd.print(" ^o^");
  delay(500);
 

  
  }
 }
}


}
