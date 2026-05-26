#include <Servo.h>
Servo myservo;
int servopin = 11;


int Trigpin = 6;
int Echopin = 4;
int Distance = 0;
int Distance2 = 0;
int Duration = 0;
int inch = 0;
int value = 0;
int motorpin1 = 5;
int motorpin2 = 4;
int a = 13;
int b = 12;
int c = A0;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int sense=0;
int sense2=0;
int value4 = 0;
int value5 = 0;
float Speed_of_sound = 0.034;
int buttonvalue=0;
int buttonvalue2=0;
int value2=0;
int value3=40;
void setup() {
  pinMode(Trigpin, OUTPUT);
  pinMode(Echopin, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin (9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
    myservo.attach(servopin);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
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

  Serial.print(buttonvalue);
  Serial.print("buttonvalue   ");

buttonvalue2=digitalRead(2);
value5=digitalRead(1);
  Serial.print(buttonvalue2);
  Serial.print("buttonvalue2   ");

  Serial.print(value);
  Serial.print("value  ");

 Serial.print(value4);
  Serial.print("value 4 ");

  Serial.print(sense);
  Serial.print("sense   ");
  Serial.println();

if(buttonvalue2==0){
  if(value==1){
    
   
value=0;
delay(100);
    
    }
   else if(value==0){
    
  
value=1;
delay(100);
    
    }
  }
 
 
 









if(value5==1){
  value3=40;
  if(value4==0){
    
   
value4=1;
delay(100);
    
    }
   else if(value4==1){
    

value4=2;
delay(100);
    
    }
      else if(value4==2){
    

value4=0;
delay(100);
    
    }
    
  }









  if(value4==0){
    
   






if(Distance<10 and sense==0){
  value3=value3+10;
 sense=1;
  delay(100);
  
  }

else if(Distance>9 and sense==1){
  
  sense=0;
  delay(100);
  
  }

    
      if ( value3<50) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 myservo.write(0);
  }
  else if (value3==50) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
         myservo.write(20);
    
  }
  else if ( value3==60) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
        myservo.write(40);
     
  }
  else if ( value3==70) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
       myservo.write(60);
  }
    else if ( value3==80) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
       myservo.write(80);
  }
  else if(value3==90) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
      myservo.write(100);
  }
  else if ( value3==100) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
       myservo.write(120);
  }
  else if (value3==110) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      myservo.write(140);
  }
  else if (value3==120) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 myservo.write(160);
  }
  else if (value3==130) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      myservo.write(180);
  }











 if(value==1){
    
    analogWrite(5,value3-10);
analogWrite(3,0);

    
    }
   else if(value==0){
    
    analogWrite(3,value3-10);
analogWrite(5,0);

    }










    
    }
   else if(value4==1){
    






if(Distance<10 and sense==0){
  value3=value3+10;
 sense=1;
  delay(100);
  
  }

else if(Distance>9 and sense==1){
  
  sense=0;
  delay(100);
  
  }

    
      if ( value3<50) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);

  }
  else if (value3==50) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      
    
  }
  else if ( value3==60) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
      
     
  }
  else if ( value3==70) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      
  }
    else if ( value3==80) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      
  }
  else if(value3==90) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);

  }
  else if ( value3==100) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
     
  }
  else if (value3==110) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
  }
  else if (value3==120) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);

  }
  else if (value3==130) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
  }



 if(value==1){
    
    analogWrite(5,value3-10);
analogWrite(3,0);

    
    }
   else if(value==0){
    
    analogWrite(3,value3-10);
analogWrite(5,0);

    }













    }
      else if(value4==2){
    
  

    
    



if(Distance<10 and sense==0){
  value3=value3+10;
 sense=1;
  delay(100);
  
  }

else if(Distance>9 and sense==1){
  
  sense=0;
  delay(100);
  
  }

    
      if ( value3<50) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 myservo.write(0);
  }
  else if (value3==50) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
         myservo.write(20);
    
  }
  else if ( value3==60) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
        myservo.write(40);
     
  }
  else if ( value3==70) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
       myservo.write(60);
  }
    else if ( value3==80) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
       myservo.write(80);
  }
  else if(value3==90) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
      myservo.write(100);
  }
  else if ( value3==100) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
       myservo.write(120);
  }
  else if (value3==110) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      myservo.write(140);
  }
  else if (value3==120) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 myservo.write(160);
  }
  else if (value3==130) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      myservo.write(180);
  }

    analogWrite(3,0);
analogWrite(5,0);


      }
    
  


 }
