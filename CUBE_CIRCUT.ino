
void setup() {

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void allLayer() {
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  }

void noLayer() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  }

void rotate() {
  allLayer();
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  empty();
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  empty();
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  empty();
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  empty();
  noLayer();  
  }

void fill() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  }

void swirl() {
  digitalWrite(2, HIGH);
  delay(50);
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  }

void empty() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }  


void loop() {


//FULL SWIRL
//allLayer();
//swirl();
//delay(100);
//empty();
//delay(200);

// LAYER BY LAYER SWIRL
//digitalWrite(13, HIGH);
//swirl(); 
//empty();
//digitalWrite(13, LOW);
//digitalWrite(12, HIGH);
//swirl(); 
//empty();
//digitalWrite(12, LOW);
//digitalWrite(11, HIGH);
//swirl(); 
//empty();
//digitalWrite(11, LOW);
//digitalWrite(12, HIGH);
//swirl(); 
//empty();
//digitalWrite(12, LOW);


// RING OF ROTATION 
//rotate();


// ENTIRE CUBE TEST 
//allLayer();
//delay(2000);
//noLayer();


// LAYER BY LAYER TEST
//fill();
//digitalWrite(13, HIGH);
//delay(500);
//digitalWrite(13, LOW);
//digitalWrite(12, HIGH);
//delay(500);
//digitalWrite(12, LOW);
//digitalWrite(11, HIGH);
//delay(400);
//digitalWrite(11, HIGH);
//noLayer();
}
