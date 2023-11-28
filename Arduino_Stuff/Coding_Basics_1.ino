int ledPIN = 13; // establish and setup the port used
void setup() {
  pinMode(ledPIN, OUTPUT); //sets the port used to be an output

}

void loop() {
  digitalWrite(ledPIN, HIGH); //sets the voltage to the port to high
  delay(800); // pause the program for 800 miliseconds
  digitalWrite(ledPIN, LOW); // sets the volatge to the port to low
  delay(600); // puase the program for 600 miliseconds
}
