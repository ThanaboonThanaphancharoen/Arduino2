#define LED_PIN 17
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  for (int i = 1; i <= 10; i++){
    if (i == 5)
      break;
    Serial.println(i);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
  }

  for (int i = 10; i >= 1; i--) {
    if (i == 7)
      continue;
    Serial.println(i);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
  }
}


void loop() {
}