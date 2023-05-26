/*
* 프로그램 내용 : c언어 함수 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int car_number, int distance);

int main(void) {
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned) time(NULL));

    for (i = 0; i < 6; i++) {
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("-----------------------\n");
        getch();
    }
    return 0;
}

void disp_car(int car_number, int instance) {
    int i;
    printf("CAR #%d:", car_number);
    for (i = 0; i < distance / 10; i++) {
        printf("*");
    }
    printf("\n");
}


