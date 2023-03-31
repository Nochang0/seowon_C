/*
* 프로그램 내용 : 10진수를 입력 받고 16진수로 변환해서 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.21
*/

#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("정수? ");
	scanf_s("%d", &num);

	printf("10진수 %d는 16진수 %x입니다.\n", num, num);
	
	return 0;
	
}