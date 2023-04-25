/*
* 프로그램 내용 : 네 개의 정수 값을 받아 큰 값과 작은 값 비교 후 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.18
*/

#include <stdio.h>
#define PI 3.1415
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)

int main(void) {
    int a, b, c, d;
	int max, max2, min;
	
	printf("네 개의 정수 입력 >> ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max = MAX(MAX(a, b), MAX(c, d));
	min = MIN(MIN(a, b), MIN(c, d));
	
	printf("큰 값 : %d\n", max);
	printf("작은 값 : %d\n", min);
    return 0;
} 