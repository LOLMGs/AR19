/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

int number = 0;    // -32768~32767 범위의 변수 number 설정, 초기값은 0

void setup() {
  Serial.begin(9600);    // 9600bps로 시리얼 통신 설정
  Serial.println("AR19 / 20182572 / 이정호 / 야두이노 실습"); // 나만의 메시지를 출력
}

void loop() {
  Serial.print(number);    // number 변수값 출력
  Serial.println(" sec");    // " sec"를 출력 후 줄 바꿈
  delay(2000);    // 2초동안 지연시킨다. 5초로 변경하려면 2000을 5000으로 변경
  number++;    // number 변수값을 하나 증가시킨다.
}
