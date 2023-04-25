/*
* 프로그램 내용 : 이름과 중간, 기말 성적을 받아 등급을 매기는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.19
*/

#include <stdio.h>

int main(void) {
	char name[20];
    int mid, final;
	float avg;
	char grade = 'A';
	
	printf("이름, 중간, 기말 입력 >> ");
	scanf("%s %d %d", name, &mid, &final);
	

	avg = (mid + final)/2.0;
	
	if(avg >= 90){
		grade = 'A';
	} else if(avg >= 90){
		grade = 'B';
	} else if(avg > 80){
		grade = 'C';
	} else if(avg > 70){
		grade = 'D';
	} else {
		grade = 'F';
	}
	printf("%s의 성적은 %c입니다. \n", name, grade);
    return 0;
} 

