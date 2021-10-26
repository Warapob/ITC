int sec = 0,minutes =0,hours = 0;
bool secCh = false,minCh = false;
ISR(TIMER1_COMPA_vect)
{
sec ++ ;
secCh=true;
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
void setup()
{
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
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if(secCh==true){
digitalWrite(8,HIGH);
delay(500);
digitalWrite(8,LOW);
secCh= false;
}
if(minCh==true){
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(9,LOW);
minCh = false;
}
}
