/*
* 프로그램 내용 : 문자열 다루기 3
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.26
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;
	
	printf("문자열? ");
	
	gets(in_str, sizeof(in_str));
	puts(in_str);
	sprintf(out_str, "%02:%02d:%02d", hour, min, sec);
	puts(out_str);
	
	return 0;
}

// gcc -std=c11