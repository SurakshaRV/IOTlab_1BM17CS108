int led=10;
int IpPin=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(IpPin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensedVal=digitalRead(IpPin);
  //if(sensedVal){
    digitalWrite(led,sensedVal);
  //}
  //else
 // digitalWrite(led,sensedVal);
}
