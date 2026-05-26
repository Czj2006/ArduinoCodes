int potpin=A0;
int potvalue=0;
int potpin2=A1;
int potvalue2=0;
int potpin3=A2;
int potvalue3=0;
int value=0;
int value2=0;
int value3=0;
int buttonvalue=2;
int ispress=0;
int pressvalue=0;
int value12=0;
int value22=0;
int value32=0;
void setup() {
  pinMode(potpin,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
 pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  potvalue=analogRead(potpin);
  Serial.print("Potvalue:");
  Serial.print(potvalue);
  Serial.println();
   potvalue2=analogRead(potpin2);
  Serial.print("Potvalue2:");
  Serial.print(potvalue2);
  Serial.println();
   potvalue3=analogRead(potpin3);
  Serial.print("Potvalue3:");
  Serial.print(potvalue3);
  Serial.println();
  buttonvalue=digitalRead(2);
  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  Serial.println();
  Serial.print("pressvalue:");
  Serial.print(pressvalue);
  Serial.println();
  delay(10);


if(buttonvalue==1)
 

{
if(pressvalue==0)
 
{
 int value22=map(potvalue2,0,1023,0,255);
  int value32=map(potvalue3,0,1023,0,255);
  int value2=map(potvalue,0,1023,0,255);

analogWrite(9,value2);

 
analogWrite(10,value22);


analogWrite(11,value32);
  }
  else if (pressvalue=1)
  {    }
//hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
}
else if(buttonvalue==0)
 {if(pressvalue==1)
{

 pressvalue=0;
 delay(1000);
}




else if(pressvalue==0)
 
{
 
pressvalue=1;
delay(1000);
  }}}
