/*
* 프로그램 내용 : 년도를 받아 윤년인지 구하기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.25
*/
#include <stdio.h>

int main(void) 
{
    int year;
	
	printf("연도를 입력 >> ");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d년도는 윤년입니다.\n", year);
	} else {
		printf("%d년도는 윤년이 아닙니다.\n", year);
	}

    return 0;
}