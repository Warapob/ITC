#include<Wire.h>
byte address, data, device, x;
void setup() {
  
  Serial.begin(115200);
  Wire.begin();
  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    if (Wire.endTransmission() == 0) {
      device = address;
      Serial.print("\nI2C Device Address : ");
      Serial.println(address, HEX);
    }
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
 
  data = 0x80;
  for (int i = 1; i <= 4; i++) {
    Wire.beginTransmission(device);
    Wire.write(data);
    Wire.endTransmission();
    Serial.print("pin state : Out = ");
    Serial.println(data, BIN);
    delay(5);
    data = data >> 1;
    Wire.requestFrom(device, 1);
    x = Wire.read();
    Serial.print("pin state : In = ");
    Serial.println(x, BIN);
  }

}
