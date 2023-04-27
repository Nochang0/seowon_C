/*
* 프로그램 내용 : 점수를 받아 if문으로 등급을 판단해 출력하는 프로그램
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
	
	if(score >= 90){
		grade = 'A';
	} else if(score >= 80){
		grade = 'B';
	} else if(score >= 70){
		grade = 'C';
	} else if(score >= 60){
		grade = 'D';
	} else {
		grade = 'F';
	}
	printf("당신의 등급은 %c\n", grade);
    return 0;
}
