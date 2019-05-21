// made by Colin Oremland november 30, 2018
// spaceshipgame
//to do: enemy ship, stars, missle, health,
ArrayList<Missle> missles;
boolean turret;
boolean canFire;
int score = 0;
int shotsFired = 0;
int hits = 0;

Spaceship goodShip;
EnemyShip badShip;
Missle goodMissle;
EnemyMissle badMissle;
Star stars;
Timer time;

void setup() {
  size(900, 700);
  background(0);
  goodShip = new Spaceship(10, 3);
  badShip = new EnemyShip(width/2, 40, 35, 2, 5);
  goodMissle = new Missle(width/2 - 80, 20, 10);
  badMissle = new EnemyMissle(1);
  frameRate(20);
  stars = new Star();
  missles = new ArrayList<Missle>();
  turret = true;
  canFire = true;
}

void draw() {
  background(0);

  if (badShip.x <= 40) {
    badShip.xs *= -1;
  } else if (badShip.x >= width - 40) {
    badShip.xs *= -1;
  }

  badShip.move();
  badShip.display();
  //collision detection
  for (int i = 0; i<missles.size(); i++) {
    if (dist(missles.get(i).x, missles.get(i).y, badShip.x, badShip.y) < badShip.r) {
      missles.remove(i);
      canFire = true;
      hits++;
      if (badShip.h <= 1) {
        badShip.x = -600;
        score += 800;
        
      } else {
        badShip.h -= 1;
        
      }
    }
  }

 // badMissle.display(width/2 - 70, 20);
  stars.display();



  for (int i = 0; i<missles.size(); i++) {
    missles.get(i).fire();
    missles.get(i).display();
    if (missles.get(i).reachTop()) {
      canFire = true;
      missles.remove(i);
    }
  }
  goodShip.display(mouseX, height - 50);
  updateDisplay();
}


void updateDisplay() {
  stroke(255);
  line(0, 20, width, 20);
  stroke(0);
  textAlign(CENTER);
  textSize(10);
  fill(255);
  text("Score: " + score, width - 60, 12);
  text("Lives", 60, 12);
  if(shotsFired >= 1){
  text("Efficiency: " + hits/shotsFired*100 + "%", width/2, 15);
  }
}




void mouseReleased() {
  shotsFired++;
  if (canFire) {
    if (turret) {
      missles.add(new Missle(mouseX - 15, height - 50, 20));
      canFire = false;
      turret = false;
      
    } else {
      missles.add(new Missle(mouseX + 15, height - 50, 20));
      canFire = false;
      turret = true;
     
    }
  }
}
