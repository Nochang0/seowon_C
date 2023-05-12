/*
* 프로그램 내용 : 숫자를 받아 정수인지 소수인지 알려주는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.09
*/

#include <stdio.h>

int main(void) 
{
    int i, num, flag=0, result;
	
	printf("정수를 입력 >> ");
	scanf("%d", &num);
	
	for(i=2; i<num; i++){
		if(num%i == 0)
			flag = 1;
		
		if(flag == 1)
			printf("%d는 소수가 아닙니다.\n", num);
		else
			printf("%d는 소수입니다.\n", num);
	}
	
	if(flag == 0) printf("pass\n");
	else printf("fail\n");
	
	return 0;
}




// gcc basic.c -o basic.out -lm && ./basic.out

