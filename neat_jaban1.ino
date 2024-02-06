int red=3;

void setup()
{
  pinMode(red, OUTPUT);

}

void loop()
{
  
 analogWrite(red, 0);
delay(1000);
analogWrite(red, 65);
delay(1000);
analogWrite(red,128);
delay(1000);
analogWrite(red,255);
delay(1000); 
  }