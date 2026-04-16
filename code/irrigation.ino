// Edge-AI Based Smart Irrigation System using ESP32-S3

const int moisturePin = 34;   // Analog pin (change if needed)
const int relayPin = 26;      // Relay control pin
int threshold = 2000;         // Adjust based on calibration

void setup() {
  Serial.begin(115200);

  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Pump OFF initially

  Serial.println("Smart Irrigation System Started");
}

void loop() {
  int moistureValue = analogRead(moisturePin);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // Decision Making (Edge-AI Logic)
  if (moistureValue < threshold) {
    Serial.println("Soil is Dry → Pump ON");
    digitalWrite(relayPin, HIGH);
  } else {
    Serial.println("Soil is Wet → Pump OFF");
    digitalWrite(relayPin, LOW);
  }

  delay(2000);  // Delay for stability
}
