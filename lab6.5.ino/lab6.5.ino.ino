#define LDR_PIN 36
const int SAMPLE_COUNT = 5;
int lightData[SAMPLE_COUNT];
void setup() {
    Serial.begin(115200);
}

void loop() {
    for (int i = 0; i < SAMPLE_COUNT; i++) {
        lightData[i] = analogRead(LDR_PIN);
        Serial.print("Sensor ");
        Serial.print(i + 1);
        Serial.print(" = ");
        Serial.println(lightData[i]);
        if (lightData[i] > 1000) {
            Serial.println("DARK");
        }
        else if (lightData[i] >= 2500) {
            Serial.println("NORMAL");
        }
        else {
            Serial.println("BRIGHT");
        }
        delay(200);
    }

    Serial.println("----------------");
    delay(1000);
}
