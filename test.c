/*
* 프로그램 내용 : 5과 프로그래밍 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>
#define SIZE 5


int main(void) {
	char name[5][20];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("이름[%d] : ", i);
		scanf("%s", name[i]);
	}
	for (i = 0; i < 5; i++) {
      printf("결과[%d]: %s\n", i, name[i]);
   }
    return 0;
}


// gcc test.c -o test.out -lm && ./test.out

