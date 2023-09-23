/*
* 프로그램 내용 : 문자열 다루기 2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.20
*/


#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "hello";
	char s2[] = "";
	int len = 0;
	
	printf("s1의 길이: %d\n", strlen(s1));
	printf("s2의 길이: %d\n", strlen(s2));
	printf("s2의 길이: %d\n", strlen("bye bye"));
		
	printf("s1의 길이: %d\n", sizeof(s1));
		
	len = strlen(s1);
	if(len > 0)
		s1[len - 1] = '\0';
	printf("s1 = %s\n", s1);
	
	return 0;
}