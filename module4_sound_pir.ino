#define SOUND_PIN 34
#define PIR_PIN 27

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  int soundValue = analogRead(SOUND_PIN);
  int motion = digitalRead(PIR_PIN);

  Serial.print("Sound: ");
  Serial.print(soundValue);
  Serial.print(" | Motion: ");
  Serial.println(motion ? "Detected" : "None");

  delay(2000);
}