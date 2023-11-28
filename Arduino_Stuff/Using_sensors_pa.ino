int led = 9;
int brightness = 0;
void setup() {
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 }

void loop() {
 int sensorValue = analogRead(A1);
 float voltage = sensorValue * (5.0/1023.0);
 Serial.println(brightness);
 brightness = voltage * 85;
 if(brightness >= 255){
  analogWrite(led,HIGH);
 }
 else{
 analogWrite(led,brightness);
 }
}
