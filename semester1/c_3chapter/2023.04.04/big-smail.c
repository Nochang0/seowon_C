/*
* 프로그램 내용 : 대문자를 받아 소문자와 같이 출력하기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.04
*/

#include <stdio.h>

int main(void) {

	char ch;
	
	printf("대문자를 입력>> ");
	scanf("%c", &ch); // 문자 입력
	
	ch = ch + 32;
	
	printf("대문자 %c는 소문자 %c 입니다.", ch-32, ch);
		
	return 0;

}
