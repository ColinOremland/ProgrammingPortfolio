int led = 9;
int brightness = 0;

void setup() {
  pinMode(led, OUTPUT);  //define LED pin as an output device
  Serial.begin(9600);    //initialize serial monitor
}

void loop() {

  int sensorValue = analogRead(A1);                //creating analog read value
  float voltage = sensorValue * (5.0 / 1023.0);    //creating raw input value into readable voltage value
  Serial.println(voltage);                         //serial output for debugging
  if (voltage <= 3.2 && voltage >= 0.8) {          //first check to see the value and determine distance
    digitalWrite(led, HIGH);                       //set LED to on state
  } else if (voltage <= 0.79 && voltage >= 0.4) {  // second check to see the value and determine distance
    digitalWrite(led, HIGH);                       //set LED to on state
    delay(200);                                    //wait 200 ms
    digitalWrite(led, LOW);                        //set LED to off state
    delay(200);                                    //wait 200 ms
  } else {                                         //everyother value or distance the LED is in an off state
    digitalWrite(led, LOW);                        //set LED to off state
  }
}
