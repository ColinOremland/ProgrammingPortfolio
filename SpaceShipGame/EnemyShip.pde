class EnemyShip {
  int x, y, r, h;
  float xspeed;
  int xs;
  

  EnemyShip(int x, int y, int R, int H, int xs) {
    this.x = x;
    this.y = y;
    this.r = R;
    this.h = H;
    this.xs = xs;
    
    
  }

  void display() {
    rectMode(CENTER);
    if(h == 2){
    fill(255, 0, 0);
    }
    else if(h == 1){
      fill(255, 230, 0);
    }
    rect(x, y, 40, 20);  
    fill(255);
    rect(x + 25, y, 10, 3);
    rect(x - 25, y, 10, 3);
    fill(255, 0, 0);
    rect(x + 35, y, 10, 30);
    rect(x - 35, y, 10, 30);
    
  }
  
  
  void move(){
    x += xs;
  }
  
  
}
