/*
* 프로그램 내용 : C언어 공용체 RBG 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.11
*/

#include <stdio.h>

typedef union color_t { 
	unsigned int color;
	unsigned char rgb[4];
} COLOR_T;

int main(void) {
	COLOR_T c1;
	c1.rgb[0] = 0xFF;
	c1.rgb[1] = 0xab;
	c1.rgb[2] = 0x1F;
	c1.rgb[3] = 0x0;
	printf("rgb color = %08X\n", c1.color);
	return 0;
}
