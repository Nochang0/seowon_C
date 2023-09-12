/*
* 프로그램 내용 : 포인터 변수 응용 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.12
*/


#include <stdio.h>

void test1(int x){
	x = 20;
}

void test2(int *p){
	*p = 20;
}


int main(void) {
	int x = 10;
	test1(x);
	printf("test1 호출 후 x = %d\n", x);
	
	test2(&x);
	printf("test2 호출 후 x = %d\n", x);
		
	return 0;
}