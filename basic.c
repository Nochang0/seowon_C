/*
* 프로그램 내용 : 
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.
*/


#include <stdio.h>

int main(void) { // 다른나라 화폐 값을 입력받아 원화로 출력
	
	float rate = 1324.0;   // 환율 (선생님이 환율을 주시면 수정)
	float won; // 원
	float different_rate; // 다른나라 화페 (달러, 위안 등)
	
	printf("환전할 금액을 입력(다른나라 화폐) : "); // '다른나라 화폐' 텍스트 수정, 
	scanf("%f", &different_rate);

	won = different_rate * rate; // 다른나라 화폐를 원으로 환전

	printf("%.0f 달러는 %.2f 원입니다.\n", different_rate, won); // '달러' 텍스트 필요하면 수정, 원으로 출력
	
	return 0;
}
// gcc basic.c -o basic.out && ./basic.out


