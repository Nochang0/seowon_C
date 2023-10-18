/*
* 프로그램 내용 : 파일 열기와 닫기 1
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.17
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fp = NULL;
    fp = fopen("a.txt", "r");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    printf("파일 열기 성공\n");
    fclose(fp);
    return 0;
}
