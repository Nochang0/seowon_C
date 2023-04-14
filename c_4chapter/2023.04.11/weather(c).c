/*
* 프로그램 내용 : 섭씨 온도 값을 받아 크기를 비교하여 각각 다른 말 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.11
*/


#include <stdio.h>

int main(void) {

	int c;
	
	printf("오늘 온도(섭씨) 입력 >> ");
	scanf("%d", &c);
	
	if(c>=30)
		printf("오늘 날씨는 덥습니다.\n");
	else if(c>=10)
	    printf("오늘 날씨는 좋습니다.\n");
	else if(c>=0)
		printf("오늘 날씨는 쌀쌀합니다.\n");
	else
		printf("오늘 날씨는 춥습니다.\n");
	
	
	return 0;

}
