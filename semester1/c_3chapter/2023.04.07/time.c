/*
* 프로그램 내용 : 초 단위의 숫자를 받아 시간, 분, 초 순으로 출력하는 프로그램
* 개발자 : 연승현 
* 학번 : 202311420
* 실습일 : 2023.04.07
*/


#include <stdio.h>

int main(void) {

	int i_sec, hour, min, sec;
	
	printf("초를 입력 >> ");
	scanf("%d", &i_sec);
	
	hour = i_sec/3600;
	min = (i_sec%3600)/60;
    sec = (i_sec%3600)%60;
	
	printf("%d초는 %d시간 %d분 %d초 입니다\n", i_sec, hour, min, sec);
		
	return 0;

}
