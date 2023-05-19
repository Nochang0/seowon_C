/*
* 프로그램 내용 : 함수를 응용해보는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.19
*/

#include <stdio.h>

int main(void) {
	int amount = 10;
    int price = 1000;
    int total = amount * price;
	
	draw_line('-', 30);
	printf("수량 단가 합계\n");
	
	draw_line('*', 24);
	printf("%d %d %d\n", amount, price, total);
	
	draw_line('-', 30);
	return 0;
}

void draw_line(char ch, int len){
	int i;
	for (i = 0; i < len; i++)
		printf("%c", &ch);
	printf("\n");
}

