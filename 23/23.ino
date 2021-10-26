
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Temp = analogRead(A0);
  if(Temp>=800){
     digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW); 
  }
  else if(Temp>=700){
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  else if(Temp>=600) {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
    else if(Temp>=500) {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW); 
  }
  delay(10);
  Serial.flush();
  Serial.print(Temp);
  Serial.println();
}
