class EnemyMissle {
  int x, y, s;

  EnemyMissle(int s) {
    x = 0;
    y = 0;
    this.s = s;
  }

  void display(int x, int y) {
    rectMode(CENTER);
    fill(255, 0, 0);
    rect(x, y, 5, 20);
  }
}
