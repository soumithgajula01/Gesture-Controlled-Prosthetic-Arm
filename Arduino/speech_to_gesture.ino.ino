#include <Servo.h>

// Order: Pinky, Ring, Middle, Index, Thumb
Servo pinky, ring, middle, indexF, thumb;

// Track current positions
int pPos = 90, rPos = 90, mPos = 90, iPos = 90, tPos = 90;

void setup() {
  Serial.begin(9600);

  pinky.attach(3);
  ring.attach(9);
  middle.attach(10);
  indexF.attach(11);
  thumb.attach(12);

  setAll(90,90,90,90,90);
}

void loop() {

  if (Serial.available()) {

    String input = Serial.readStringUntil('\n');
    input.trim();

    for (int i = 0; i < input.length(); i++) {

      char l = toupper(input[i]);
      performGesture(l);
    }
  }
}
// ---------- SET ALL ----------
void setAll(int p, int r, int m, int i, int t) {
  pinky.write(p);
  ring.write(r);
  middle.write(m);
  indexF.write(i);
  thumb.write(t);

  pPos = p;
  rPos = r;
  mPos = m;
  iPos = i;
  tPos = t;
}

// ---------- SMOOTH MOVE FROM CURRENT ----------
void smoothMove(int p, int r, int m, int i, int t) {

  for (int step = 0; step <= 50; step++) {

    pinky.write(map(step, 0, 50, pPos, p));
    ring.write(map(step, 0, 50, rPos, r));
    middle.write(map(step, 0, 50, mPos, m));
    indexF.write(map(step, 0, 50, iPos, i));
    thumb.write(map(step, 0, 50, tPos, t));

    delay(20);
  }

  // update current positions
  pPos = p;
  rPos = r;
  mPos = m;
  iPos = i;
  tPos = t;
}

// ---------- GESTURES ----------
void performGesture(char l) {

  switch(l) {

    case 'A': smoothMove(0,0,0,0,0); break;

    case 'B': smoothMove(90,90,90,90,0); break;

    case 'C': smoothMove(30,30,30,30,15); break;

    case 'D': smoothMove(0,0,0,90,0); break;

    case 'E':
      smoothMove(20,20,20,20,90);
      delay(300);
      smoothMove(20,20,20,20,0);
      break;

    case 'F': smoothMove(90,90,90,10,10); break;

    case 'G': smoothMove(0,0,0,90,0); break;

    case 'H': smoothMove(0,0,90,90,0); break;

    case 'I': smoothMove(90,0,0,0,0); break;

    case 'J': smoothMove(90,0,0,0,0); break;

    case 'K': smoothMove(90,90,35,60,0); break;

    case 'L': smoothMove(0,0,0,90,90); break;

    case 'M':
      smoothMove(pPos,rPos,mPos,iPos,0);
      delay(300);
      smoothMove(0,0,0,0,0);
      break;

    case 'N':
      smoothMove(0,0,mPos,iPos,tPos);
      delay(300);
      smoothMove(0,0,mPos,iPos,0);
      delay(300);
      smoothMove(0,0,0,0,0);
      break;

    case 'O': smoothMove(30,30,25,20,0); break;

    case 'P': smoothMove(90,90,35,60,0); break;

    case 'Q': smoothMove(0,0,0,90,0); break;

    case 'R': smoothMove(0,0,90,90,0); break;

    case 'S':
      smoothMove(0,0,0,0,90);
      delay(300);
      smoothMove(0,0,0,0,10);
      break;

    case 'T':
      smoothMove(0,rPos,mPos,iPos,tPos);
      delay(200);
      smoothMove(0,0,mPos,iPos,tPos);
      delay(200);
      smoothMove(0,0,0,iPos,tPos);
      delay(200);
      smoothMove(0,0,0,iPos,0);
      delay(200);
      smoothMove(0,0,0,0,0);
      break;

    case 'U': smoothMove(0,0,90,90,0); break;

    case 'V': smoothMove(0,0,90,90,0); break;

    case 'W': smoothMove(0,90,90,90,0); break;

    case 'X': smoothMove(0,0,0,45,0); break;

    case 'Y': smoothMove(90,0,0,0,90); break;

    case 'Z': smoothMove(0,0,0,60,0); break;

    default: smoothMove(90,90,90,90,90); break;
  }

  delay(1000);

  // return to neutral properly
  smoothMove(90,90,90,90,90);

  delay(1000);
}