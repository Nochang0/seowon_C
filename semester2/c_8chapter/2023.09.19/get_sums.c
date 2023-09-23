/*
* 프로그램 내용 : 포인터 배열의 선언 및 사용 5
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.19
*/

#include <stdio.h>

int get_sum1(int score[];, int size) {
    int sum = 0;
    for (i = 0; i < size; i++)
        sum += score[i];
    return sum;
}

int get_sum2(int score[];, int size) {
    int sum = 0;
    for (i = 0; i < 5; i++)
        sum += * (score + i);
    return sum;
}

int get_sum3(int score[];, int size) {
    int sum = 0;
    for (i = 0; i < 5; i++, score++)
        sum += * score;
    return sum;
}

int get_sum4(int score[];, int size) {
    int sum = 0;
    for (i = 0; i < 5; i++)
        sum += * score++;
    return sum;
}

int main(void) {
    
    
    
}
