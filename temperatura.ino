const int LED[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int LM35 = A0;
float temperatura = 0;
int ADClido = 0;
const int buzzer = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReference(INTERNAL);
  pinMode(buzzer, OUTPUT);
  for (int i = 0; i < 10; i++) {
    pinMode(LED[i], OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.println(" *C");
  digitalWrite(LED[0], HIGH);
  delay(1000);
}
