
#include <Servo.h> 

Servo myservo; 

void setup() {
  myservo.attach(9);
  Serial.begin(9600); 
  myservo.write(90); 

}

void loop() {
  // put your main code here, to run repeatedly:
}

void serialEvent() {
  while (Serial.available()) {
    char command = Serial.read();
    Serial.flush(); // Clear the serial buffer
    if (command == '0') {
      myservo.write(180); 
    }
    if (command == '1') {
      myservo.write(0); 
    }
    if (command == '2') {
      myservo.write(90); 
    }
  }
}

