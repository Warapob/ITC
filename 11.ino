int A = A0
    ,B = A1
    ,C = A2
    ,D = 2
    ,E = 4
    ,F = 7
    ,G = 8
    ,DP = 13
    ,D1 = 5
    ,D2 = 6
    ,D3 = 9
    ,D4 = 10;
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);
  pinMode(12,INPUT_PULLUP);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(9600);
  pinMode(A5,OUTPUT);
}
void loop() {

  //Serial.println(analogRead(A5));
  
  displayNumber1();

 
}
void displaySegment(int n){
  switch(n){
    case 1:
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    break;
  
      case 2:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    break;
  
       case 3:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
    break;
    
     case 4:
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    break;

     case 5:
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    break;
     
     case 6:
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    break;

     case 7:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
    break;

     case 8:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    break;

     case 9:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
    break;

     case 0:
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
    break;
  }
  
}

void displayNumber1(){
 //9//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,LOW);
      break;
      case 2 : 
      digitalWrite(D2,LOW);
      break;   
      case 3 : 
      digitalWrite(D3,LOW);
      break;   
      case 4 : 
      digitalWrite(D4,LOW);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
      //10//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(6);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,LOW);
      break;
      case 2 : 
      digitalWrite(D2,LOW);
      break;   
      case 3 : 
      digitalWrite(D3,LOW);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
    //11//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(6);
      break;
      case 4: displaySegment(3);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,LOW);
      break;
      case 2 : 
      digitalWrite(D2,LOW);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
    //12//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(6);
      break;
      case 3: displaySegment(3);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,LOW);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
  
  for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(6);
      break;
      case 2: displaySegment(3);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(1);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
  
  //2//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(3);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(1);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
   
  //3//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(1);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(8);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
   //4//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(1);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(8);
      break;
      case 4: displaySegment(4);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
   //5//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(0);
      break;
      case 2: displaySegment(8);
      break;
      case 3: displaySegment(4);
      break;
      case 4: displaySegment(1);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,HIGH);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
  //6//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(8);
      break;
      case 2: displaySegment(4);
      break;
      case 3: displaySegment(1);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,HIGH);
      break;   
      case 4 : 
      digitalWrite(D4,LOW);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
  //7//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(4);
      break;
      case 2: displaySegment(1);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      break;   
      case 3 : 
      digitalWrite(D3,LOW);
      break;   
      case 4 : 
      digitalWrite(D4,LOW);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
    //8//
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    int a;
    a= digit;

   Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(1);
      break;
      case 2: displaySegment(0);
      break;
      case 3: displaySegment(0);
      break;
      case 4: displaySegment(0);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      break;
      case 2 : 
      digitalWrite(D2,LOW);
      break;   
      case 3 : 
      digitalWrite(D3,LOW);
      break;   
      case 4 : 
      digitalWrite(D4,LOW);
      break;      
    }
    delay(5);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  }
  }
   
}
  
