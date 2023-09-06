/*
* 프로그램 내용 : 두 정수를 입력받아 사칙연산을 산출하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.24
*/

#include <stdio.h>

int main(void) {
	
	int num1, num2;
	
	printf("정수 2개 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d입니다.\n", num1, num2, num1 + num2);
	printf("%d - %d = %d입니다.\n", num1, num2, num1 - num2);
	printf("%d * %d = %d입니다.\n", num1, num2, num1 * num2);
	printf("%d / %d = %d입니다.\n", num1, num2, num1 / num2);
	
	return 0;
}