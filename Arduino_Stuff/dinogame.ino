#include<Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0X27, 20, 4);

boolean dinoOnGround = true;
//declare a boolean to check if the dino is in the ground

int buttonPin = 8;

int buttonState = 0;
// a token variable to check the state of the button

int highScore = 0;

boolean playState = false;
//the game starts only when this becomes true
// This is a common method used in coding games


int score = 0;
int g = 3;


//bitmap array for the dino character
byte dino [8]
{ B00000,
  B00111,
  B00101,
  B10111,
  B11100,
  B11111,
  B01101,
  B01100,
};

//character for the tree
byte tree [8]
{
  B00011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11111,
  B01110,
  B01110
};



void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.begin(20, 4);
  lcd.createChar(7, dino);
  lcd.createChar(6, tree);
  pinMode(buttonPin, INPUT);


}

void loop() {

  lcd.clear();

  // at the start, check is playState is true or false
  if (!playState) {
    lcd.setCursor(3, 0);
    lcd.print("Press to start");
    //When it is false, print the starting instruction

    if (digitalRead(buttonPin) == HIGH) //Read the button
    {
      playState = true;
      // when button pushed, make playState true
    }

  }

  // when playState is true, call the startGame function
  if (playState)
  {
    startGame();
  }

  delay(100);
}
// the loop function ends here


// when playState is true, startGame function is called

void startGame() {

  lcd.clear();

  //Generate two random distances for the gap between the trees
  int t = 19 + random(4, 9);
  int q = 19 + random(4, 9) + random(4, 9);
  // this for loop is to make the trees move
  for (int i = 19; i--;) {

    lcd.setCursor(13, 0);
    lcd.print(score);  // print the score

    int state = digitalRead(buttonPin);
    // Read the push button


    if (state == HIGH)
    {
      buttonState = 1;



    }
    else if (state == LOW)
    {
      buttonState = 0;
    }

    //when the button is pushed, print the dino on the upper

    if (buttonState == 1) {
      lcd.setCursor(1, 2); // row and set dinoOnGround to false
      lcd.write(7);
      lcd.setCursor(1, 3);
      lcd.print(" ");
      dinoOnGround = false;


    }
    else {                         // When the button is not pushed
      lcd.setCursor(1, 3);    // print the dino on the lower row
      lcd.write(7);               // and set dinoOnGround to true
      lcd.setCursor(1, 2);
      lcd.print(" ");
      dinoOnGround = true;
    }



    // This prints the trees so that it moves with the for loop
    //  Tree 1
    lcd.setCursor(0, g);
    lcd.print(" ");
    lcd.setCursor(i, g);
    lcd.write(6);
    lcd.setCursor(i + 1, g);
    lcd.print(" ");

    // Tree 2
    lcd.setCursor(t, g);
    lcd.write(6);
    lcd.setCursor(t + 1, g);
    lcd.print(" ");


    // Tree 3
    if(q>=19){
    lcd.setCursor(0,0);
    lcd.print(" ");
    }
    else{
    lcd.setCursor(q, g);
    lcd.write(6);
    lcd.setCursor(q + 1, g);
    lcd.print(" ");
    }


    //When the trees reaches the starting point
    if (i == 0) {
      i = 19;
    }
    if (t == 0) {
      t = 19 + random(4, 9);
    }
    if (q == 0) {
      q = 19 + random(4, 9) + random(4, 9);
    }
    // they are taken to the end and set up randomly once more
    t--;
    q--;
    /*  Now check if the position of the trees
          and that of the dino coincides, but we
          only need to do this if the dino is in the ground.

         Use the dinoOnGround variable and check if the
         condition is satisfied. If so the game is over
    */



    if (i == 1 && (dinoOnGround == true))
    {
      lcd.clear();             // instructions for the game over screen
      lcd.print("YOU LOSE SUCKAA");
      if (score > highScore) {
        highScore = score;

      }
      lcd.setCursor(0, 1);
      lcd.print("HIGH SCORE : ");
      lcd.print(highScore);
      lcd.setCursor(0, 2);
      lcd.print("YOUR SCORE: ");
      lcd.print(score);
      playState = false;  //Set the playState as false so it goes to the
      delay(5000);         // start screen after the game is over
      score = 0;
      break;
    }
    else if (t == 1 && (dinoOnGround == true))
    {
      lcd.clear();
      lcd.print("YOU LOSE SUCKAA");
      if (score > highScore) {
        highScore = score;
      }
      lcd.setCursor(0, 1);
      lcd.print("HIGH SCORE : ");
      lcd.print(highScore);
      lcd.setCursor(0, 2);
      lcd.print("YOUR SCORE: ");
      lcd.print(score);
      playState = false;
      delay(5000);
      score = 0;
      break;
    }
    else if (q == 1 && (dinoOnGround == true))
    {
      lcd.clear();
      lcd.print("YOU LOSE SUCKAA");
      if (score > highScore) {
        highScore = score;

      }
      lcd.setCursor(0, 1);
      lcd.print("HIGH SCORE : ");
      lcd.print(highScore);
      lcd.setCursor(0, 2);
      lcd.print("YOUR SCORE: ");
      lcd.print(score);

      playState = false;
      delay(5000);
      score = 0;
      break;
    }
    if (dinoOnGround == true) {
      score++;
    }
    // increase the score variable for every run of the loop

    delay(500);

  }

}
