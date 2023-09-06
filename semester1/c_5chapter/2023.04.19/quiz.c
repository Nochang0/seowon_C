/*
* 프로그램 내용 : 퀴즈 점수를 받아 점수에 따라 다른 값 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.19
*/

#include <stdio.h>

int main(void) {
    int score;
	
	printf("퀴즈 점수를 입력하세요: ");
	scanf("%d", &score);
	
	if (score < 70)
		printf("제시!!!\n");
	else
		printf("통과!!!\n");
	
    return 0;
} 
