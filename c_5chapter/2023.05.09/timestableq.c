/*
* 프로그램 내용 : 숫자를 입력받아 그 숫자의 구구단의 문제를 출력해 다 맞췄는지 결과 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.09
*/

#include <stdio.h>

int main(void) 
{
    int i, dan, flag=0, result;
	
	printf("출력한 단(구구단) 입력 >> ");
	scanf("%d", &dan);
	printf("*****\n%d단\n*****\n", dan);
	
	for(i=0; i<10; i++){
		printf("%d * %d = \n", dan, i);
		scanf("%d", &result);
		if(result != dan*i){
			flag = 1;
			printf("틀렸습니다. 정답은 %d입니다. \r", dan*i);
	}
	}
	if(flag == 0) printf("pass\n");
	else printf("fail\n");
	
	// printf("정답 횟수: %d, 틀린 횟수: %d\n", count, 9-count);
	return 0;
}




// gcc basic.c -o basic.out -lm && ./basic.out

