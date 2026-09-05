int motorPin1 = 8;
int motorPin2 = 9;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Motor ON - Forward direction
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);

  delay(3000);

  // Motor OFF
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);

  delay(2000);
}
