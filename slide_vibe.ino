int slidePin = A0;
int vibePin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(slidePin, OUTPUT);
  pinMode(vibePin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int slideVal = analogRead(slidePin);
  if (slideVal < 1000) {
    delay(slideVal);
    analogWrite(vibePin, HIGH);
    delay(slideVal);
    analogWrite(vibePin, LOW);
  }

}
