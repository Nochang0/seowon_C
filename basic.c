/*
* 프로그램 내용 : 5과 프로그래밍 18번
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

double get_area(double radius) {
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

void draw_line(char ch, int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int get_max(int a, int b, int c) {
    int max = a > b ? a : b;
    max = c > max ? c : max;
    return max;
}

int get_factorial(int num){
	int i;
	int result = 1;
	
	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}
// gcc basic.c -o basic.out -lm && ./basic.out

