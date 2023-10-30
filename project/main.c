// 기본 라이브러리
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> 		// sleep() | usleep()
#include <stdbool.h> 		// true | false

// 커스텀 라이브러리
#include "./lib/crypto.h" 	// encodeURI()

// 프롬프트 글자 색상
#define COLOR_RED     		"\x1b[31m"
#define COLOR_LIGHT_RED     "\033[1;31m"
#define COLOR_GREEN   		"\x1b[32m"
#define COLOR_LIGHT_GREEN 	"\033[1;32m"
#define COLOR_YELLOW  		"\x1b[33m"
#define COLOR_BLUE    		"\x1b[34m"
#define COLOR_MAGENTA 		"\x1b[35m"
#define COLOR_CYAN    		"\x1b[36m"
#define COLOR_RESET   		"\x1b[0m"

// 기타 상수 및 함수 선언
bool isArray(int value, int array[], int size); 	// value가 배열 안의 값인지 확인 

// Entry Point
int main(void) {
	char url[200];									// YouTube URL
	char type[10], quality[10];  					// type: 0=mp3 | 1=mp4 , quality: 0=lowest | 1=highest
    int Vtype, Vquality;							// Vtype: 0 | 1 , Vquality: 0 | 1
	int AnswerList[3] = { 0, 1, 2 };				// Refuse Other Answer
	
	
	printf("\033[2J\033[H");						// 프롬프트 Clear
	printf(COLOR_LIGHT_RED "╔════════════════════╗\n");
    printf("║ " COLOR_RESET "YouTube Downloader" COLOR_LIGHT_RED " ║\n");
    printf("╚════════════════════╝\n");
    
	
    printf(COLOR_GREEN "Enter the YouTube URL: " COLOR_RESET);
    scanf("%s", url);								// URL 주소 받기 (url)
	
	if (url == 0 || !strstr(url, "http")) return printf(COLOR_RED "정상적인 URL인지 확인 후 다시 시도해주세요.\n");
    char* MediaURL = encodeURI(url);				// URL Encoding
	printf("\033[2J\033[H");	
	
	
						
	while (1) { 
		printf(COLOR_LIGHT_GREEN "박스 안에 선택지 앞 번호를 입력해주세요.\n");
		printf(COLOR_RESET "╔══════════════════════════════╗\n");
		printf(" 0. MP3\n");
		printf(" 1. MP4\n");
		printf(COLOR_YELLOW " 2. Exit (종료)\n");
		printf(COLOR_RESET "╚══════════════════════════════╝\n");
		printf("Choose The Format Of Media File: ");

		int boolType = scanf("%d", &Vtype);
		if (Vtype == 2) return 0; 	// 종료

		if (boolType < 1 || !isArray(Vtype, AnswerList, sizeof(AnswerList) / sizeof(AnswerList[0]))) {
			printf("\033[2J\033[H");
			printf(COLOR_RED "올바른 값을 입력하지 않았습니다. 다시 시도해주세요.\n");
			int i;
			while ((i = getchar()) != '\n' && i != EOF) {}	// 개행 문자 제거
			continue;
		} else {
			strcpy(type, (Vtype == 0) ? "mp3" : "mp4");
			printf("\033[2J\033[H");
			break;
		} 
	}
	
	while (1) {
		printf(COLOR_LIGHT_GREEN "박스 안에 선택지 앞 번호를 입력해주세요.\n");
		printf(COLOR_RESET "╔══════════════════════════════╗\n");
		printf(" 0. Lowest (저화질|저음질)\n");
		printf(" 1. Highest (고화질|고음질)\n");
		printf(COLOR_YELLOW " 2. Exit (종료)\n");
		printf(COLOR_RESET "╚══════════════════════════════╝\n");
		printf("Choose The Quality Of Media File: ");

		int boolQuality = scanf("%d", &Vquality);
		if (Vquality == 2) return 0;	// 종료

		if (boolQuality < 1 || !isArray(Vquality, AnswerList, sizeof(AnswerList) / sizeof(AnswerList[0]))) {
			printf("\033[2J\033[H");
			printf(COLOR_RED "올바른 값을 입력하지 않았습니다. 다시 시도해주세요.\n");
			int i;
			while ((i = getchar()) != '\n' && i != EOF) {}	// 개행 문자 제거
			continue;
		} else {
			strcpy(quality, (Vquality == 0) ? "lowest" : "highest");
			printf("\033[2J\033[H");
			break;
		}
	}
	
	printf(COLOR_RESET "╔══════════════════════════════╗\n");
	printf(" 0. URL: %s\n", url);
	printf(" 1. Type: %s\n", type);
	printf(" 2. Quality: %s\n", quality);
	printf(COLOR_YELLOW " 3. Exit (종료)\n");
	printf(COLOR_RESET "╚══════════════════════════════╝\n");
	printf(COLOR_GREEN "위 박스의 입력된 내용을 바탕으로 다운로드를 진행합니다..\n");
	
    return 0;
}


bool isArray(int value, int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            return true;
        }
    }
    return false;
}

