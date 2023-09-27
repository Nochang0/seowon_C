/*
* 프로그램 내용 : 문자열 다루기 3
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.26
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_space(const char* s);

int main(void) {
	char str[64] = "this program\ttests const pointer to string\n";
	
	puts(str);
	printf("공백 문자의 개수: %d\n", count_space(str));
	return 0;
}

int count_space(const char* s) {
	int count = 0;
	while (s[0] != '\0') {
		if (isspace(s[0]))
			count++;
		s++;
	}
	return count;
}

// gcc -std=c11