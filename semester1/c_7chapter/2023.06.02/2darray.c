/*
* 프로그램 내용 : 2차원 배열의 선언 및 사용 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>
#define ROW 3
#define COL 2


int main(void) {
	int data[ROW][COL];
	int i, j, k;
	
	for(i=0,k=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			data[i][j] = ++k;
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%3d ", data[i][j]);
		printf("\n");
	}
	
	printf("sizeof(data) = %ld\n", sizeof(data));
	printf("sizeof(data[0]) = %ld\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %ld\n", sizeof(data[0][0]));
	return 0;
}