// CrEATiOn & ComPuTation
// DIGF - 6037 - 001
// Feng, Tommy, Karo

// Code based on class examples

// Read potentiometer, activate vibrator with a frequency corresponding to the slider value

int slidePin = A0;
int vibePin = 13;

void setup() {

  // here we set the mode for the pins, one input one output
  pinMode(slidePin, OUTPUT);
  pinMode(vibePin, INPUT);

}

void loop() {

  // read slider value
  int slideVal = analogRead(slidePin);

  // if statement to turn off the vibrator if the slider is all the way to one side
  if (slideVal < 1000) {
    // turn on vibrator for a duration and then turn it off again, ie pulse
    delay(slideVal);
    analogWrite(vibePin, HIGH);
    delay(slideVal);
    analogWrite(vibePin, LOW);
  }

}
