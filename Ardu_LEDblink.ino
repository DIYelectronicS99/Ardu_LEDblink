 #define led 7  //selects pin 7 for led 

void setup()
{
  pinMode(led, OUTPUT);  // initializes pin 7 for led output
}


void loop()
{
  digitalWrite(led,HIGH); // turns the led on
  delay(1000); // wait for 1 second
  digitalWrite(led, LOW); // turns the led off
  delay(1000); //wait for 1 second
}

