int  red=11;
int yellow=12;
int green=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(500);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(2500);
  }
