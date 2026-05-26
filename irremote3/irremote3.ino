#include <IRremote.hpp>




int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 6;


int Trigpin = 5;
int Echopin = 4;
int Distance = 0;
int Distance2 = 0;
int Duration = 0;
int inch = 0;
int value = 0;



int analogValue=0;

int value123=0;
int valueee=100;
int valuee=0;

int value2=0;
int value3=0;
int value4=0;
float Speed_of_sound = 0.034;
int v=0;
int v2=0;
int v3=0;
int v4=0;
int v5=0;
int recievepin=A0;

IRrecv irreceiver (recievepin);

long recvalue=0;

decode_results results;



void setup() {
 irreceiver.enableIRIn();
Serial.begin(9600);
pinMode(10,OUTPUT);
pinMode(5,OUTPUT);
pinMode(9,OUTPUT);
pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
pinMode(3,OUTPUT);
 pinMode(Trigpin, OUTPUT);
  pinMode(Echopin, INPUT);
   pinMode(2, INPUT_PULLUP);
}

void loop() {
  
  
  
  
  
  
    digitalWrite(Trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(Trigpin, HIGH);
  delayMicroseconds(10);

  digitalWrite(Trigpin, LOW);

  Duration = pulseIn(Echopin, HIGH);
  Distance = Speed_of_sound * Duration / 2;
  Distance2 = Distance / 2.54;
  Serial.print("Distance:");
  Serial.print(Distance);
  Serial.print("cm");
  Serial.print(" Distance2:    ");
  Serial.print(Distance2);
  Serial.print("inch");


value=digitalRead(2);
  Serial.print(value);
  Serial.print("buttonvalue2   ");
  
  
  
  
  
   if(value==0){
  if(v5==0){

  v5=1;
  delay(500);
  }
  
  
   else if(v5==1){

  v5=2;
  delay(500);
  }
  
  else if(v5==2){

  v5=3;
  delay(500);
  }
  
  else if(v5==3){

  v5=0;
  delay(500);
  }
  
  }
  
  
  
  
  

  
  
  Serial.print("v:");
Serial.print(v2);
  v2=analogRead(A5);
 if(irreceiver.decode(&results))
{
  recvalue=results.value;

Serial.print("recvalue:");
Serial.print(recvalue,HEX);

Serial.print("valueee:");
Serial.print(valueee);


Serial.println();

 irreceiver.resume();
 if(recvalue==0xFF6897 or recvalue==0xC101E57B){
  
  Serial.println("0");
 
  v4=0;
}
else if(recvalue==0xFF30CF or recvalue==0x9716BE3F){
  
  Serial.println("1");
 
   v4=1;
}

}
 



v=map(v3,0,550,0,9);

if(v==0){digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
}
else if(v==1){
  

 
   digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
}
else if(v==2){
  
 
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
}
else if(v==3){
  
  
   digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  
}
else if(v==4){
  
 
 digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
}
else if(v==5){
  

  
  digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
}
else if(v==6){
  
  
 
   digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
}
else if(v==7){
  
  
 
      digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
}

else if(v==8){

    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);

}
  else if(v==9){

 digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  

}
 if(v4==0){
  
  
  if(v5==0){
  v3=map(v2,0,1021,0,550);
  
  analogWrite(A2,v3);
    analogWrite(A3,0);
  
  
  
  delay(500);
  }
  
  
   else if(v5==1){
  v3=map(v2,0,1021,0,550);
  
  analogWrite(A3,v3);
    analogWrite(A2,0);

  delay(500);
  }
  
  else if(v5==2){
  v3=map(Distance,0,200,0,550);
  analogWrite(A2,v3);
    analogWrite(A3,0);
 
  delay(500);
  }
  
  else if(v5==3){
v3=map(Distance,0,200,0,550);
  analogWrite(A3,v3);
    analogWrite(A2,0);

  delay(500);
  }
  
  }
  
  
  
  
  
  
  
  
  
  
 
else if(v4==1){ 
  analogWrite(3,0);
  
}

}
