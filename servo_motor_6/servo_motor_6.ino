
#include <Servo.h>

int Trigpin = 6;
int Echopin = 5;
int Distance = 0;
int Distance2 = 0;
int servopin = 9;
int Duration = 0;
int inch = 0;
float Speed_of_sound = 0.034;
int value = 0;
int value2 = 0;
int i = 90;
int buttonvalue = 0;
int ii = 0;
int sense = 0;
int sense2 = 0;
int sense3 = 0;
int sense4 = 0;
int sense5 = 0;
int sense6 = 0;
int sense7 = 0;
Servo myservo;




int bv = 0;
int bv2 = 0;

int v = 0;


void setup() {
  pinMode(Trigpin, OUTPUT);
  pinMode(Echopin, INPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
    pinMode(11, OUTPUT);  pinMode(12, OUTPUT);  pinMode(13, OUTPUT);
  Serial.begin (9600);

  myservo.attach(servopin);







}

void loop() {
  digitalWrite(Trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(Trigpin, HIGH);
  delayMicroseconds(10);

  digitalWrite(Trigpin, LOW);
  buttonvalue = digitalRead(2);
  Duration = pulseIn(Echopin, HIGH);
  Distance = Speed_of_sound * Duration / 2;
  Distance2 = Distance / 2.54;
  bv = analogRead(A0);

  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  Serial.print("value:");
  Serial.print(value);
  Serial.print("i:");
  Serial.print(i);
  Serial.print("sense:");
  Serial.print(sense);
  Serial.print("sense2:");
  Serial.print(sense2);
  Serial.print("sense3:");
  Serial.print(sense3);
  Serial.print("sense4:");
  Serial.print(sense4);
  Serial.print("bv:");
  Serial.print(bv);
  Serial.println();
if(bv==0){
   digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
         
  
  }
  if (bv > 0 and bv < 100) {
    digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
    if (10 > Distance and sense == 0)  {
      if (i > -1)
      {
        i = i - 10;
      }
      sense = 1;
      delay(100);
      myservo.write(i);
       delay(100);
    }
  }






  
  else if (bv > 100 and bv < 200) {
        digitalWrite(11,HIGH);
            digitalWrite(12,HIGH);
                digitalWrite(13,LOW);
    if (10 > Distance and sense == 0)  {
      if (i < 180)
      {
        i = i + 10;
        sense = 1;
        delay(100);
        myservo.write(i);
      }
    }
  }




 if (sense == 1 and Distance > 10 ) {
   sense = 0;
 }











  else if (bv > 200 and bv < 300 ) {
       digitalWrite(11,LOW);
            digitalWrite(12,HIGH);
                digitalWrite(13,LOW);
        if (10 > Distance and sense == 0) {
    for (int i = 0; i <= 180; i++) {
      sense = 1;
     
      myservo.write(i);
      delay(10);
    }
    delay(100);
  }}
 if (sense == 1 and Distance > 10 ) {
   sense = 0;
 }
 
  
  
  
  
  
  
  
   if (bv > 300 and bv < 400) {
       digitalWrite(11,LOW);
            digitalWrite(12,HIGH);
                digitalWrite(13,HIGH);
     if (10 > Distance and sense == 0) {
  for (int  i = 180; i >= 0; i--) {
      sense = 1;
    
      myservo.write(i);
      delay(10);
    }
    delay(100);
  }}
  if (sense == 1 and Distance > 10 ) {
   sense = 0;
 }

 
  
  
  
  
  
  
  
  
  
   if (bv > 400 and bv < 500) {
       digitalWrite(11,LOW);
            digitalWrite(12,LOW);
                digitalWrite(13,HIGH);
     if (10 > Distance and sense == 0) {
    sense = 1;
    i = random(180);
    myservo.write(i);
    delay(100);
  }}
  if (sense == 1 and Distance > 10 ) {
   sense = 0;
 }




}
