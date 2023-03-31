/*
* 프로그램 내용 : 정수 2개를 각각 양수 음수로 받아서 더하여 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.3.24
*/

#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("정수 2개를 양수 음수로 따로 입력해주세요\n>> ");
	scanf("%d %d", &num1, &num2);

	printf("\n합은 %d입니다.\n", num1 + num2);

	return 0;
}

// gcc pnm.c -o pnm.out && ./pnm.out
