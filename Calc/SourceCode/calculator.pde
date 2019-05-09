Button[] numBtns = new Button[10];
Button[] opBtns = new Button[5];
//Button btn0, btn1, btn2, btn3, btn4, btn5, btn6, btn7, btn8, btn9;
//Button btnPlus, btnMinus, btnDivide, btnMultiply;
void setup() {
  size(250, 300);
  numBtns[0] = new Button(100, 275, 90, 46, 0, color(155));
  numBtns[1] = new Button(75, 225, 45, 45, 1, color(155));
  numBtns[2] = new Button(125, 225, 45, 45, 2, color(155));
  numBtns[3] = new Button(175, 225, 45, 45, 3, color(155));
  numBtns[4] = new Button(75, 175, 45, 45, 4, color(155));
  numBtns[5] = new Button(125, 175, 45, 45, 5, color(155));
  numBtns[6] = new Button(175, 175, 45, 45, 6, color(155));
  numBtns[7] = new Button(75, 125, 45, 45, 7, color(155));
  numBtns[8] = new Button(125, 125, 45, 45, 8, color(155));
  numBtns[9] = new Button(175, 125, 45, 45, 9, color(155));
  opBtns[0] = new Button(225, 275, 45, 45, 0, color(155)).asOperator("+");
  opBtns[1] = new Button(225, 225, 45, 45, 0, color(155)).asOperator("-");
  opBtns[2] = new Button(225, 175, 45, 45, 0, color(155)).asOperator("÷");
  opBtns[3] = new Button(225, 125, 45, 45, 0, color(155)).asOperator("x");
  opBtns[4] = new Button(175, 275, 45, 45, 0, color(155)).asOperator("=");
}

void draw() {
  background(255);
  for (int i=0; i<numBtns.length; i++) {
    numBtns[i].display();
    numBtns[i].HOOOVER();
  }
  
  for (int i=0; i<opBtns.length; i++) {
    opBtns[i].display();
    opBtns[i].HOOOVER();
  }
  //btnPlus.display();
  //btnMinus.display();
  //btnDivide.display();
  //btnMultiply.display();
  updateDisplay();
  
}

void updateDisplay() {
  fill(91, 160, 2);
  rect(width/2, 50, 240, 60, 7);
  fill(0);
  text("0", width-20, 50);
}
