/*
* 프로그램 내용 : 함수 2개 이상 사용 예제
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.19
*/

#include <stdio.h>

void hi(void){
	printf("Hi! Let's enjoy C programmming.\n");
}

void bye() {printf("Bye!\n"); }

int main(void){
	hi();
	bye();
	
	hi();
	bye();
	
	return 0;
}
// gcc basic.c -o basic.out -lm && ./basic.out

