/*
* 프로그램 내용 : 프로그래밍 이름을 담아 배열 복사
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.30
*/

#include <stdio.h>

int main(void) {
	char name[20], name2[20];
	int i;
	
	printf("%s", name);
	for(i=0; name[i] != '\0';i++)
		name2[i] = name[i];
	name2[i] = '\0';

	return 0;
}
