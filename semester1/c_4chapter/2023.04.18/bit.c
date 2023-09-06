/*
* 프로그램 내용 : 비트 이동 연산자의 사용 예제
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.18
*/

#include <stdio.h>

int main(void) {
    int x = 0x00000012;
	int y = x << 4;
	int z = x >> 4;
	
	printf("x = %#08x, %d\n", x, x);
	printf("y = %#08x, %d\n", y, y);
	printf("z = %#08x, %d\n", z, z);
	
    return 0;
} 
