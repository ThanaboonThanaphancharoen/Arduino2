int scores[5] = {45, 55, 60, 95, 98};

void setup() {
  Serial.begin(115200);
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += scores[i];
  }
  float average = (float)sum / 5;
  Serial.print("Total: ");
  Serial.println(sum);
  Serial.print("Average: ");
  Serial.println(average);
}

void loop() {
}