/*
* 프로그램 내용 : 섭씨온도 또는 화씨온도의 타입 값을 먼저 받은 후 타입에 따라 온도 값을 받아 그에 맞는 결과를 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.11
*/


#include <stdio.h>

int main(void) {

	int c, f;
	char type;
	
	printf("섭씨면 c, 화씨면 f 입력하고 온도 입력 >> ");
	scanf("%c", &type);
	
	if(type == 'c'){
		
		printf("오늘 온도(섭씨) 입력 >> ");
		scanf("%d", &c);
		
		f = (9.0/5) * c+32;
		printf("섭씨 %d도는 화씨 %d도 입니다.\n", c, f);
		
	} else if(type == 'f'){
		
		printf("오늘 온도(화씨) 입력 >> ");
		scanf("%d", &f);
		
		c = (5.0/9) * (f-32);
		printf("화씨 %d도는 섭씨 %d도 입니다.\n", f, c);
	}
	
	
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

// gcc basic.c -o basic.out && ./basic.out