/*
* 프로그램 내용 : 포인터 배열의 선언 및 사용 1
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.19
*/

#include <stdio.h>

int main(void) {
    int a, b, c, d, e;
    int *arr[5] = { &a, &b, &c, &d, &e };
    int i;
    
    for (i=0;i<5;i++) {
        *arr[i] = i;
        printf("%d ", *arr[i]);
    }
    
    printf("\n");
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    