int potpin = A0;
int potvalue = 0;
int buttonvalue = 2;
int buttonvalue2 = 3;
int buttonvalue3 = 4;
int pressvalue = 0;
int value2 = 0;
int rvalue=0;
int rvalue2=0;
int rvalue3=0;
int value23 = 0;
void setup() {
  pinMode(potpin, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  potvalue = analogRead(potpin);
  Serial.print("Potvalue:");
  Serial.print(potvalue);
  Serial.println();
  buttonvalue = digitalRead(2);
  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  Serial.println();
   buttonvalue3 = digitalRead(4);
  Serial.print("buttonvalue3:");
  Serial.print(buttonvalue3);
  Serial.println();
  buttonvalue2 = digitalRead(3);
  Serial.print("buttonvalue2:");
  Serial.print(buttonvalue2);
  Serial.println();
  Serial.print("pressvalue:");
  Serial.print(pressvalue);
  Serial.println();
  delay(10);



  //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

  if (buttonvalue == 0)
  { if (pressvalue == 7)
    {

      pressvalue = 0;
      delay(1000);
    }




    else if (pressvalue == 0)

    {

      pressvalue = 1;
      delay(1000);
    }
    else if (pressvalue == 1)

    {

      pressvalue = 2;
      delay(1000);
    }
    else if (pressvalue == 2)

    {

      pressvalue = 3;
      delay(1000);
    }
    else if (pressvalue == 3)

    {

      pressvalue = 4;
      delay(1000);
    } else if (pressvalue == 4)

    {

      pressvalue = 5;
      delay(1000);
    }
    else if (pressvalue == 5)

    {

      pressvalue = 6;
      delay(1000);
    }
if (pressvalue == 6)
    {

      pressvalue = 7;
      delay(1000);
    }


  }


  else if (buttonvalue == 1)


  {
    if (pressvalue == 1)

    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(9, value2);
      analogWrite(10, 0);
      analogWrite(11, 0);
    }
    else if (pressvalue == 2)
    {
      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(10, value2/2);
      analogWrite(9, value2);
      analogWrite(11, 0);


    }
    else if (pressvalue == 3)
    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(11, 0);
      analogWrite(10, value2);
      analogWrite(9, value2);

    }
    else if (pressvalue == 4)
    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(11, 0);
      analogWrite(10, value2);
      analogWrite(9, 0);

    }
    else if (pressvalue == 5)
    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(11, value2);
      analogWrite(10, value2);
      analogWrite(9, 0);

    }
    else if (pressvalue == 6)
    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(11, value2);
      analogWrite(10, 0);
      analogWrite(9, 0);

    }
    else if (pressvalue == 7)
    {

      int value2 = map(potvalue, 0, 1023, 0, 255);

      analogWrite(11, value2);
      analogWrite(10, 0);
      analogWrite(9, value2);

    }
      else if (pressvalue == 0)
    {

      analogWrite(11, 0);
      analogWrite(10, 0);
      analogWrite(9, 0);

    }
  }
  if (buttonvalue2 == 1)
  { if (pressvalue == 0)
    {

      pressvalue = 7;
      delay(1000);
    }




    else if (pressvalue == 1)

    {

      pressvalue = 0;
      delay(1000);
    }
    else if (pressvalue == 2)

    {

      pressvalue = 1;
      delay(1000);
    }
    else if (pressvalue == 3)

    {

      pressvalue = 2;
      delay(1000);
    }
    else if (pressvalue == 4)

    {

      pressvalue = 3;
      delay(1000);
    } else if (pressvalue == 5)

    {

      pressvalue = 4;
      delay(1000);
    }
    else if (pressvalue == 6)

    {

      pressvalue = 5;
      delay(1000);
    }
     else if (pressvalue == 7)

    {

      pressvalue = 6;
      delay(1000);
    }


  }

if(buttonvalue3 == 1)
{pressvalue=random(0,7);
delay(100);
}
  
  
  
}
