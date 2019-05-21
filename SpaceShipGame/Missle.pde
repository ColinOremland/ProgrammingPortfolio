class Missle {
  int x, y, s;



  Missle(int x, int y, int s) {
    this.x = x;
    this.y = y;
    this.s = s;
  }






  void fire() {
    y -= s;
  }
  boolean reachTop() {

    if (y < 0) {
      return true;
    } else {
      return false;
    }
  }

  void display() {

    rectMode(CENTER);
    fill(0, 255, 0);
    rect(x, y, 5, 20);
  }
}
