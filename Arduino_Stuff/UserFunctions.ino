int pushButton = 2;
void setup(){
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  }
void loop(){
  int buttonValue;
  buttonValue = myButtonPressed();
  Serial.println(buttonValue);
  delay(50);
}

int myButtonPressed(){
  int response = digitalRead(pushButton);
  return response;
}
