/*
* 프로그램 내용 : 5과 프로그래밍 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.23
*/

#include <stdio.h>

int get_tot_money(int money, double rate, int interval);


int main(void) {
    int money;
    double rate;
    int interval;

    printf("원금, 년 이자율, 기간(개월 수) 입력 >> ");

    scanf("%d %lf %d", & money, & rate, & interval);
    money = get_tot_money(money, rate, interval);
    printf("최종 받는 금액 : %d\n", money);
    return 0;
}

int get_tot_money(int money, double rate, int interval) {
    int i;
    rate = rate / 12.0;
    for (i = 1; i < interval; i++)
        money = money * (1 + rate);
    return money;
}

// gcc test.c -o test.out -lm && ./test.out

