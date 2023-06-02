/*
* 프로그램 내용 : 2차원 배열의 초기화
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>
#define ROW 3
#define COL 2


int main(void) {
    int data[ROW][COL] = { {10, 20}, {30, 40}, {50, 60} };
    int i, j;
	
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) 
			printf("%3d", data[i][j]);
        printf("\n");
    }
    return 0;
}