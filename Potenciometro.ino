const int pinoP= A0;
const int led = 13;
int valorPot = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPot = analogRead( pinoP );
  digitalWrite(led, HIGH);
  delay(valorPot);
  digitalWrite(led, LOW);
  delay(valorPot);
}
