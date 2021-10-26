#include<Wire.h>
byte address,data,device;
void setup() {
 Wire.begin();
  
 Serial.begin(115200);
 for(address =1;address<127;address++){
    Wire.beginTransmission(address);
    if(Wire.endTransmission()==0){
      device =address;
      Serial.print("\nI2C Device Address : ");
      Serial.println(address,DEC);
    }
  }
  data = 111;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  

    Wire.beginTransmission(device);
    Wire.write(data);
    Wire.endTransmission();
    Wire.requestFrom(device,1);
    Serial.print("pin state : Out = ");
    Serial.print(data,BIN);
     int x = Wire.read();
   Serial.print("\t, In = ");
   Serial.println(x,BIN);
   
   
   if((x&4)!=4){
    data |= 16;
   }
   else{
    data &= 239;
   }
  }
