/*
* 프로그램 내용 : C언어 구조체 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.4
*/

#include <stdio.h>
#include <string.h>

struct contact {
    char name[50];
    char phone[20];
    int ringtone;
};


int main(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1; // 구조체 변수로 초기화할 수 있다.
	
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);
	ct2 = ct;
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);
	return 0;
}