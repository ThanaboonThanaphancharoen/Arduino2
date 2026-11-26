void setup() {
    Serial.begin(115200);
    int score[10] = {10, 25, 30, 45, 80,90,40,44,88,77};
    for (int i = 0; i < 10; i++) {
        if (score[i] >= 50) {
            Serial.println("PASS");
        } else {
            Serial.println("FAIL");
        }
    }
}

void loop() {
}