void setup() {
  // put your setup code here, to run once:

}

void loop() {
  if(button==HIGH){//initial check to see if button is pressed
    delay(20);//delay time to weed out unwanted inputs
    if(button==HIGH){//second check to see if button is still pressed
      do function;//complete intended output.
    }
  }
  else{
    //whatever action you want to happen when the button isnt pressed.
  }

}
