int Trigpin = 6;
int Echopin = 3;
int Distance = 0;
int Distance2 = 0;
int Duration = 0;
int inch = 0;
int value = 0;
int a = 4;
int b = 5;
int c = 7;
int d = 8;
int e = 9;
int f = 10;
int g = 11;
int sense=0;
int sense2=0;
float Speed_of_sound = 0.034;
int buttonvalue=0;
int buttonvalue2=0;
int value2=0;
int value3=0;
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
buttonvalue=analogRead(A0);
  Serial.print(buttonvalue);
  Serial.print("buttonvalue   ");

buttonvalue2=digitalRead(2);
  Serial.print(buttonvalue2);
  Serial.print("buttonvalue2   ");

  Serial.print(value2);
  Serial.print("value2   ");

 
  Serial.print(sense);
  Serial.print("sense   ");
  Serial.println();
if(buttonvalue2==0){
  if(value3==0){
    value3=1;
    delay(100);
    
    }
  
   else if(value3==1){
    value3=0;
    delay(100);
    
    }
  
  
  }




if(value3==0){
if(buttonvalue>200){
if (sense==0){
if(Distance<20){
  if(value==0){
    value=1;
    
    }
   else if(value==1){
    value=2;
    
    }
   else if(value==2){
    value=3;
    
    }
   else if(value==3){
    value=4;
    
    }
     else if(value==4){
    value=5;
    
    }
     else if(value==5){
    value=6;
    
    }
     else if(value==6){
    value=7;
    
    }
     else if(value==7){
    value=8;
    
    }
     else if(value==8){
    value=9;
    
    }
     else if(value==9){
    value=10;
    
    }
      else if(value==10){
    value=11;
    
    }
      else if(value==11){
    value=12;
    
    }
      else if(value==12){
    value=13;
    
    }
      else if(value==13){
    value=14;
    
    }
      else if(value==14){
    value=15;
    
    }
      else if(value==15){
    value=16;
    
    }
      else if(value==16){
    value=17;
    
    }
      else if(value==17){
    value=18;
    
    }
      else if(value==18){
    value=19;
    
    }
      else if(value==19){
    value=0;
    
    }
    sense=1;
    delay(100);
  }}
}
else if(buttonvalue<5){
if (sense==0){
if(Distance<20){
  if(value==0){
    value=19;
    
    }
   else if(value==1){
    value=0;
    
    }
   else if(value==2){
    value=1;
    
    }
   else if(value==3){
    value=2;
    
    }
     else if(value==4){
    value=3;
    
    }
     else if(value==5){
    value=4;
    
    }
     else if(value==6){
    value=5;
    
    }
     else if(value==7){
    value=6;
    
    }
     else if(value==8){
    value=7;
    
    }
     else if(value==9){
    value=8;
    
    }
      else if(value==10){
    value=9;
    
    }
      else if(value==11){
    value=10;
    
    }
      else if(value==12){
    value=11;
    
    }
      else if(value==13){
    value=12;
    
    }
      else if(value==14){
    value=13;
    
    }
      else if(value==15){
    value=14;
    
    }
      else if(value==16){
    value=15;
    
    }
      else if(value==17){
    value=16;
    
    }
      else if(value==18){
    value=17;
    
    }
      else if(value==19){
    value=18;
    
    }
    sense=1;
    delay(100);
  }}
}}












else if (value3==1){
 if(buttonvalue>300){
if (sense2==0){
  if(value==0){
    value=1;
    
    }
   else if(value==1){
    value=2;
    
    }
   else if(value==2){
    value=3;
    
    }
   else if(value==3){
    value=4;
    
    }
     else if(value==4){
    value=5;
    
    }
     else if(value==5){
    value=6;
    
    }
     else if(value==6){
    value=7;
    
    }
     else if(value==7){
    value=8;
    
    }
     else if(value==8){
    value=9;
    
    }
     else if(value==9){
    value=10;
    
    }
      else if(value==10){
    value=11;
    
    }
      else if(value==11){
    value=12;
    
    }
      else if(value==12){
    value=13;
    
    }
      else if(value==13){
    value=14;
    
    }
      else if(value==14){
    value=15;
    
    }
      else if(value==15){
    value=16;
    
    }
      else if(value==16){
    value=17;
    
    }
      else if(value==17){
    value=18;
    
    }
      else if(value==18){
    value=19;
    
    }
      else if(value==19){
    value=0;
    
    }
    sense2=1;
    delay(100);}}

    









else if(buttonvalue<5){
if (sense2==0){
   if(value==0){
    value=19;
    
    }
   else if(value==1){
    value=0;
    
    }
   else if(value==2){
    value=1;
    
    }
   else if(value==3){
    value=2;
    
    }
     else if(value==4){
    value=3;
    
    }
     else if(value==5){
    value=4;
    
    }
     else if(value==6){
    value=5;
    
    }
     else if(value==7){
    value=6;
    
    }
     else if(value==8){
    value=7;
    
    }
     else if(value==9){
    value=8;
    
    }
      else if(value==10){
    value=9;
    
    }
      else if(value==11){
    value=10;
    
    }
      else if(value==12){
    value=11;
    
    }
      else if(value==13){
    value=12;
    
    }
      else if(value==14){
    value=13;
    
    }
      else if(value==15){
    value=14;
    
    }
      else if(value==16){
    value=15;
    
    }
      else if(value==17){
    value=16;
    
    }
      else if(value==18){
    value=17;
    
    }
      else if(value==19){
    value=18;
    
    }
    sense2=1;
    delay(100);}}
  }



  if (sense2==1 and buttonvalue<300 and buttonvalue>5){
sense2=0;
delay(500);}


  
if (sense==1 and Distance >19){
sense=0;
delay(500);


}



      if (value==0) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
     digitalWrite(13, LOW);
  }
  else if (value==1) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(13, LOW);
  }
  else if (value==2) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
      digitalWrite(13, LOW);
  }
  else if (value==3) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(13, LOW);
  }
    else if (value==4) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      digitalWrite(13, LOW);
  }
  else if(value==5) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
       digitalWrite(13, LOW);
  }
  else if (value==6) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(13, LOW);
  }
  else if (value==7) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
      digitalWrite(13, LOW);
  }
  else if (value==8) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(13, LOW);
  }
  else if (value==9) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(13, LOW);
  }


else if (value==10) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
     digitalWrite(13, HIGH);
  }
  else if (value==11) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
 digitalWrite(13, HIGH);
  }
  else if (value==12) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
   digitalWrite(13, HIGH);
  }
  else if (value==13) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
 digitalWrite(13, HIGH);
  }
    else if (value==14) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
   digitalWrite(13, HIGH);
  }
  else if(value==15) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(13, HIGH);
  }
  else if (value==16) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
 digitalWrite(13, HIGH);
  }
  else if (value==17) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
   digitalWrite(13, HIGH);
  }
  else if (value==18) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 digitalWrite(13, HIGH);
  }
  else if (value==19) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(13, HIGH);
  }
}
