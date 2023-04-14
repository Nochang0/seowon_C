/*
* 프로그램 내용 : 원의 면적을 구하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.07
*/


#include <stdio.h>
#define PI 3.14

int main(void) {

	double radius = 0;
	double area = 0;
	
	printf("반지름? ");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	printf("원의 면적: %2.f\n", area);
	printf("PI = %.2f\n", PI);
	
	return 0;

}
