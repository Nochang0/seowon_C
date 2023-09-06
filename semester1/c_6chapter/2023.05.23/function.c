/*
* 프로그램 내용 : 리턴 값과 매개변수가 있는 함수의 호출
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.23
*/

#include <stdio.h>

int main(void) {
    int fact;
	fact = get_factorial(i)
	
	printf("%d", fact);
	return 0;
}


int get_factorial(int num){
	int i;
	int result = 1;
	
	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}