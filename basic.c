/*
* 프로그램 내용 : 년도와 월을 받아 달의 마지막 날을 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.05.19
*/

#include <stdio.h>


int main(void){
	int amount = 10;
    int price = 1000;
    int total = amount * price;
	int width;
	
	
	
	draw_line('-', 30);
	printf("수량 단가 합계\n");
	
	width = 3 + 8 + 8 + 2;
	
	draw_line('*', width);
	printf("%3d %8d %8d\n", amount, price, total);
	
	draw_line('-', 30);
	return 0;
}



void draw_line(char ch, int len){
	int i;
	
	for (i = 0; i < len; i++)
		printf("%c", &ch);
	printf("\n");
}
// gcc basic.c -o basic.out -lm && ./basic.out

