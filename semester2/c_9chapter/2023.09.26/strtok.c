/*
* 프로그램 내용 : 문자열의 토큰 나누기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.26
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char phone[100] = "02-123-4567";
	char *p = NULL;
	
	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);
	
	return 0;
}