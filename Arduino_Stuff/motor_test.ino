int motorPin1 = 13;
int motorPin2 = 12;
int motorSpeed = 3;

void setup() {
   pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorSpeed, OUTPUT);

}

void loop() {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(motorSpeed, 255);
}
