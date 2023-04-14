/*
* 프로그램 내용 : 원의 반지름을 입력받아 원의 면적을 산출
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.04
*/

#include <stdio.h>

int main(void) {

	int radius;
	float pi = 3.14;
	float area;
	
	printf("반지름을 입력: ");
	scanf("%d", &radius);
	
	area = radius * radius * pi;
	printf("sum = %.2f\n", area);
	
	return 0;

}
