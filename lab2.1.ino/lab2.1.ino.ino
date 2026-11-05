int counter = 0;
int age = 15;
float temperature = 28.5;
char grade = 'A';
bool ledStatus = true;

void setup() {
    Serial.begin(115200);

    Serial.println("=== Variable Example ===");

    Serial.print("Age = ");
    Serial.println(age);

    Serial.print("Temperature = ");
    Serial.println(temperature);

    Serial.print("Grade = ");
    Serial.println(grade);

    Serial.print("LED Status = ");
    Serial.println(ledStatus);
}

void loop() {
 //counter = counter + 2;
 counter+=20;
 //counter++;
 //counter--;
    Serial.print("Counter = ");
    Serial.println(counter);

    delay(1000);
}