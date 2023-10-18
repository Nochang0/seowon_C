/*
* 프로그램 내용 : int 배열을 2진 파일로 저장하고 읽어 오기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.18
*/

#include <stdio.h>    // 입출력 관련 함수를 사용하기 위한 헤더 파일
#include <stdlib.h>   // 일반적인 유틸리티 함수와 동적 메모리 할당을 위한 헤더 파일
#include <string.h>   // 문자열 처리를 위한 헤더 파일
#include <time.h>


int is_equal_array(int source[], int target[], int size) {
	int i;
	for (i = 0; i < size; i++)
		if (source[i] != target[i])
			return 0;
	return 1;
}

int main(void) {
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int res = 0;
    srand((unsigned int)time(NULL));

    for (i = 0; i < ARR_SIZE; i++) arr1[i] = rand() % 100;
    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));
    fout = fopen(filename, "wb");
    if (fout == NULL) {
        printf("출력용 파일 열기 실패\n");
        return 1;
    }

    fwrite(arr1, sizeof(arr1[0]), ARR_SIZE, fout);
    fclose(fout);
    fout = NULL;
    fin = fopen(filename, "rb");

    if (fin == NULL) {
        printf("입력용 파일 열기 실패\n");
        return 1;
    }
	
    fread(arr2, sizeof(arr2[0]), ARR_SIZE, fin);
    fclose(fin);
    fin = NULL;
    if (is_equal_array(arr1, arr2, ARR_SIZE))
        printf("2진 파일 입출력 성공\n");
    else
        printf("2진 파일 입출력 실패\n");
    return 0;
}