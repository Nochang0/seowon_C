/*
* 프로그램 내용 : 8과 프로그래밍 문제 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.23
*/

#include <stdio.h>

#define SIZE 10

int add_to_set(int *arr, int size, int *count, int value) {
    if (*count >= size) {
        return 0; 
    }
    for (int i = 0; i < *count; i++) {
        if (arr[i] == value) {
            printf("해당 원소가 이미 [%d]에 존재합니다.\n",i);
            return 0; 
        }
    }
    arr[(*count)++] = value;
    return 1;
}

void print_array(int *arr, int count){
	for(int i=0;i<count;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(void) {
	int array[SIZE];
	int count = 0;
	int input_value;

	while(1){
		printf("배열에 추가할 원소? ");
		scanf("%d", &input_value);
		if(add_to_set(array,sizeof(array)/sizeof(int),&count,input_value)){
			print_array(array,count);
		}
		if(count>=SIZE){
			break;
		}
	}
	return 0;
}











// gcc test.c -o test.out -lm && ./test.out