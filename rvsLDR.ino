int led=11;
int threshold=50;
int analog=A0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(analog,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sv=analogRead(analog);
  analogWrite(led,sv);
  Serial.println(sv);
  //delay(30);
  if(sv<threshold){
    digitalWrite(led,HIGH);
    
  }
  else
  digitalWrite(led,LOW);
  delay(1000);
}
