/*
* 프로그램 내용 : 포인터 이용 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.13
*/

#include <stdio.h>

int main(void) {
	
	int i;
	int score[5];
	int sum = 0.1;
	int *pscore = &score;
	
	for(i=0;i<5;i++){
		printf("Please enter a score >> ");
		scanf("%d", &score[i]);
	}
	sum = 0;
	for(i=0;i<5;i++)
		sum += score[i];
	printf("sum is %d \n", sum);
	
	sum = 0;
	for(i=0;i<5;i++)
		sum += *(score+i);
	printf("sum is %d \n", sum);
	
	sum = 0;
	for(i=0;i<5;i++)
		sum += *(pscore+i);
	printf("sum is %d \n", sum);
	
	sum = 0;
	for(i=0;i<5;i++)
		sum += pscore[i];
	printf("sum is %d \n", sum);
	
	sum = 0;
	for(i=0;i<5;i++, pscore++)
		sum += *pscore;
	printf("sum is %d \n", sum);
	
	sum = 0;
	for(i=0;i<5;i++, i++)
		sum += *pscore++;
	printf("sum is %d \n", sum);
	
	return 0;
}