int photovalue = 0;
int value = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;
int buttonvalue = 0;
int buttonvalue2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop()
{
  photovalue = analogRead(A0);
  Serial.print("photovalue:");
  Serial.print(photovalue);
  Serial.println();
  buttonvalue = digitalRead(2);
  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  Serial.println();
  buttonvalue2 = digitalRead(8);
  Serial.print("buttonvalue2:");
  Serial.print(buttonvalue2);
  Serial.println();
  Serial.print("value2:");
  Serial.print(value2);
  Serial.println();
  int value = map(photovalue, 600, 0, 0, 255);

  if (buttonvalue == 0)
  {  if (value2 == 0)
  { value2 = 1;
  delay(1000);
  }
  else if (value2 == 1)
  {value2 = 2;
   delay(1000);
  }
  else if (value2 ==2)
  { value2 = 3;
   delay(1000);
  }
  else if (value2 ==3)
  { value2 = 4;
   delay(1000);
  }
  else if (value2 ==4)
  { value2 = 5;
   delay(1000);
  }
  else if (value2 ==5)
  { value2 = 0;
   delay(1000);
  }
  
  }
  if (buttonvalue2 == 1)
  {value2=random(0,5);
  delay(100);
  }
  if (value2 == 0) {
    analogWrite(3, value);
    if (photovalue > 600)
    {
      analogWrite (3, 0);
    }
    analogWrite(5, 0);
    analogWrite(6, 0);
  }

  else if (value2 == 1) {
    analogWrite(5, value);
     analogWrite(3, value);
    if (photovalue > 600)
    {
      analogWrite (5, 0);
       analogWrite(3, 0);
    }
   
    analogWrite(6, 0);
  }
  else if (value2 == 2) {
analogWrite(5, value);
    if (photovalue > 600)
    {
      analogWrite (5, 0);
    }
    analogWrite(3, 0);
    analogWrite(6, 0);}
else if (value2 == 3) {
    analogWrite(6, value);
    analogWrite(5, value);
    if (photovalue > 600)
    {
      analogWrite (6, 0);
      analogWrite(5, 0);
    }
 
    analogWrite(3, 0);
  }
  else if (value2 == 4) {
    analogWrite(6, value);
    if (photovalue > 600)
    {
      analogWrite (6, 0);
    }
    analogWrite(5, 0);
    analogWrite(3, 0);
  }
  else if (value2 == 5) {
    analogWrite(6, value);
     analogWrite(3, value);
    if (photovalue > 600)
    {
      analogWrite (6, 0);
       analogWrite(3, 0);
    }
    analogWrite(5, 0);
  
  }
 



}
