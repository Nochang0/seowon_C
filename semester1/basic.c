/*
* 프로그램 내용 : 프로그래밍 7과 11번 문제
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.13
*/
#include <stdio.h>
int main() {
    int scores[5][4] = {
        {28, 28, 26, 9},
        {30, 27, 30, 10},
        {25, 26, 24, 8},
        {18, 22, 22, 5},
        {24, 25, 30, 10}
    };
    int totals[5] = {0}; // 각 학생의 총점
    float avg_mid = 0.0, avg_final = 0.0, avg_project = 0.0, avg_attend = 0.0; // 각 항목의 평균

    for (int i = 0; i < 5; i++) { // 각 학생의 총점 계산
        for (int j = 0; j < 4; j++) {
            totals[i] += scores[i][j];
        }
        printf("학생%d번: %d %d %d %d ==> %d\n", i+1, scores[i][0], scores[i][1], scores[i][2], scores[i][3], totals[i]);
    }
    // 각 항목의 평균 계산
    for (int i = 0; i < 5; i++) {
        avg_mid += scores[i][0];
        avg_final += scores[i][1];
        avg_project += scores[i][2];
        avg_attend += scores[i][3];
    }
    avg_mid /= 5;
    avg_final /= 5;
    avg_project /= 5;
    avg_attend /= 5;
    printf("항목별 평균: %.2f %.2f %.2f %.2f\n", avg_mid, avg_final, avg_project, avg_attend);
    return 0;
}
		 
// gcc basic.c -o basic.out -lm && ./basic.out

