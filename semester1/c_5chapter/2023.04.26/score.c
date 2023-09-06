/*
* 프로그램 내용 : 점수를 받아 switch문으로 등급을 판단해 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.26
*/

#include <stdio.h>

int main(void) 
{
    int score;
	char grade;
	
	printf("점수? ");
	scanf("%d", &score);
	
	switch(score/10){
		case '9':
			grade = 'A';
			break;
		case '8':
			grade = 'B';
			break;
		case '7':
			grade = 'C';
			break;
		case '6':
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}
	printf("당신의 등급은 %c\n", grade);
    return 0;
}