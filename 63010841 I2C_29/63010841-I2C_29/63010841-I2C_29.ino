#include<Wire.h>
byte address,data,device;
void setup()
{
  Wire.begin();
  Serial.begin(115200);
  pinMode(LED_BUILTIN,OUTPUT);
  for(address = 1;address<127;address++)
  {
    Wire.beginTransmission(address);
    if(Wire.endTransmission()==0)
    {
      device = address;
      //Serial.print("\n I2C Device Address: ");
      //Serial.println(address,HEX);
    }
  }
}
void loop()
{
  byte x;
  Wire.requestFrom(device,1);
  x = Wire.read();
  Serial.print("\t pin state : ln = ");
  Serial.println(x,BIN);
  x = x & 0x0f;
  if( (x & 2) != 2)
  {
    if( (x & 1) == 1 )
    {
      data = 0x80 | x;
      for(int i = 1; i <= 4; i++)
      {
        Wire.beginTransmission(device);
        Wire.write(data);
        Wire.endTransmission();
        delay(5);
    
        //Serial.print("Out = : I = ");
        //Serial.print(i);
        //Serial.print("    data = ");
        //Serial.println(data,BIN);
        
        data = data >> 1;
        data = data | x;
      }
    }
    else if( (x & 1) == 0 )
    {
      for(int i = 1; i <= 4; i++)
      {
        switch(i)
        {
          case 1:
          data = 16+7;
          break;
          case 2:
          data = 32+7;
          break;
          case 3:
          data = 64+7;
          break;
          case 4:
          data = 128+7;
          break;
        }
        Wire.beginTransmission(device);
        Wire.write(data);
        Wire.endTransmission();
        delay(5);
      }
    }
  }
}
