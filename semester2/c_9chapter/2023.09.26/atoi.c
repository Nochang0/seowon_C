/*
* 프로그램 내용 : 문자열 다루기 2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.26
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[] = "123";
	char s1[] = "12.34";
	int i;
	double f;
	
	i = atoi(s);
	f = atoi(s1);
	printf("i = %d, f = %lf \n", i, f);
	
	return 0;
}