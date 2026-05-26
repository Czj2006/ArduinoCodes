
#include <IRremote.h>










int recievepin=7;

IRrecv irreceiver (recievepin);

long recvalue=0;

decode_results results;



void setup() {
 irreceiver.enableIRIn();
Serial.begin(9600);
}

void loop() {
 if(irreceiver.decode(&results))
{recvalue=results.value;

Serial.print("Recvalue:");
Serial.print(recvalue,HEX);
Serial.println();
delay(400);

irreceiver.resume();
  
  
  
  
  
  }




 
}
