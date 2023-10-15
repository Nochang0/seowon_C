/*
* 프로그램 내용 : C언어 static 변수
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.11
*/

#include <stdio.h>

void copy_arr(int a[], int b[]);

int main(void) {
	int i, a[5] = { 10, 20, 30, 25, 60 }, b[5] = {0};
	int sum = 0;
	
	copy_arr(a, b);
	for(i=0;i<5;i++){
		printf("b[%d] = %d\n", i, b[i]);
		sum += b[i];
	}
	copy_arr(a, b);
	return 0;
}

void copy_arr(int a[], int b[]) {
	register int i;
	int count = 0;
	count ++;
	
	for(i=0;i<5;i++)
		b[i] = a[i];
	printf("count = %d\n", count);
}