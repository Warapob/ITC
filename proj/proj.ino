//A0 -- LDR1
//A1 -- LDR1
//A2 -- LDR2
//A3 -- LDR2
//D8 -- Servo1
//D9 -- Servo2
#include<Servo.h>
#include<Wire.h>
#include<hd44780.h> 

#include<hd44780_I2Cexp.h>
const hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;

Servo servo,servo2;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);//LDR1
  pinMode(A1, INPUT);//LDR1
  pinMode(A2, INPUT);//LDR2
  pinMode(A3, INPUT);//LDR2
  servo.attach(8);//for LDR1
 // servo.write(90);
  servo2.attach(9);//for LDR2
  //servo2.write(90);
  Serial.begin(9600);

  Wire.begin();
  int status = lcd.begin(LCD_COLS, LCD_ROWS);
  lcd.clear();
  if (status)
  {
    hd44780::fatalError(status);
  }
}
int degree = 90;
int degree2 = 90;
void loop() {
  Serial.print(analogRead(A0));
  Serial.print(" ");
  Serial.print(analogRead(A1));
  Serial.print(" deg = ");
  Serial.print(degree);
  Serial.print(" ");
  int A = analogRead(A0), B = analogRead(A1);
  if (A - B > 5 || B - A > 5) {
    if (A > B) {
      
      if (degree > 150) {
        degree = 150;
      }
      else if (degree < 30) {
        degree = 30;
      }
      else{
        degree++;
      }
      delay(10);
      servo.write(degree);
    }
    else if (A < B) {
      
      if (degree > 145) {
        degree = 145;
      }
      else if (degree < 35) {
        degree = 35    ;
      }
      else{
        degree--;
      }
      delay(10);
      servo.write(degree);
    }
  }
  // put your main code here, to run repeatedly: Servo 2 Here
  Serial.print(analogRead(A2));
  Serial.print(" ");
  Serial.print(analogRead(A3));
  Serial.print(" deg2 = ");
  Serial.println(degree2);

  int C = analogRead(A2);
  int D = analogRead(A3);
  if (C - D > 5 ||  D - C > 5) {
    if (C > D) {
      
      if (degree2 > 145) {
        degree2 = 145;
      }
      else if (degree2 < 35) {
        degree2 = 35;
      }
      else{
        degree2++;
      }
      delay(10);
      servo2.write(degree2);
    }
    else if (C < D) {
      
      if (degree2 > 145) {
        degree2 = 145;
      }
      else if (degree2 < 35) {
        degree2 = 35;
      }
      else{
        degree2--;
      }
      delay(10);
      servo2.write(degree2);
    }
  }

  lcd.setCursor(0, 0);
  lcd.print("Degree1 : ");
  lcd.print(degree);
  lcd.setCursor(0, 1);
  lcd.print("Degree2 : ");
  lcd.print(degree2);
  delay(70);
  lcd.clear();

}
