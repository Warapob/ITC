#include<Wire.h>
#include<hd44780.h>
#include<hd44780_I2Cexp.h>
#define device 37
const hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;
int stepCount = 0,y;
byte data,x;
int step =0;
void setup() {
  Wire.begin();
  
 Serial.begin(115200);
    int status;
  status = lcd.begin(LCD_COLS,LCD_ROWS);
  lcd.clear();
  //lcd.print("000");

  if(status){
    hd44780::fatalError(status);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  data = 0x80;
  for(int i = 1;i<=4;i++){
    //lcd.clear();
    Wire.beginTransmission(device);
    Wire.write(data);
    Wire.endTransmission();
    Serial.print("pin state : Out = ");
    Serial.println(data,BIN);
    delay(15);
    data = data >> 1;
    step++;
    y=step*1.43;
    lcd.setCursor(0,0);
    lcd.print("Mode:Wavedrive");
    lcd.setCursor(0,1);
    lcd.print("Step: ");
    lcd.print(step);
    
    /*Wire.requestFrom(device,1);
    x = Wire.read();
    Serial.print("pin state : In = ");
    Serial.println(x,BIN);*/
  }
  


}
