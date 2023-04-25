/*
* 프로그램 내용 : 원과 유로 환율계산
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.18
*/

#include <stdio.h>

int main(void) {
    float won, euro;
	
	printf("환전할 금액(원)을 입력 >> ");
	scanf("%lf", &won);
	
	euro = won/1444.81;
	printf("%.0f원을 환전하면 %.2f유로 입니다.\n", euro);
    return 0;
} 

