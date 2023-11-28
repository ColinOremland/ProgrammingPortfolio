int led = 9;
int pushButton = 2;
void setup() {
 Serial.begin(9600);
 pinMode(pushButton,INPUT);
 pinMode(led, OUTPUT);
 }

void loop() {
 int buttonState = digitalRead(pushButton);
 Serial.println(buttonState);
 delay(1);
 digitalWrite(led,buttonState);
 
} 
