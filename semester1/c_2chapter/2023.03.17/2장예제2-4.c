/*
* 프로그램명: 2장예제2-4.c
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.17
*/

#include <stdio.h>

int main(void) {
	
	float x;

	x = 12.34567;

	printf("%f\n", x);	
	printf("%.2f\n", x);	// 정밀도 (소수점 반올림 2자리까지)
	printf("%8.2f\n", x);	// 폭과 정밀도 (8자리의 폭, 소수점 반올림 2자리)
	printf("%08.2f\n", x);	// 빈자리 0으로 출력
	
	return 0;
}