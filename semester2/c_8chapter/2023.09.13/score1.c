/*
* 프로그램 내용 : 포인터를 이용한 중간/기말고사 시험 점수 보여주기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.13
*/

#include <stdio.h>

int main(void) {
	int mid, final;
	int *pmid = &mid, *pfinal = &final;
	double avg, *pavg = &avg;
	char name[20], *pname = &name[0];
	
	printf("please enter name, mid and final scores >> ");
	scanf("%s %d %d", pname, pmid, pfinal);
	*pavg = (*pmid + *pfinal)/2.0;
	
	printf("Name : %s, average score : %.2fs \n", pname, &pavg);
	
	return 0;
}