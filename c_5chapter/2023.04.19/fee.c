/*
* 프로그램 내용 : 나이, 월 값을 입력받아 그에 맞은 입장료 값 출력
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.19
*/

#include <stdio.h>

int main(void) {
    int age, fee, month;
	
	printf("나이, 월 입력 >> ");
	scanf("%d %d", &age, &month);
	
	if(age >= 0){
		if(age >= 65)
			fee = 5000;
		else 
			fee = 10000;
	else 
		fee = 0;
	
	if(age >= 8 && month >= 6 && month <= 8)
		fee +=5000;
	printf("입장료 : %d원\n", fee);
	
    return 0;
} 

// gcc basic.c -o basic.out && ./basic.out

