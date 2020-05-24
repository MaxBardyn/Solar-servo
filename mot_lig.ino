#include <Servo.h>

Servo myservo;  

void setup() {
  pinMode(A4,INPUT);
  Serial.begin(9600);
  myservo.attach(8); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(A4)==0){
    myservo.write(180);    
    delay(100);
  }

  else{
    myservo.write(0);
    delay(100);
  }
}
