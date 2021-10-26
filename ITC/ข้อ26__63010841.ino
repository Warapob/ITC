void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int Temp = analogRead(A0);
Serial.println(Temp);
/*if(Temp>=1020){
  digitalWrite(5,LOW);
}
else{
  digitalWrite(5,HIGH);
}*/
}
