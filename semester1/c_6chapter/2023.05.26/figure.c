/*
* 프로그램 내용 : 밑변과 높이를 입력받아 빗변과 각도를 구하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.26
*/

#include <math.h>
#include <stdio.h>

#define RAD_TO_DEG (45.0/atan(1))

int main(void) {
	double w, h, r, theta;
	
    printf("밑변과 높이를 입력하시오:");
	scanf("%lf %lf", &w, &h);
	
	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);
	
	printf("빗변 = %f 각도= %f\n", r, theta);
	return 0;
}

