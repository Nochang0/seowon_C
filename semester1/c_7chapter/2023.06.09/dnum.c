/*
* 프로그램 내용 : 배열 예제1
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.09
*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

void add_matrix(int A[][COLS], int B[][COLS], int C[][COLS]);
void print_matrix(char name[], int A[][COLS]);


int main(void) {
	int A[ROWS][COLS] = { { 2, 3, 0 }, { 8, 9, 1 }, { 7, 0, 5} };
	int B[ROWS][COLS] = { { 1, 0, 0 }, { 1, 0, 0 }, { 1, 0, 0} };
	int C[ROWS][COLS];
	
	add_matrix(A, B, C);
	print_matrix("A", C);
	print_matrix("B", C);
	print_matrix("C", C);
	return 0;
}
	
int print_matrix(char name[], int A[][COLS]) {
	int i, j;
	
	printf("\n ** %s matrix **\n", name);
	for (i=0;i<ROWS;i++) {
		for (j=0;j<COLS;j++)
			printf("%d ", A[i][j]);
		printf("\n")
	}
	return 0;
}
		 
