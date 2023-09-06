/*
* 프로그램 내용 : 2차원 배열을 이용해 이름을 연속으로 입력받아 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>


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

