int sec = 0, minutes = 0, hours = 0;
bool secCh = false, minCh = false;
bool Start = true, Stop = false;
#include<Wire.h>
#include<hd44780.h>
#include<hd44780_I2Cexp.h>
#define device 33
const hd44780_I2Cexp lcd;
const int LCD_COLS = 16;
const int LCD_ROWS = 2;
int stepCount = 0, y;
byte data, x;
ISR(TIMER1_COMPA_vect)
{
  if (Start == true) {
    sec ++ ;
    secCh = true;
    if (sec >= 60)
    {
      minCh = true;
      minutes++ ;
      sec = 0;
    }
    if (minutes >= 60)
    {
      hours++ ;
      minutes = 0;
    }
  }
}
void setup()
{
  int status;
  status = lcd.begin(LCD_COLS, LCD_ROWS);
  //lcd.clear();
  if (status) {
    hd44780::fatalError(status);
  }
  //lcd.print("LCD I2C");
  noInterrupts(); // disable all interrupts
  // Clear Timer/Counter Control Register for Interrupt 1, bytes A and B (TCCR1?)
  TCCR1A = 0; // Clear TCCR1A/B registers
  TCCR1B = 0;
  TCNT1 = 0; // Initialize counter value to 0 (16-bit counter register)
  // set compare match register for TIMER1: CLOCKFREQUENCY / frequency / prescaler - 1
  OCR1A = 15624; // 16MHz/(1Hz*1024) – 1 (must be <65536)
  // Timer/Counter Control Register for Interrupt 1 on register B
  TCCR1B |= (1 << WGM12); // Mode 4, turn on CTC mode
  // Clock Select Bit, Set CS12, CS11 and CS10 bits
  TCCR1B |= (1 << CS12) | (1 << CS10); // Set CS10 and CS12 bits for 1024 prescaler
  TIMSK1 |= (1 << OCIE1A); // enable timer compare interrupt , The value in OCR1A is used for compare
  interrupts(); // enable all interrupt
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Serial.begin(9600);
}



void loop() {
  // put your main code here, to run repeatedly:
  data = 0x80;
  if (Start == true) {
    for (int i = 1; i <= 4; i++) {
      //lcd.clear();
      Wire.beginTransmission(device);
      Wire.write(data);
      Wire.endTransmission();
      Serial.print("pin state : Out = ");
      Serial.println(data, BIN);
      delay(15);
      data = data >> 1;
    }
  }
  Serial.println(digitalRead(6));
  if (digitalRead(5) == 0) {
    sec = 0;
    minutes = 0;
    hours = 0;
  }

  if (digitalRead(6) == 0 && Start == true) {
    Stop = true;
    Start = false;
    delay(200);
  }
  if (digitalRead(6) == 0 && Stop == true) {
    Stop = false;
    Start = true;
    delay(200);
  }
  lcd.setCursor(0, 0);
  if (hours == 0) {
    lcd.print("00");
  }
  else if (hours > 9) {
    lcd.print(hours);
  }
  else {
    lcd.print("0");
    lcd.print(hours);
  }
  lcd.print(":");
  if (minutes == 0) {
    lcd.print("00");
  }
  else if (minutes > 9) {
    lcd.print(minutes);
  }
  else {
    lcd.print(0);
    lcd.print(minutes);
  }
  lcd.print(".");
  if (sec == 0) {
    lcd.print("00");
  }
  else if (sec > 9) {
    lcd.print(sec);
  }
  else {
    lcd.print("0");
    lcd.print(sec);
  }
  delay(60);
  lcd.clear();

}
