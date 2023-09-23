/*
* 프로그램 내용 : 포인터 배열의 선언 및 사용 3
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.19
*/

#include <stdio.h>

void get_sum_product(int n, int *sum, int *product);

int main(void){
    int n, sum, product;
    
    printf("Please enter a number >> ");
    scanf("%d", &n);
    get_sum_product(n, &sum, &product);
    printf(" 1+2 .. + %d = %d\n 1*2 .. * %d = %d\n", n, sum, n, product);
    return 0;
}

void get_sum_product(int n, int *sum, int *product) {
    int i;
    *sum = 0; 
    *product = 1;
    for(i=0;i<=n;i++){
        *sum += i;
        *product *= i;
    }
}