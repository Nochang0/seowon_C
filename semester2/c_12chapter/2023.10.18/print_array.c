/*
* 프로그램 내용 : 콘솔 출력과 파일 출력을 공통의 코드로 처리
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.18
*/

#include <stdio.h>    // 입출력 관련 함수를 사용하기 위한 헤더 파일
#include <stdlib.h>   // 일반적인 유틸리티 함수와 동적 메모리 할당을 위한 헤더 파일
#include <string.h>   // 문자열 처리를 위한 헤더 파일
#include <time.h>

int compare_int(const void *el, const void *e2) {
	const int *p1 = (const int*)e1;
	const int *p2 = (const int*)e2;
	return (*p1 - *p2);
}

void print_array(const int arr[], int size, FILE *fp) {
	int i;
	for (i = 0; i < size; i++)
		fprintf(fp, "%2d", arr[i]);
	fprintf(fp, "\n");
}

int main(void) {
	int arr[ARR_SIZE];
    int i;
    char filename[BUFSIZ] = "";
    FILE *fp = NULL;

    srand((unsigned int)time(NULL));
    for (i = 0; i < ARR_SIZE; i++) arr[i] = rand() % 100;

    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));

    if (strcmp(filename, ".") == 0)
        fp = stdout;

    else {
        fp = fopen(filename, "w");
        if (fp == NULL) fp = stdout;
    }
	
    fputs("정렬 전: ", fp);
    print_array(arr, ARR_SIZE, fp);
    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);
	
    fputs("정렬 후: ", fp);
    print_array(arr, ARR_SIZE, fp);
    fclose(fp);
    return 0;
}