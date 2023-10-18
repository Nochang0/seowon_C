/*
* 프로그램 내용 : 콘솔 입력을 파일로 저장하기 2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.18
*/

#include <stdio.h>

int main(void) {
	FILE *fp = NULL;
	int ch;
	fp = fopen("fgetc_test.c", "r");
	
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	while ((ch = fgetc(fp)) != EOF) {
		fputc(ch, stdout);
	}
	
	fclose(fp);
	return 0;
}