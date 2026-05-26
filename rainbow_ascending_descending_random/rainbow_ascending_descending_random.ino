int buttonvalue=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop()
{
  buttonvalue=digitalRead(3);
  Serial.print("buttonvalue:");
  Serial.print(buttonvalue);
  println;
  delay(10);
 
}
