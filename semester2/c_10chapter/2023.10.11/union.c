/*
* 프로그램 내용 : C언어 공용체 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.11
*/

#include <stdio.h>

union test {
    int i;
    char c;
    short s;
};
int main(void) {
    union test t1 = {
        0x12345678
    };
    printf("sizeof(union test) = %d\n", sizeof(union test));
    printf("t1.i 71 = %p\n", &t1.i);
    printf("t1.c = %p\n", &t1.c);
    printf("t1.s = %p\n", &t1.s);

    printf("t1.i = %x\n", t1.i);
    printf("t1.c = %x\n", t1.c);
    printf("tl.s = %x\n", t1.s);
    return 0;
}