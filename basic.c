/*
* 프로그램 내용 : 5과 프로그래밍 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.23
*/

#include <stdio.h>

int main() {
    int minutes;
    while (1) {
        printf("주차 시간(분)? ");
        scanf("%d", &minutes);
        if (minutes == 0) break;
        else if (minutes > 1440) {
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
            continue;
        }
        else {
            int fee = 2000;
            int excess = (minutes - 30) / 10;
            if (excess > 0) {
                fee += excess * 1000;
                if (fee > 25000) fee = 25000;
            }
            printf("주차 요금: %d원\n", fee);
        }
    }
    return 0;
}



// gcc basic.c -o basic.out -lm && ./basic.out

