/*
* 프로그램 내용 : 이름, 키(cm)를 입력받아 출력(키를 m와 cm으로)하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.03.21, 2023.03.24
*/

#include <stdio.h>

int main(void) {
	
	char name[20];
	int height;

	printf("이름과 키(cm)를 입력 : ");
	scanf_s("%s %d", name, 20, &height);

	printf("%s의 키는 %dm %dcm입니다.", name, height/100, height%100);
	
	return 0;
}