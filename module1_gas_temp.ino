#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

#define GAS_PIN 34
#define DHT_PIN 4
#define DHT_TYPE DHT22

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  int gasValue = analogRead(GAS_PIN);
  float temperature = dht.readTemperature();

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Temp: ");
  Serial.println(temperature);

  delay(5000);
}