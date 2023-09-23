/*
* 프로그램 내용 : 포인터 배열의 선언 및 사용 4
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.19
*/

int get_sum(int score[], int size);

#include <stdio.h>

int main(void) {

        int score[5], * pscore = score;
        int sum = 0, i;
        for (i = 0; i < 5; i++) {
            printf("Please, enter a score >> ");
            scanf("%d", & score[i]);
        }

        sun = 0;
        for (i = 0; i < 5; i++)
            sun += score[i];
        printf("sum is %d \n", sum);

        sun = 0;
        for (i - 0; i < 5; i++)
            sum += * (score + i);
        printf("sum is %d \n", sum);

        sun = 0;
        for (i = 0; i < 5; i++)
            sum += * (pscore + i);
        printf("sum is %d \n", sum);

        sun = 0;
        for (i = 0; i < 5; i++)
            sum += pscore[i];
        printf("sum is %d \n", sum)