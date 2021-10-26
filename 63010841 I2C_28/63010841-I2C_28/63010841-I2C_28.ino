#include<Wire.h>
byte address,data,device,x;
bool a = false,b = false;
void setup() {
 Wire.begin();
  for(address =1;address<127;address++){
    Wire.beginTransmission(address);
    if(Wire.endTransmission()==0){
      device =address;
      Serial.print("\nI2C Device Address : ");
      Serial.println(address,HEX);
    }
  }
data =111;
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.requestFrom(device,1);
  x= Wire.read();

  //Serial.print("In = ");
  //Serial.println(x,BIN);
  x=x&0x0f;
  
  if((x&2)!=2){

    data = 0x80|x;
    for(int i = 1;i<=4;i++){
      Wire.beginTransmission(device);
      Wire.write(data);
      Wire.endTransmission();
      delay(5);
      
      Serial.print("Out = ");
      Serial.println(data,BIN);

    data = data >> 1;
    data = data|x;
    }
  }
 /*if((x&1)!=1){

    data = 0x80|x;
    for(int i = 4;i>=1;i--){
      Wire.beginTransmission(device);
      Wire.write(data);
      Wire.endTransmission();
      delay(5);
      
      Serial.print("Out = ");
      Serial.println(data,BIN);

    data = data >> 1;
    data = data|x;
    }
  }*/
 
}
