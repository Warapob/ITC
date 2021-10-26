#include<Wire.h>
void setup() {
 Wire.begin();
 Serial.begin(115200);
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte address,data,device;
  for(address =1;address<127;address++){
    Wire.beginTransmission(address);
    if(Wire.endTransmission()==0){
      device =address;
      Serial.print("\nI2C Device Address : ");
      Serial.println(address,HEX);
    }
 Wire.requestFrom(device,1);
 int x=Wire.read();
  Serial.print("\t pint state : In = ");
  Serial.println(x,BIN);
  x=x & 0x0f;
  if((x & 4)!= 4){
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN,LOW);
  }

  }
 
}
