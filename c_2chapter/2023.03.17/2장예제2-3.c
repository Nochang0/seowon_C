/*
* 프로그램명: 2장예제2-3.c
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.17
*/

#include <stdio.h>

int main(void) {
	
	int num = 12345; //12345 값을 가진 정수형 변수 num

	printf("%d\n", num); 
	printf("%d\n", num*10);
	printf("%d\n", num*100);
	printf("%d\n", num*1000);

	printf("%8d\n", num);	// 8문자 폭에 맞춰 출력
	printf("%8d\n", num*10);
	printf("%8d\n", num*100);
	printf("%8d\n", num*1000);
	printf("%8d\n", num*100000);	// 8문자 폭을 벗어남 → 폭을 넘어서 출력

	printf("%08d\n", num);	// 폭의 남는 부분을 0으로 출력
	
	return 0;
}