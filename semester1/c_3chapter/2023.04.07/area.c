/*
* 프로그램 내용 : 원의 둘레와 넓이를 구하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.07
*/


#include <stdio.h>
#define PI 3.14

int main(void) {

	double area, perimeter;
	int r;
	
	printf("원의 반지름? ");
	scanf("%d", &r);

	area = PI * r * r;
	perimeter = 2 * PI * r;
	
	printf("%f\n", perimeter);
	
	return 0;

}
