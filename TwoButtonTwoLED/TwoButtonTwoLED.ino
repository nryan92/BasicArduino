const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;
const int ledPin2 =  12;
const int ledPin1 =  13;
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == HIGH) {
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    // read the state of the pushbutton value:
    buttonState2 = digitalRead(buttonPin2);

    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if (buttonState2 == HIGH) {
      digitalWrite(ledPin2, HIGH);
      delay(1000);
      digitalWrite(ledPin2, LOW);
      delay(1000);
    }
  }
}
