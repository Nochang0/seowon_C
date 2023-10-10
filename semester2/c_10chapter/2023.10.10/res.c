/*
* 프로그램 내용 : C언어 식당 구조체
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

typedef struct res {
	POINT p;
	char name[20];
} RES;

double get_dist(POINT p1, POINT p2);

int main(void) {
	RES res_info[5];
	int i, sz = sizeof(res_info)/sizeof(res_info[0]);
	POINT current;
	
	srand((unsigned int) time(NULL));
	
	for(i=0;i<sz;i++) {
		res_info[i].p.x = rand()%100;
		res_info[i].p.y = rand()%100;
		printf("Please enter a restaurant name >> ");
		scanf("%s", res_info[i].name);
	}
	
	while(1) {
		printf("Please, enter your current position(x,y) >> ");
		scanf("%d %d", &current.x, &current.y);
		if(current.x == -1 && current.y == -1)
			break;
	}
	return 0;
}

double get_dist(POINT p1, POINT p2) {
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	return sqrt(dx*dx + dy*dy);
}