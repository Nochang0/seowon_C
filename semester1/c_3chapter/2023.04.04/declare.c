/*
* 프로그램 내용 : 변수의 선언과 사용
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.04
*/

#include <stdio.h>

int main(void) {

	int num;
	float sum;
	
	printf("수를 입력: ");
	scanf("%d", &num);
	
	sum = num * (num + 1) * 0.5;
	printf("sum = %.1f\n", sum);
	
	return 0;

}