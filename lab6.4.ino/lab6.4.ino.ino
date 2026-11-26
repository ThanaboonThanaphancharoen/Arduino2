const int ledPins[3] = {12, 2, 15};
void setup() {

    for (int i = 0; i < 3; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < 3; i++) {
        digitalWrite(ledPins[i], LOW);
        delay(500);
        digitalWrite(ledPins[i], HIGH);
        delay(500);
    }
}