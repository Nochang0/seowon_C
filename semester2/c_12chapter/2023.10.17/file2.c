/*
* 프로그램 내용 : 파일 열기와 닫기 2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.17
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE * fout = NULL;
    FILE * fin = NULL;
    fout = fopen("a.txt", "w");
    
    if (fout == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    
    fclose(fout);

    fin = fopen("a.txt", "r");
    if (fin == NULL) {
        printf("파일 열기 실패\n");
    }
    
    printf("파일 열기 성공\n");
    fclose(fin);
    return 0;
}