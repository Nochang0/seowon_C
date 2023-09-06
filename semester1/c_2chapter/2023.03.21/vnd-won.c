/*
* 프로그램 내용 : 동을 입력받아 원으로 환전해서 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.21
*/

#include <stdio.h>

int main(void) {
	
	float won, dong;
	
	printf("환전할 금액을 입력(동) : ");
	scanf_s("%f", &dong);

	won = dong * 0.06; // 동을 원으로 환전

	printf("%.0f 동은 %.0f 원입니다.", dong, won);
	
	return 0;
}