void setup() {
  // LEDs
  pinMode(7, OUTPUT);   // Sets pin 7 as output (red)
  pinMode(6, OUTPUT);   // Sets pin 6 as output (yellow)
  pinMode(5, OUTPUT);   // Sets pin 5 as output (green)

  // Pushbutton
  pinMode(2, INPUT);
}

void loop() {

  while (digitalRead(2) == HIGH) {
    // Turn non-red lights off
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);

    // Checks for the button press in between each light - probably bad coding technique :)
    if (digitalRead(2) == LOW) {
      break;
    }

    // Red light
    digitalWrite(7, HIGH);
    delay(2500);
    digitalWrite(7, LOW);

    if (digitalRead(2) == LOW) {
      break;
    }

    // Green light
    digitalWrite(5, HIGH);
    delay(2500);
    digitalWrite(5, LOW);

    if (digitalRead(2) == LOW) {
      break;
    }

    // Yellow light
    digitalWrite(6, HIGH);
    delay(2500);
    digitalWrite(6, LOW);
  }

  // Turns on all lights simultaneously
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(2500);
}
