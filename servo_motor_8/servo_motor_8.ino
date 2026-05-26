
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
int sense = 0;


int a = 2;
int b = 3;
int c = 4;
int d = 7;
int e = 8;
int f = 10;
int g = 11;
Servo myservo;
int v = 0;


void setup() {
  pinMode(Trigpin, OUTPUT);
  pinMode(Echopin, INPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
  Serial.begin (9600);

  myservo.attach(servopin);







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


  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  Serial.print("value:");
  Serial.print(value);
  Serial.print("i:");
  Serial.print(i);
  Serial.print("sense:");
  Serial.print(sense);
    Serial.print("Distance:");
  Serial.print(Distance);
  Serial.println();

if(Distance<6 and sense==0){
  if(v==0){
    i=i+10;
    delay(100);
   if(i==180){
    v=1;
    delay(100);
    
    } 
    sense=1; myservo.write(i);  delay(100);
    }
  else if(v==1){
    i=i-10;
    delay(100);
    if(i==0){
      v=0;
      delay(100);
      }
    
    sense=1; myservo.write(i);  delay(100);
    }
  
  
  }
  if(Distance>5 and sense==1){
    sense=0;
    delay(100);
    
    
    }










if(i>-1 and i<20){
     digitalWrite(a , HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(d , LOW);
   digitalWrite(g , LOW);
  
}


if(i>19 and i<40){
     digitalWrite(a , HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , HIGH);
  
}

if(i>39 and i<60){
     digitalWrite(a , HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , LOW);
  
}

if(i>59 and i<80){
     digitalWrite(a , LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, HIGH);
     digitalWrite(f , HIGH);
   digitalWrite(g , LOW);
  
}

if(i>79 and i<100){
     digitalWrite(a , LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , LOW);
  
}
    if(i>99 and i<120){
     digitalWrite(a , LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , LOW);
  
}
if(i>119 and i<140){
     digitalWrite(a , HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f , HIGH);
   digitalWrite(g , LOW);
  
}


if(i>139 and i<160){
     digitalWrite(a , LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , LOW);
  
}
if(i>159 and i<181){
     digitalWrite(a , LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW);
     digitalWrite(e, LOW);
     digitalWrite(f , LOW);
   digitalWrite(g , LOW);
  
}
}
