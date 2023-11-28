#include <Stepper.h>
#define STEPS 200
int potenPin = A0;
int potVal = 0;
Stepper stepper(STEPS, 8, 9, 10, 11);
int previous = 0;
void setup() {
 Serial.begin(9600);
}
 
void loop() {
 potVal = analogRead(potenPin);
 int display = map(potVal, 0, 1023, 0, 100);
// stepper.setSpeed(potVal);
 //stepper.step(STEPS/100);
 Serial.println(display);
 
 /*
 stepper.step(potenPin - previous);
 Serial.println(display);
 previous = potenPin;

 */
}
