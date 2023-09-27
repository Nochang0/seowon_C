/*
* 프로그램 내용 : 문자열 포인터 배열의 사용 예
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.27
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
	const char *str_menu[] = {
		"끝내기",
		"새 프로젝트",
		"프로젝트 열기",
		"솔루션 빌드",
		"디버깅 시작"
	};
	
	int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
	int menu;
	
	while (1) {
		int i;
		for(i=0;i<sz_menu;i++)
			printf("%d.%s\n", i, sz_menu[i]);
		printf("메뉴 선택? ");
		scanf("%d", &menu);
		
		if(menu == 0)
			break;
		else if(menu > 0 && menu < sz_menu) 
			printf("%s 메뉴를 잘못 선택하였습니다.\n\n", str_menu[menu]);
		else 
			printf("메뉴를 잘못 선택하였습니다.\n\n");
	}

    return 0;
}
