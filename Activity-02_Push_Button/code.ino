const int BUTTON_PIN = 2; // Digital pin connected to the pushbutton
const int LED_PIN = 13;   // Digital pin connected to the LED

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // Activates the internal resistor, pulling the pin HIGH by default.
  // The button must connect pin 2 directly to Ground (GND).
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  // Inverted logic: when the button is pressed, the pin connects to GND (LOW)
  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);  // Turn LED on
  } else {
    digitalWrite(LED_PIN, LOW);   // Turn LED off
  }
}
