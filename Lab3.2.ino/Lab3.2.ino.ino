#define LED_PIN  17
#define LED_PIN2  15
#define LED_PIN3  2
#define LED_PIN4  12
#define SW1 16
#define SW2 14

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(LED_PIN4, OUTPUT);
    pinMode(SW1, INPUT_PULLUP);
    pinMode(SW2, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(SW1) == LOW) {
        digitalWrite(LED_PIN, LOW);
        digitalWrite(LED_PIN3, LOW);
    } else {
        digitalWrite(LED_PIN, HIGH);
        digitalWrite(LED_PIN3, HIGH);
    }
            if (digitalRead(SW2) == LOW) {
        digitalWrite(LED_PIN2, LOW);
        digitalWrite(LED_PIN4, LOW);
    } else {
        digitalWrite(LED_PIN2, HIGH);
        digitalWrite(LED_PIN4, HIGH);
 }
}
