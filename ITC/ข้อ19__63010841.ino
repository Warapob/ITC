
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Temp = analogRead(A0);
  if(Temp==1023){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
  else {
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
  }
  delay(10);
  Serial.flush();
  Serial.print(Temp);
  Serial.println();
}
