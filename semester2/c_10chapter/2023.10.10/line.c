/*
* 프로그램 내용 : C언어 LINE 구조체의 정의 및 사용
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.10
*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>


typedef struct point {
	int x, y;
} POINT;

typedef struct line {
	POINT start, end;
} LINE;

double get_length(const LINE *ln);


int main(void) {
	LINE ln1 = {{10,20}, {30,40} };
	
	printf("직선의 시작점: (%d, %d)\n", ln1.start.x, ln1.start.y);
	printf("직선의 끝점: (%d, %d)\n", ln1.end.x, ln1.end.y);
	printf("직선의 길이: %f\n", get_length(&ln1)); 
	return 0;
}

double get_length(const LINE *ln) {
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y; 
	return sqrt(dx*dx + dy * dy);
}