/*
* 프로그램 내용 : 배열 응용
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.05
*/

#include <stdio.h>

int main(void) {
	int num[5];
	int sum = 0;
	int i, max;
	for(i=0;i<5;i++){
		printf("Please enter number >> ");
		scanf("%d", &num[i]);
		sum += num[i];
	}
	printf("sum = %d\n", sum);
	for(i=0;i<5;i++)
		printf("\n num[%d] = %d", i, num[i]);
	
	return 0;
	
}