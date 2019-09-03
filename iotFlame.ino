int led=9;
int buzz=8;
int analog=A0;
int threshold=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(analog,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sv=analogRead(analog);
  Serial.println(sv);
  if (sv<threshold){
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
    Serial.println("FIRE.......");
    delay(2000);
  }
  else{
    Serial.println(sv);
    digitalWrite(led,LOW);
    digitalWrite(buzz,LOW);
    delay(2000);
  }
}
