/*
* 프로그램 내용 : 체중, 나이, 성별을 입력받아 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.21
*/

#include <stdio.h>

int main(void) {
	
	char name[20];	//변수 선언
	int age;
	char gender;

	printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n");
	scanf_s("%s %d %c", name,20, &age, &gender,1);	// scanf_s (VSC)에서는 문자형 변수의 크기를 지정해야 함
	
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("성별 : %c\n", gender);
	
	return 0;
}