void setup() {
  // LEDs
  pinMode(7, OUTPUT);   // Sets pin 7 as output (red)
  pinMode(6, OUTPUT);   // Sets pin 6 as output (yellow)
  pinMode(5, OUTPUT);   // Sets pin 5 as output (green)

  // Pushbutton
  pinMode(2, INPUT);
}

void loop() {
  // Red light
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);

  // Green light
  digitalWrite(5, HIGH);
  delay(5000);
  digitalWrite(5, LOW);

  // Yellow light
  digitalWrite(6, HIGH);
  delay(2500);
  digitalWrite(6, LOW);
}
