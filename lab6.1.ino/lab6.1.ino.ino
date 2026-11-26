void setup() {
  Serial.begin(115200);
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 10; i++) {
    Serial.println(numbers[i]);
  }
}

void loop() {
}