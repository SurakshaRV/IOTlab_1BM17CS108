int analogpin=0;
void setup()
{
  pinMode(analogpin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  float value=analogRead(analogpin);
  float mv1=(value/1024)*5000;
  float tc=mv1/10;
  Serial.print("Temperature in Celsius:");
  Serial.println(tc);
  float tf=(tc*(9/5))+32;
  Serial.print("Temperature in Farenheit:");
  Serial.println(tf);
  delay(1000);
  
}
