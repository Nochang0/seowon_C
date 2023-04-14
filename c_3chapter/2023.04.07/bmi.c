/*
* 프로그램 내용 : 키와 몸무게를 받아 BMI 측정 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.07
*/


#include <stdio.h>

int main(void) {

	double tall, weight, height, bmi;
	
	
	printf("키와 몸무게를 입력 >> ");
	scanf("%lf %lf", &tall, &weight);
	
	height = tall/100;
	
	bmi = weight/(height * height);
	
	printf("BMI는 %.2lf 입니다\n", bmi);
		
	return 0;

}
