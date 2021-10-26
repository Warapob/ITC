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
float T0 = 25+273.15;
float X = 3435.0;
float R0 = 10000.0;

void setup() {
    pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);

  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(9600);

}
void displayNumber1();
void displaySegment(int);
void loop() {
   
  displayNumber1();

}
void displayNumber1(){
  float Y = analogRead(A3);
   float R = (R0*Y)/(1023-Y);
   float T;
   T = (T0*X)/(X+(T0*log(R/R0)));
  Serial.println(T-273.15);
  float RealTemp = T-273.15;
  int d = RealTemp*100;
  int w,x,y,z;
  w=(d-(d%1000))/1000;
  x=((d-(w*1000))-((d-(w*1000))%100))/100;
  y=((d-(w*1000)-(x*100))-((d-(w*1000)-(x*100))%10))/10;
  z=(d-(w*1000)-(x*100)-(y*10))-((d-(w*1000)-(x*100)-(y*10))%1);
    for(int i = 0;i <20;i++){
  for(int digit = 1;digit<= 4;digit ++){
    //int a;
    //a= digit;

   //Serial.println(a);
   
    switch(digit){
      case 1: displaySegment(w);
      break;
      case 2: displaySegment(x);
      break;
      case 3: displaySegment(y);
      break;
      case 4: displaySegment(z);
      break;

    }
    //analogWrite(5,analogRead(A5));
    
        switch(digit){
      case 1 : 
      digitalWrite(D1,HIGH);
      
      break;
      case 2 : 
      digitalWrite(D2,HIGH);
      digitalWrite(DP,HIGH);
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
  digitalWrite(DP,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  
  }
  }
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
