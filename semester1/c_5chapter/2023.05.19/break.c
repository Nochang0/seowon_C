/*
* 프로그램 내용 : break 문 사용
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.19
*/

#include <stdio.h>

int main(void) {
    int i;

    for (i = 10; i > 0; i--) {
        if (i % 3 == 0)
            break;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}