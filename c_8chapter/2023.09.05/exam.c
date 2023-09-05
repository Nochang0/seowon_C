/*
* 프로그램 내용 : 배열을 이용하여 데이터를 저장하고, 합을 구하고, 배열 원소에 저장된 내용을 출력하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.05
*/

#include <stdio.h>

int main(void) {
	int mid[5], final[5];
	double avg[5], max;
	int i;
	
	for(i=0;i<5;i++){
		printf("Please enter mid amf final exam scores >> ");
		scanf("%d %d", &mid[i], &final[i]);
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