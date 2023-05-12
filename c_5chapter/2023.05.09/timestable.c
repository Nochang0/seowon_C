/*
* 프로그램 내용 : 숫자를 입력받아 그 숫자의 구구단을 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.09
*/

#include <stdio.h>

int main(void) 
{
    int i, dan;
	printf("출력한 단(구구단) 입력 >> ");
	scanf("%d", &dan);
	
	printf("*****\n%d단\n*****\n", dan);
	
	for(i=0; i<10; i++){
		printf("%d * %d = %d\n", dan, i, dan*i);
	}
	return 0;
}

