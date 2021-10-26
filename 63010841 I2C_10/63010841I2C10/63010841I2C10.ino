byte address,data,device,x;
#include <Wire.h>
void setup()
{
  Wire.begin(); 
  Serial.begin(115200); 
  for(address = 1; address < 127; address++ ) 
  {
    Wire.beginTransmission(address); 
    if (Wire.endTransmission() == 0) 
    {
      device = address;
      Serial.print("\n I2C Device Address: "); 
      Serial.println(address, HEX); 
    }
  }
  data = 111;
}
void loop()
{
  Wire.beginTransmission(device);
  Wire.write(data);
  Wire.endTransmission();

  Wire.requestFrom(device, 1); 
  x = Wire.read(); 
  Serial.print("pin state : Out = ");
    Serial.print(data,BIN);

  Serial.print("\t pin state : In = "); 
  Serial.println(x,BIN); 
  if ((x & 4) != 4)
  {
    data |= 4;       
  }
  else
  {
    data &= 239;
  }
}
