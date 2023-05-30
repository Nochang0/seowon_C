/*
* 프로그램 내용 : 프로그래밍 배열 데이터 검색
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.30
*/

#include <stdio.h>

int main(void){
	int data[] = { 78, 34, 52, 15, 63, 15, 25 };
	int size;
	int key, i;
	int found;
	
	size = sizeof(data) / sizeof(data[0]);
	printf("arr= ");
	
	for(i=0;i<size;i++)
		printf("%d ", data[i]);
	printf("\n");
	
	printf("찾을 값(키)? ");
	scanf("%d", &key);
	
	for(i=0;i<size;i++){
		if(data[i] == key){
			found = 1;
			break;
		}
	}
	
	if(found == 1)
		printf("찾은 원소의 인덱스: %d\n", i);
	else
		printf("탐색 실패\n");
	return 0;
}