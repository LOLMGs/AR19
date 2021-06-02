/*
 예제 9.1
 피에조 부저를 이용한 소리 출력
*/

int buzzerPin = 9;

const int C = 3;
const int E = 5;
const int G = 6;

void setup() {
  pinMode(buzzerPin,OUTPUT);
  pinMode(C, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(G, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(C) == LOW){
    tone(buzzerPin,262,100);
  }
  if(digitalRead(E) == LOW){
    tone(buzzerPin,330,100);
  }
  if(digitalRead(G) == LOW){
    tone(buzzerPin,392,100);
  }
}  

//  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
//  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
