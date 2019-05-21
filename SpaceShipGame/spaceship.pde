class Spaceship {
  int x, y, r, h;
  boolean switchthruster = false;

  Spaceship( int R, int H) {
    x = 0;
    y = 0;
    this.r = R;
    this.h = H;
  }

  void display(int x, int y) {
    switchthruster = !switchthruster;
    rectMode(CENTER);
    //main body
    fill(0, 0, 255);
    rect( x, y, 20, 40);
    fill( 255, 255, 255);
    triangle(x - 30, y + 20, x - 10, y - 20, x - 10, y + 20);
    triangle(x + 30, y + 20, x + 10, y - 20, x + 10, y + 20);
    triangle(x - 10, y - 20, x, y - 40, x + 10, y - 20);

    //cocpit
    fill(0);
    rect( x, y - 23, 10, 5);
    //wing turrets
    fill( 0, 255, 0);
    rect( x - 15, y + 10, 5, 5);
    rect( x + 15, y + 10, 5, 5);
    stroke(0);
    fill(0);
    rect( x + 15, y + 5, 1, 10);
    rect( x - 15, y + 5, 1, 10);
    fill(155);
    rect( x - 15, y + 15, 5, 5);
    rect( x + 15, y + 15, 5, 5);
    if (switchthruster) {
      fill( 237, 121, 26);
      rect( x + 20, y + 23, 5, 5);
      rect ( x - 20, y + 23, 5, 5);
    } else {
      fill( 237, 121, 26);
      rect( x + 20, y + 28, 5, 5);
      rect ( x - 20, y + 28, 5, 5);
    }
  }
}
