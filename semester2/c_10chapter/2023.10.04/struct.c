/*
* 프로그램 내용 : C언어 구조체 실습
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.4
*/

#include <stdio.h>
#include <string.h>

struct contact {
	char name[20];
	char phone[20];
	int ringtone;
};

int main(void) {
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { 0 }; 
	struct contact ct2 = { 0 };
	
	ct.ringtone = 5;
	
	strcpy(ct.phone, "01011112223");
	printf("이름: %s\n", ct.name);
	printf("전화번호: %s\n", ct.phone);
	printf("벨소리: %d\n", ct.ringtone);

	strcpy(ct1.name, "전정국"); 
	strcpy(ct1.phone, "01012345678");
	ct1.ringtone = 1;
	
	printf("이름: %s\n", ct1.name);
	printf("전화번호: %s\n", ct1.phone);
	printf("벨소리: %d\n", ct1.ringtone);
	// ct2로 연락처 정보를 입력받는다. 
	printf("이름? ");
	scanf("%s", ct2.name);
	printf("전화번호? ");
	scanf("%s", ct2.phone);
	printf("벨소리? ");
	scanf("%d", &ct2.ringtone);
	printf("이름: %s\n", ct2.name);
	printf("전화번호: %s\n", ct2.phone);
	printf("벨소리: %d\n", ct2.ringtone);
	
	
}