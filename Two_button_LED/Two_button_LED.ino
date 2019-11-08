int buttonPin = 12;
int ledPin =  2;
int bbuttonpin = 11;
int lledPin = 3;
int buttonState = 0;
int buttonState2 = 0;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(lledPin, OUTPUT);
  pinMode(bbuttonpin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);

    
    buttonState2 = digitalRead(bbuttonpin);
    if (buttonState2 == HIGH) {
      digitalWrite(lledPin, HIGH);
      digitalWrite(lledPin, LOW);
      digitalWrite(13, HIGH);
      delay(50);
      digitalWrite(13, LOW);
      delay(50);
    }
  }
}
