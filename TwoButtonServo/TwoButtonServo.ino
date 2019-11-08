#include <Servo.h>

Servo myservo;

int potpin = 0;
int val = 0;
const int buttonPin1 = 11;
const int buttonPin2 = 12;
int servoPin = 9;
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == HIGH) {
    Serial.println(val);
    myservo.write(val++);

  }
  if (buttonState2 == HIGH) {
    Serial.println("Button 2 is on");
    myservo.write(val--);
    delay(15);

  }
}