/*
* 프로그램 내용 : 7과 프로그래밍 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.23
*/

#include <stdio.h>

int main(void){
	int arr[5];
	int byte_size = 0;
	int size = 0;
	int i;
	
	byte_size = sizeof(arr);
	printf("배열의 바이트 크기: %d\n", byte_size);
	
	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 크기: %d\n", size);
	
	for(i=0;i<size;i++)
		arr[i] = 0;
	
	return 0;
}