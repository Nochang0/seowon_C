/*
* 프로그램 내용 : 배열을 이용하여 데이터를 저장하고, 합을 구하고, 배열 원소에 저장된 내용을 출력하는 프로그램3
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.06
*/

#include <stdio.h>

int main(void) {
	int mid[5], final[5];
	double avg[5];
	int i, max;
	char name[5][20];
	
	for(i=0;i<5;i++){
		printf("Please enter mid and final exam scores >> ");
		scanf("%s %d %d", name[i], &mid[i], &final[i]);
		avg[i] = (double)(mid[i]+final[i])/2.0;
	}
	
	for(i=0;i<5;i++)
		printf("\n%s avg[%d] = %lf", name[i], i, avg[i]);
	
	max = 0;
	for(i=1;i<5;i++)
		if(max < avg[i])
			max = i;
	printf("\nThe name of max score : %s, score : %lf \n", name[max], avg[max]);
	
	return 0;
}