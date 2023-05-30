/*
* 프로그램 내용 : 프로그래밍 배열 복사
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.30
*/

#include <stdio.h>

int main(void) {
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };
	int i;
	
	
	for(i=0;i<5;i++){
		y[i] = x[i];
	}
	
	printf("y = ");
	
	for(i=0;i<5;i++)
		printf("%d ", y[i]);
	printf("\n");
	
	return 0;
}