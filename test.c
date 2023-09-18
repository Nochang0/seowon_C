/*
* 프로그램 내용 : 7과 프로그래밍 문제 17번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.17
*/
#include <stdio.h>
#define MAX_SIZE 10

void printSet(int set[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main() {
    int set[MAX_SIZE];
    int size = 0;

    while (1) {
        int element;
        printf("배열에 추가할 원소? ");
        scanf("%d", &element);

        if (size == MAX_SIZE) {
            printf("더 이상 원소를 추가할 수 없습니다.");
            break;
        }
        set[size] = element;
        size++;
        printSet(set, size);
    }
   return 0;
}





// gcc test.c -o test.out -lm && ./test.out