
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Temp = analogRead(A0);
  Serial.flush();
  Serial.print(Temp);
  Serial.println();
}
