int led[4] = { 17, 2, 15, 12 };
void setup() {
  Serial.begin(115200);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop() {
  for(int i =0 ; i<=3 ; i++){
  digitalWrite(led[i], LOW);
  delay(20);
  digitalWrite(led[i], HIGH);
  delay(20);}
}

  for(int i =3 ; i>=0 ; i--){
  digitalWrite(led[i], LOW);
  delay(20);
  digitalWrite(led[i], HIGH);
  delay(20);
  }
}
