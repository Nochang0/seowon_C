/*
* 프로그램 내용 : 로또 번호 출력 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.09
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_lotto_num(int num[], int count, int new);

int main() {
	int num[6], i, new, flag=0;
	srand((unsigned) time(NULL));
	num[0] = rand()%45+1;
	
	for (i=1;i<6;i++) {
		new = rand()%45+1;
		flag = check_lotto_num(num, i, new);
		if(flag == 1) {
			i--;
			continue;
		}
		num[i] = new;
	}
	printf("Lotto numbers : ");
	for (i=0;i<6;i++)
			printf("%d ", num[i]);
	return 0;
}

int check_lotto_num(int num[], int count, int new) {
	int i;
	for (i=0;i<count;i++)
			if(num[i] == new)
				return 1;
	return 0;
}
		 
