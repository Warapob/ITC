int led1 = 9,led2 = 10,led3 = 8,led4 = 7,led5 = 6;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(true){
for(int i = 20;i>=0;i=20){
    digitalWrite(led1,HIGH);
    delay(i);
    digitalWrite(led1,LOW);
    delay(i);
    digitalWrite(led2,HIGH);
    delay(i);
    digitalWrite(led2,LOW);
    delay(i);
    digitalWrite(led3,HIGH);
    delay(i);
    digitalWrite(led3,LOW);
    delay(i);
    digitalWrite(led4,HIGH);
    delay(i);
    digitalWrite(led4,LOW);
    delay(i);
    digitalWrite(led5,HIGH);
    delay(i);
    digitalWrite(led5,LOW);
    delay(i);
    
    digitalWrite(led4,HIGH);
    delay(i);
    digitalWrite(led4,LOW);
    delay(i);
    digitalWrite(led3,HIGH);
    delay(i);
    digitalWrite(led3,LOW);
    delay(i);
    digitalWrite(led2,HIGH);
    delay(i);
    digitalWrite(led2,LOW);
    delay(i);
    Serial.println(i); 
    if(i<=0){
      for(int i = 0;i<20;i++){
    digitalWrite(led1,HIGH);
    delay(i);
    digitalWrite(led1,LOW);
    delay(i);
    digitalWrite(led2,HIGH);
    delay(i);
    digitalWrite(led2,LOW);
    delay(i);
    digitalWrite(led3,HIGH);
    delay(i);
    digitalWrite(led3,LOW);
    delay(i);
    digitalWrite(led4,HIGH);
    delay(i);
    digitalWrite(led4,LOW);
    delay(i);
    digitalWrite(led5,HIGH);
    delay(i);
    digitalWrite(led5,LOW);
    delay(i);
    
    digitalWrite(led4,HIGH);
    delay(i);
    digitalWrite(led4,LOW);
    delay(i);
    digitalWrite(led3,HIGH);
    delay(i);
    digitalWrite(led3,LOW);
    delay(i);
    digitalWrite(led2,HIGH);
    delay(i);
    digitalWrite(led2,LOW);
    delay(i);
    Serial.println(i);

    
  }  
    }
  }
}
  

 /* digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led3,HIGH);
  delay(250);
  digitalWrite(led4,HIGH);
  delay(250);
  digitalWrite(led5,HIGH);
  delay(250);
  digitalWrite(led5,LOW);
  delay(250);
  digitalWrite(led4,LOW);
  delay(250);
  digitalWrite(led3,LOW);
  delay(250);       
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
  digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led3,HIGH);
  delay(250);
  digitalWrite(led4,HIGH);
  delay(250);
  digitalWrite(led5,HIGH);
  delay(250);
  digitalWrite(led5,LOW);
  delay(250);
  digitalWrite(led4,LOW);
  delay(250);
  digitalWrite(led3,LOW);
  delay(250);       
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
 
  
  /*digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);*/

  /*for( int i = 0;i<10000;i=i-1){
    digitalWrite(led1,HIGH);
  delay(i);
  digitalWrite(led1,LOW);
  delay(i);
  Serial.println(i);
  if(i==0){
    i=50;
  }

  }*/
 }
