
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

if(bv>200){
  value=1;
  
  
  
  }

  if (buttonvalue==0){
    
    if(sense==1)
    {sense=0;}
     else if(sense==0)
     {sense=1;}
    
    
    
    }
if(value==1){
  
  if(Distance<5){
    if (sense==0)
    
    
    {if(i<171 and sense2==0){
      i=i+10;}
      myservo.write(i);  sense2=1;
      delay(10);
    
  
    if(i==180){
    sense=1;
    value=0;}
    }
  
  else if (sense==1 )
    
     {
      
      if(i>9 and sense2==0)
      { i=i-10;}
      myservo.write(i);  sense2=1;
      delay(10);
   
      
        if(i==0){   value=0;
    sense=0;
    }
    }
  
  
  
  
  }if(sense2==1){
    if(Distance>4)    {
    
    sense2=0;
    
    delay(100);
    }
}}}
