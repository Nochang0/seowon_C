/*
* 프로그램 내용 : swap 함수 사용
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.19
*/

#include <stdio.h>
void swap(int *x, int *y);
    
int main(void) {
    int a = 3, b = 7;
    
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}