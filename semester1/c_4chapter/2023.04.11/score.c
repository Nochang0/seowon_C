/*
* 프로그램 내용 : 학생 이름과 성적 값을 받아 성적이 80점 이상과 미만의 결과를 각각 다르게 구분하여 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.11
*/

#include <stdio.h>


int main(void) {

	char name[20];
	int score;
	
	printf("학생 이름, 성적 입력 >> ");
	scanf("%s %d", name, &score);
	
	if(score >= 80) 
		printf("%s은(는) 우수학생 입니다.\n", name);
	else
		printf("%s은(는) 일반학생 입니다.\n", name);
	
	return 0;

}
