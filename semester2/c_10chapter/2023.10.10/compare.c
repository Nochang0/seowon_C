/*
* 프로그램 내용 : C언어 구조체 배열의 검색
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.10
*/

#include <stdio.h>
#include <string.h>


typedef struct contact {
    char name[200];
    char phone[200];
    int ringtone;
} CONTACT;


int main(void) {
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;
		
	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0 && ct1.ringtone == ct2.ringtone) {
		printf("ct1과 ct2의 값이 같습니다.\n");
	} else {
		printf("ct1과 ct2의 값이 같지 않습니다\n.");
	}
	
	return 0;
}