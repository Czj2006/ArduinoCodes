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
float Speed_of_sound = 0.034;
void setup() {
  pinMode(Trigpin, OUTPUT);
  pinMode(Echopin, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin (9600);
    pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

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
  Serial.print(" Distance2: ");
  Serial.print(Distance2);
  Serial.print("inch");
  Serial.print(" value: ");
  Serial.print(value);

 
  Serial.println();
  
  if (Distance2<10){
 if (value=0) {
   value=1;
 
  }
  else if (value=1) {
   value=2;

  }
  else if  (value=2) {
   value=3;
  
  }
  else if  (value=3) {
  value=4;

  }
  else if  (value=4) {
   value=5;
  
  }
  else if  (value=5) {
   value=6;
   
  }
  else if  (value=6) {
 value=7;

  }
  else if (value=7) {
   value=8;
  
  }
  else if  (value=8) {
  value=9;

  }
  else if  (value=9) {
  value=0;
   
  }
    }
  

 
   

  if (value=0) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
 
  }
  else if (value=1) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);

  }
  else if (value=2) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  
  }
  else if (value=3) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);

  }
    else if (value=4) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  
  }
  else if(value=5) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
   
  }
  else if (value=6) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);

  }
  else if (value=7) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  
  }
  else if (value=8) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);

  }
  else if (value=9) {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
   
  }



}
