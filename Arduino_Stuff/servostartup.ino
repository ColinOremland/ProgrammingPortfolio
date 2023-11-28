//importing libraries for certian functions to be used
#include <Wire.h>
#include <Servo.h>



//initializing variables
int x = 1; //creating variable x
int button1pin = 5; //making pin variable set to 5
int button2pin = 6; //making pin variable set to 6

//creating failsafe check booleans and setting to false
bool btn1DONE = false;
bool btn2DONE = false;

//setting up pin variables as inputs as board pins set to their value.
void setup() {
  pinMode(button1pin, INPUT);
  pinMode(button2pin, INPUT);

}

void loop() {
  while (digitalRead(button1pin) == LOW) { //checking to see if voltage in board pin 5 is low i.e. button is not pressed
    if (btn1DONE == true) {  //checking to see if the code has already been run as failsafe.
      break; //ending while loop.
    }
    servoPos = x; //setting servo position to position X
    x++; //incrementing x by one
  }
  btn1DONE = true; // setting failsafe boolean for button 1 to true.
  while (digitalRead(button2pin == LOW) { // checking to see if voltage in board pin 6 is low i.e. button is not pressed
  if (btn2DONE == true) { //checking to see if the code has already been run as a failsafe.
      break; //ending while loop
    }
      servoPos = x: //setting servo position to position X
      x--; //reducting x by one
  }
  btn2DONE = true; //setting failsafe boolean for button 2 to true.
}
