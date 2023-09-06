/*
* 프로그램 내용 : 선택 정렬 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>
#define SIZE 5


int main(void) {
	int data[SIZE] = { 7, 3, 9, 5, 1 };
	int i, j;
	int index, temp;
	
	for(i=0;i<SIZE-1;i++){
		index = i;
		for(j=i+1;j<SIZE;j++){
			if(data[index] > data[j])
				index = j;
		}
		if(i != index){
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}	
	}
	printf("정렬 후: ");
	for(i=0;i<SIZE;i++)
		printf("%d ", data[i]);
	printf("\n");
    
    return 0;
}
