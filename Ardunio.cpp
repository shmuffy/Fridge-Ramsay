#include <Servo.h>
int servopin = 13;
int servopos = 60;
int buttonPin = 10;
int Motor = 11;
int ledPin = 8;
int buttonRead;
int dt = 100; 
Servo myservo;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(Motor, OUTPUT);
pinMode(buttonPin, INPUT);
myservo.attach(servopin); 

}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(dt);
if(buttonRead==1){
  myservo.write(155);
  digitalWrite(Motor, LOW);
  digitalWrite(ledPin,LOW);
}
if(buttonRead==0){
  digitalWrite(ledPin, HIGH);
  digitalWrite(Motor, HIGH);
  myservo.write(servopos);
  Serial.println("Hello");
}


}
