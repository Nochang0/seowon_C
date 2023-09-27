/*
* 프로그램 내용 : 문자열 다루기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.26
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char s[] = "Man is immorial, because he has a soul";
	char sep[] = " ,\t\n";
	char *token;
	
	token = strtok(s, sep);
	
	while( token != NULL ) {
		printf("token : %s\n", token);
		token = strtok(NULL, sep);
	}
	
	return 0;
}