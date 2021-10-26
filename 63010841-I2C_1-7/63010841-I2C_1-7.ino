#include<Wire.h>
void setup() {
 Wire.begin();
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte address,data,device,x;
  for(address =1;address<127;address++){
    Wire.beginTransmission(address);
    if(Wire.endTransmission()==0){
      device =address;
      Serial.print("\nI2C Device Address : ");
      Serial.println(address,HEX);
    }
  }
  /*for(data =0;data<=255;data++){
    Wire.beginTransmission(device);
    Wire.write(data);
    Wire.endTransmission();
    Serial.print("pin state : Out = ");
    Serial.println(data,BIN);
    delay(100);
    Wire.requestFrom(device,1);
    x = Wire.read();
    Serial.print("\t pin state : In = ");
    Serial.println(x,BIN);
  }*/

}
