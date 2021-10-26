int p1 = 8,p2 = 9,p3 = 10,p4 = 11;
int mS = 15,stepCount = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
  Serial.begin(115200);
}
void waveDrive(){
digitalWrite(p4,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,HIGH);
}
void fullStep(){
digitalWrite(p4,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p1,HIGH);
  delay(mS);
digitalWrite(p4,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,HIGH);
}
void halfStep(){
digitalWrite(p4,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p1,LOW);
  delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(p1,LOW);
 delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p1,LOW);
 delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p1,HIGH);
 delay(mS);
digitalWrite(p4,LOW);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,HIGH);
 delay(mS);
digitalWrite(p4,HIGH);
digitalWrite(p3,LOW);
digitalWrite(p2,LOW);
digitalWrite(p1,HIGH);
 delay(mS);
}
void loop() {
  waveDrive();
  //fullStep();
  //halfStep();
  Serial.print("Step : ");
  Serial.println(stepCount);
  stepCount++;

}
