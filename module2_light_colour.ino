#define LIGHT_PIN 35
#define COLOUR_PIN 34   // Placeholder for color sensor analog

void setup() {
  Serial.begin(115200);
}

void loop() {
  int lightValue = analogRead(LIGHT_PIN);
  int colourValue = analogRead(COLOUR_PIN);

  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print(" | Colour: ");
  Serial.println(colourValue);

  delay(5000);
}