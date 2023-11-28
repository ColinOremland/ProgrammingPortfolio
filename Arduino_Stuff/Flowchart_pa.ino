void setup() {
  int x = 0;  //establish interger used for math
  Serial.begin(9600); //begin serial connection
  String my_str;  //establish display string
  String str2 = String(x);  //establish maniuplator string
  Serial.println("");   //start a blank line at the start to move everything down to make it look cleaner.
  for (int i = 0; i <= 9; i++) { 
    x++;   //progress math interger by 1
    str2 = x;   // update manipulator string to be equal to math interger
    my_str += str2; //add manioulator string to the end of display string
    Serial.println(my_str); //display new display string
  }
  for (int i = 9; i >= 0; i--) {
    my_str.remove(i, 2);    //remove 2 charcters at position i from display string
    Serial.println(my_str);  //display new display string
  }
}

void loop() {
}
