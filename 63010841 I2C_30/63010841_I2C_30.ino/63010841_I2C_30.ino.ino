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
      Serial.print("\n I2C Device Address: ");
      Serial.println(address,HEX);
    }
  }
}
void loop()
{
  byte x;
  Wire.requestFrom(device,1);
  x = Wire.read();
  //Serial.print("\t pin state : ln = ");
  //Serial.println(x,BIN);
  x = x & 0x0f;
  if( (x & 2) != 2)
  {
    if( (x & 1) == 1 )
    {
      for(int i = 1; i <= 8; i++)
      {
        switch(i)
        {
          case 1:
          data = 128 + 7;// 1000 0111
          break;
          case 2:
          data = 128 + 64 + 7;// 1100 0111
          break;
          case 3:
          data = 64 + 7;// 0100 0111
          break;
          case 4:
          data = 64 + 32 + 7;// 0110 0111
          break;
          case 5:
          data = 32 + 7;// 0010 0111
          break;
          case 6:
          data = 32 + 16 + 7;// 0011 0111
          break;
          case 7:
          data = 16 + 7;// 0001 0111
          break;
          case 8:
          data = 128 + 16 + 7;// 1001 0111
          break;
        }
        Wire.beginTransmission(device);
        Wire.write(data);
        Wire.endTransmission();
        delay(5);
      }
    }
    else if( (x & 1) == 0 )//Reverse halfstep
    {
      for(int i = 1; i <= 8; i++)
      {
        switch(i)
        {
          case 8:
          data = 128 + 7;// 1000 0111
          break;
          case 7:
          data = 128 + 64 + 7;// 1100 0111
          break;
          case 6:
          data = 64 + 7;// 0100 0111
          break;
          case 5:
          data = 64 + 32 + 7;// 0110 0111
          break;
          case 4:
          data = 32 + 7;// 0010 0111
          break;
          case 3:
          data = 32 + 16 + 7;// 0011 0111
          break;
          case 2:
          data = 16 + 7;// 0001 0111
          break;
          case 1:
          data = 128 + 16 + 7;// 1001 0111
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
