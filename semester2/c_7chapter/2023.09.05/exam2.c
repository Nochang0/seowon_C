/*
* 프로그램 내용 : 배열을 이용하여 데이터를 저장하고, 합을 구하고, 배열 원소에 저장된 내용을 출력하는 프로그램2
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.05
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int mid[5] = {10, 20, 30, 40, 50}, final[5] = {20, 30, 40, 60, 70};
	double avg[5], max;
	long seed;
	int i;
	
	seed = time(NULL);
	srand(seed);
	
	mid[-1] = 10;
	mid[5] = 20;
	
	for(i=0;i<5;i++){
		mid[i] = rand() %101;
		final[i] = rand() %101;
		avg[i] = (double) (mid[i]+final[i])/2.0;
	}
	
	for(i=0;i<5;i++)
		printf("\n avg[%d] = %lf", i, avg[i]);
	
	max = avg[0];
	for(i=1;i<5;i++)
		if(max < avg[i])
			max = avg[i];
	printf("\nThe max score is %lf \n", max);
	
	return 0;
}