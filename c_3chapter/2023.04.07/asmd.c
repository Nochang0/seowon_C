/*
* 프로그램 내용 : 두 실수를 받아 사칙연산하여 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.07
*/

#include <stdio.h>

int main(void) {

	double x = 0, y = 0;

	printf("두 개의 실수를 입력하세요 : ");
	scanf("%lf %lf", &x, &y);

	printf("+%f = %f\n", x, +x);
	printf("-%f = %f\n", y, -y);
	printf("%f + %f = %f\n", x, y, x+y);
	printf("%f - %f = %f\n", x, y, x-y);
	printf("%f * %f = %f\n", x, y, x*y);
	printf("%f / %f = %f\n", x, y, x/y);
	
	return 0;

}
