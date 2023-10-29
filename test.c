/*
* 프로그램 내용 : 10과 프로그래밍 문제 17번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.15
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100



void reverse_string(char *str);

int main(void) {
    char text[SIZE] = ""; // 입력 텍스트
    
    printf("입력: ");
    scanf("%s", text);
    reverse_string(&text);
    // printf("%s", text);
    return 0;
}

void reverse_string(char *str) {
	// printf("%c\n", str[textLength-1]);
	
	int i=0, textLength = strlen(str)-1;
	char result[SIZE];
	
	for (int j = textLength; j >= 0; j--) {
		result[i] = str[j];
		i += 1;
	}
    
	printf("%s\n", result);
}






















// clear && gcc test.c -o test.out -lm && ./test.out