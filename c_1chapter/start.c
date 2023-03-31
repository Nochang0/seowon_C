/*
* 프로그램 내용 : 기본 시작 세팅코드
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.3.
*/

#include <stdio.h>
int main(void){
	
	int num1, num2, sum;
	printf("두정수 입력 ");
	
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	
	return 0;
}