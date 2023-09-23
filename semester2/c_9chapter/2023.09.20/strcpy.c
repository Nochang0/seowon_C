/*
* 프로그램 내용 : 문자열의 교환
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.20
*/


#include <stdio.h>
#include <string.h>
#define SIZE 32

int main(void) {
	char str1[SIZE] = "";
	char str[SIZE] = "";
	char temp[SIZE];
	
	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	
	return 0;
}