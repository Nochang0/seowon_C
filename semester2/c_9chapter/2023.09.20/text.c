/*
* 프로그램 내용 : 문자열 다루기 
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.20
*/

#include <stdio.h>
#include <ctype.h>

int count_word(char *str);

int main(void) {
	int count, str[80];
	
	printf("Please enter a english sentence >> ");
	scanf("%s", str);
	count = count_word(str);
	
	printf("The number of word : %d\n", count);
	return 0;
}

int count_word(char *str) {
	int i, count=0, flag=1;
	
	for(i=0;i<80 && str[i] != '\0', i++)
		if(isalpha(str[i]))
			if(flag == 1) {
				count++;
				flag = 0;
			}
		else
			flag = 1;
	return count;
}