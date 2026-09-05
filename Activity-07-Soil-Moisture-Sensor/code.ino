int sensorPin = A0;
int moistureValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  moistureValue = analogRead(sensorPin);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  delay(1000);
}
