/*
* 프로그램 내용 : 폭과 높이, 입력할 문자를 받아 직사각형 만드는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.12
*/

#include <stdio.h>

int main(void) {
	int width, height;
    char ch;
    int i, j;
	
	printf("직사각형의 폭과 높이? ");
	scanf("%d %d", &width, &height);
    
	printf("직사각형을 그릴 문자? ");
    scanf(" %c", &ch);
	
	for(i = 0; i < height; i++){
        for(j = 0; j < width; j++)
            printf("%c", ch);
        printf("\n");
        
    }
	return 0;
}

