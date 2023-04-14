/*
* 프로그램 내용 : 몇 월인지 값을 받은 후 성수기 시기인지 아닌 지를 알려주는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.11
*/


#include <stdio.h>

int main(void) {

	int month;
	
	printf("몇 월? ");
	scanf("%d", &month);
	
	if (month >= 6 && month <= 8){
		printf("성수기 요금 적용\n");
	} 
	
	if (month < 6 || month > 8){
		printf("일반 요금 적용\n");
		
	}
	return 0;

}
