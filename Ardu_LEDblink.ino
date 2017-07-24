#define led 7

void setup()
{
  pinMode(led, OUTPUT);
}


void loop()
{
  digitalWrite(led,HIGH); // turns the led on
  delay(1000); // wait for 1 second
  digitalWrite(led, LOW); // turns the led off
  delay(1000); //wait for 1 second
}

