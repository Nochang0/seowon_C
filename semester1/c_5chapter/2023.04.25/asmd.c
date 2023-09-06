/*
* 프로그램 내용 : 사칙연산 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.25
*/
#include <stdio.h>

int main(void) 
{
    int a, b;
	char op;
	
	printf("수식? ");
	scanf("%d %c %d", &a, &ap, &b);
	
	if(op == "+"){
		printf("%d + %d = %d\n", a, b, a+b);
	} else {
		printf("%d - %d = %d\n", a, b, a-b);
	}

    return 0;
}
