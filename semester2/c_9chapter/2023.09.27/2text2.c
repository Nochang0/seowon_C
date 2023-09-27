/*
* 프로그램 내용 : 2차원 문자 배열의 정렬
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.27
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int swap_string(char* lhs, char* rhs, int size);

#define MAX 5
#define BUF_SZ 30
#define SIZE 128

int main(void) {
    char books[MAX][BUF_SZ] = {
        "wonder",
        "me before you",
        "the hunger games",
        "twilight",
        "harry potter"
    };

    int i, j, index;

	puts("<< 정렬 전 >>");
	
    for (i = 0; i < MAX; i++)
        puts(books[i]);

    for (i = 0; i < MAX - 1; i++) {
        index = i;
		for (j = 0; j < MAX; j++) {
			if (strcmp(books[index], books[j]) > 0)
				index = j;
		}
		if (i != index) {
			swap_string(books[index], books[i], BUF_SZ);
		}
    }

    puts("<< 정렬 후 >>");
    for (i = 0; i < MAX; i++)
        puts(books[i]);

    return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";
	
	if (lhs_len + 1 > size || rhs_len + 1 > size)
		return 0; // swap_string 실패
	
	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	return 1; // swap_string 성공
}