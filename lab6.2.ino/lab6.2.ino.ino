void setup() {
    Serial.begin(115200);
    int score[5] = {80, 75, 90, 85, 70};
    int sum = 0;
    float average;
    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }
    average = sum / 5.0;
    Serial.print("Average = ");
    Serial.println(average);
}

void loop() {
}