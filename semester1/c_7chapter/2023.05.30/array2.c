/*
* 프로그램 내용 : 프로그래밍 배열 실습2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.30
*/

#include <stdio.h>
#define ARR_SIZE 5

int add(int a, int b) { return a + b; }

int main(void){
	int arr[ARR_SIZE]= { 0 };
	int i;
	
	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("정수를 2개 입력하세요: ");
	scanf("%d %d", &arr[3], %arr[4]);
	
	for(i=0;i<ARR_SIZE;i++)
		printf("%d ", arr[i]);
	printf("\n");
		
	return 0;
}