/*
* 프로그램 내용 : 5과 프로그래밍 18번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.06.02
*/

#include <stdio.h>
#define LIMIT 32

int get_bnum(int dnum, int bnum[]);
void print_bnum(int bnum[], int num);

int main(void) {
	
	int dnum, bnum[LIMIT], num;
	
	printf("Please enter a number >> ");
	scanf("%d", &dnum);
	num = get_bnum(dnum, bnum);
	print_bnum(bnum, num);
    return 0;
}

int get_bnum(int dnum, int bnum[]){
	int i;
	
	for(i=0;i<LIMIT && dnum > 0;i++){
		bnum[i] = dnum % 2;
		dnum = dnum / 2;
	}
	return i-1;
}
void print_bnum(int bnum[], int num){
	int i;
	
	printf("\nBinary number : ");
	for(i=num;i>=0;i--){
		printf(" %d", bnum[i]);
	}
}
// gcc test.c -o test.out -lm && ./test.out

