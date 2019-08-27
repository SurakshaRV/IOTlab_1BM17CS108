int led=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char data=Serial.read();
    Serial.println(data);
    if(data=='h'){
      digitalWrite(led,HIGH);
      delay(1000);
    }
    else if(data=='l'){
      digitalWrite(led,LOW);
      delay(1000);
    }
  }
}
