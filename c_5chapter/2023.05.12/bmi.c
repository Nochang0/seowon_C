/*
* 프로그램 내용 : 이름과 키 몸무게 값을 받아 BMI 결과와 비만 결과 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.12
*/

#include <stdio.h>

#include <stdio.h>

int main(void) {
	char name[20];
	double cm, m, kg, bmi;
	
	printf("이름과 키(cm)와 몸무게 (kg) 입력. >> ");
	scanf("%s %lf %lf", name, &cm, &kg);
	m = cm * 0.01;
	bmi = kg / (m * m);
	printf ("키1 %.2lfcm 몸무게 %.2lfkg인 %s의 BMI지수는 %.21f입니다.\n", cm, kg, name, bmi);
	printf("%s은(는) ", name);
	
	if (bmi <= 18.5) {
		printf ("저체증입니다.\n");
	} else if (bmi > 18.5 && bmi <= 23) {
		printf ("정상체중 입니다.\n");
	} else if (bmi > 23 && bmi <= 25) {
		printf("과체증입니다.\n");
	} else if (bmi > 25 && bmi <= 30){
		printf("비만 입니다. \n");
	} else if (bmi > 30) {
		printf("고도비만입니다.\n");
	}
	
	return 0;
}




// gcc basic.c -o basic.out -lm && ./basic.out

