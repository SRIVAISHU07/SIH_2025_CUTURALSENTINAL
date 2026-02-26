#define SOIL_PIN 34
#define WATER_PIN 35

void setup() {
  Serial.begin(115200);
}

void loop() {
  int soilValue = analogRead(SOIL_PIN);
  int waterValue = analogRead(WATER_PIN);

  Serial.print("Soil Moisture: ");
  Serial.print(soilValue);
  Serial.print(" | Water Level: ");
  Serial.println(waterValue);

  delay(5000);
}