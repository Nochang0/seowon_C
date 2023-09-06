/*
* 프로그램 내용 : 년도와 월을 받아 달의 마지막 날을 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.26
*/

#include <stdio.h>

int main(void) 
{
    int year, month, day;
	
	printf("년도와 월 입력 >> ");
	scanf("%d %d", &year, &month);
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12: 
			day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 31;
			break;
		default:
			if((year%4 == 0) && (year%100 != 0) || (year%400) == 0)
				day = 29;
			else
				day = 28;
			break;
	}
	printf("%d년 %d월은 %d일이 있습니다.\n", year, month, day);
    return 0;
}
