/*
* 프로그램 내용 : 원을 입력받아 달러로 환전해서 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.21
*/

#include <stdio.h>

int main(void) {
	
	float won, dollar;
	
	printf("환전할 금액을 입력(원) : ");
	scanf_s("%f", &won);

	dollar = won / 1310.5; // 원을 달러로 환전

	printf("%.0f 원은 %.2f 달러입니다.", won, dollar);
	
	return 0;
}