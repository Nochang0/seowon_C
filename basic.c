/*
* 프로그램 내용 : 프로그래밍 배열 실습2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.30
*/

#include <stdio.h>

int main(void) {
	int x[5] = { 10, 20, 30, 40 50 };
	int y[5] = { 10, 20, 30, 40 50 };
	int i;
	int is_equal;
	
	if(x == y)
		printf("두 배열의 주소가 같습니다.\n");
	
	is_equal = 1;
	
	for(i=0;i<5;i++){
		if(x[i] != y[i]){
			is_equal = 0;
			break;
		}
	}
	
	if(is_equal == 1){
		printf("두 배열의 내용이 같습니다.\n");
	}
	
	return 0;
}




// gcc basic.c -o basic.out -lm && ./basic.out

