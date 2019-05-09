class Button {
  int x, y, w, h, v;
  String op;
  color c;
  boolean hov, asOperator;

  //multiple constructors
  Button(int x, int y, int w, int h, int v, color c) {
    this.x = x;
    this.y = y;
    this.w = w;
    this.h = h;
    this.v = v;
    this.c = c;
    hov = false;
  }

  Button asOperator(String op) {
    this.op = op;
    asOperator = true;
    return this;
  }



  void display() {
    if (asOperator) {
      if(hov){
        fill(255);
      }else{
      fill(175);
      }
      rect(x, y, w, h, 5);
      fill(0);
      textSize(26);
      textAlign(CENTER, CENTER);
      text(op, x, y-5);
    } else {
      rectMode(CENTER);
      if(hov){
        fill(255);
      }
      else{
      fill(c);
      }
      rect(x, y, w, h, 5);
      fill(0);
      textSize(26);
      textAlign(CENTER, CENTER);
      text(v, x, y);
    }
  }
  //hover method
  void HOOOVER(){
    hov = mouseX>x - w/2 && mouseX<x + w/2 && mouseY >y-h/2 && mouseY < y+h/2;
  }
  
}
