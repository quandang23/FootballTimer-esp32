#include <IRremote.h>
IRsend irsend; 

void setup() {
  pinMode(5, OUTPUT); 
  digitalWrite(5, HIGH); 
}

void loop() {
  irsend.sendSony(0xa90, 12); //Sony TV power code
}
