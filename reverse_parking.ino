#include <LiquidCrystal.h>

const int trigPin = 3;

const int echoPin = 2;
int buzzor=13;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // select the pins used on the LCD panel

void setup() {

lcd.begin(16, 2); // start the library

lcd.setCursor(0,0); // set the LCD cursor position
Serial.begin(9600);

pinMode(buzzor,OUTPUT);
}

void loop()

{

// establish variables for duration of the ping,

// and the distance result in inches and centimeters:

long duration, inches, cm;

lcd.setCursor(0,1); // move cursor to second line "1" and 0 spaces over

// The sensor is triggered by a HIG
pinMode(trigPin, OUTPUT);

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

// Read the signal from the sensor: a HIGH pulse whose

// duration is the time (in microseconds) from the sending

// of the ping to the reception of its echo off of an object.

pinMode(echoPin, INPUT);

duration = pulseIn(echoPin, HIGH);

// convert the time into a distance

inches = microsecondsToInches(duration);

cm = microsecondsToCentimeters(duration);

lcd.print(inches);

lcd.print("in, ");

Serial.print(inches);
Serial.println("in");

lcd.print(cm);

lcd.print("cm");

if(cm<6)
{
digitalWrite(buzzor,HIGH);
delay(3000);
}
else
{
digitalWrite(buzzor,LOW);
}

Serial.print(cm);
Serial.println("cm");

delay(1000);

}

long microsecondsToInches(long microseconds)

{

return microseconds / 74 / 2;

}

long microsecondsToCentimeters(long microseconds)

{ return microseconds / 29 / 2;}
