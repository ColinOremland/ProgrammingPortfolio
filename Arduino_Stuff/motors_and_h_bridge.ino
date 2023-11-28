int motorPin1 = 13;
int motorPin2 = 12;
int motorSpeed = 6;
int varSpeed = 255;
void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorSpeed, OUTPUT);
}

void loop() {
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, LOW);
 analogWrite(motorSpeed, 255);
 delay(1000);
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, LOW);
 delay(1000);
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, HIGH);
 analogWrite(motorSpeed, 80);
 delay(1000);

 for(int i=10;i >=0;i--){
 digitalWrite(motorPin1, HIGH);
 digitalWrite(motorPin2, LOW);
 analogWrite(motorSpeed, varSpeed);
 varSpeed = varSpeed - 25;
 delay(1000);
 }
 varSpeed = 0;
 
 for(int i=0;i<=10;i++){
 digitalWrite(motorPin1, LOW);
 digitalWrite(motorPin2, HIGH);
 analogWrite(motorSpeed, varSpeed);
 varSpeed = varSpeed + 25;
 delay(1000);
 }
 varSpeed = 255;
}
