bool red,green,yellow;
void setup() {
  int buttonState;
  int lastButtonState = HIGH;
  long lastDebounceTime = 0;
  long debounceDelay = 50;
  pinMode(12,INPUT);//L
  pinMode(11,INPUT);//M
  pinMode(10,INPUT_PULLUP);//R
  pinMode(2,OUTPUT); //g
  pinMode(3,OUTPUT); //y
  pinMode(4,OUTPUT); //r
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

void loop() {
  if(digitalRead(10)==LOW){
    digitalWrite(4,HIGH);
    red=true;
    delay(1000);
    digitalWrite(3,HIGH);
    yellow=true;
    delay(1000);
    digitalWrite(2,HIGH);
    green=true;
    delay(1000);
  }
    if(digitalRead(12)==HIGH){
    digitalWrite(2,LOW);
    red=false;
    delay(1000);
    digitalWrite(3,LOW);
    yellow=false;
    delay(1000);
    digitalWrite(4,LOW);
    green=false;
    delay(1000);
  }
  if(digitalRead(11)== LOW){
    Serial.print("green,yellow,red = ");
    Serial.print(green);
    Serial.print(yellow);
    if(green == true){
      digitalWrite(2,LOW);
      green=!green;
    }
    else{
      digitalWrite(2,HIGH);
      green=!green;
    }
    if(yellow ==true){
      digitalWrite(3,LOW);
      yellow=!yellow;
    }
    else{
      digitalWrite(3,HIGH);
      yellow=!yellow;
    }
    if(red == true){
      digitalWrite(4,LOW);
      red=!red;
    }
    else{
      digitalWrite(4,HIGH);
      red=!red;
    }
  }
  //debounce
  int reading = digitalRead(11);
  if(reading != lastButtonstate){
    lastDebounceTime = millis();
  }







  
}
