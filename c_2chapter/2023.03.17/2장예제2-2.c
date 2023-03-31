/*
* 프로그램명: 2장예제2-2.c
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.17
*/

#include <stdio.h>

int main(void) {
	
	int num; // 정수형 변수 num
	float x; // 실수형 변수 x
	char ch; // 문자형 변수 ch

	num = 123; // 각각의 변수에 값 대입
	x = 1.23;
	ch = 'A';

	printf("%d %x\n", num, num); // 정수를 10진수, 16진수로 출력
	printf("%f %e\n", x, x); // 실수를 부동소수점, 지수 형식으로 출력
	printf("%c\n", ch); // 문자를 출력

	printf("%x\n", num); // 정수를 4가지 방법의 16진수로 출력
	printf("%X\n", num);
	printf("%#x\n", num); // '#' → 접두사 0x, 0X 출력
	printf("%#X\n", num);
	
	return 0;
}