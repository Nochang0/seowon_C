/*
* 프로그램 내용 : 점수를 받아 등급을 매겨주는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.26
*/

#include <stdio.h>

int main(void) {
    int mid[5], final[5];
    int i;
    double avg[5];
    char grade[5];

    for (i = 0; i < 5; i++) {
        printf("please enter mid and find score");
        scanf("%d %d", & mid[i], % final[i]);
        avg = (mid[i] + final[i]) / 2.0;
        printf("The average score is %.2lf\n", avg[i]);

        if (avg[i] >= 90)
            grade[i] = 'A';
        else if (avg[i] >= 80)
            grade[i] = 'B';
        else if (avg[i] >= 70)
            grade[i] = 'C';
        else if (avg[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
		
        printf("The average score is %.2lf\n", avg[i]);
        printf("The grade is %c\n", grade[i]);
    }
    return 0;
}