/*
* 프로그램 내용 : 키와 이름 정보를 받아서 이름과 키의 값을 m와 cm으로 나눠 출력시키는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.3.21
*/

#include <stdio.h>

int main(void) {

	int weight, cm, m;
	char name[20];

	printf("당신의 이름 키 순으로 입력하세요.\n=> ");
	scanf("%s %d", name, &weight);

	m = weight / 100;
	cm = weight % 100;

	printf("\n%s님의 키는 %dm %dcm 입니다.", name, m, cm);

	return 0;
}
