#include <IRremote.h>
const byte IRPin = 1; 
void setup()
{
  IrSender.begin(IRPin);
  pinMode(0, OUTPUT); 
  digitalWrite(0, HIGH);    
}
void loop()
{
  IrSender.sendSony(0xa90, 12);
}
