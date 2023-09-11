/*
* 프로그램 내용 : 배열을 이용하여 데이터를 저장하고, 합을 구하고, 배열 원소에 저장된 내용을 출력하는 프로그램4
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.06
*/

#include <stdio.h>

void read_data(double score[][3], char name[][20], int size);
void print_data(double score[][3], char name[][20], int size);
int find_max(double score[][3], int size);


int main(void) {
	double score[5][3];
	int i, max;
	char name[5][20];

	read_data(score, name, 5);
	/*
	for(i=0;i<5;i++){
		printf("Please enter name, mid and final exam scores >> ");
		scanf("%s %d %d", name[i], &mid[i], &final[i]);
		avg[i] = (double)(mid[i]+final[i])/2.0;
	}
	*/
	
	print_data(score, name, 5);
	/*
	for(i=0;i<5;i++)
		printf("\n%s avg[%d] = %lf", name[i], i, avg[i]);
	*/
	
	max = find_max(score, 5);
	/*
	for(i=1;i<5;i++)
		if(max < avg[i])
			max = i;
	printf("\nThe name of max score : %s, score : %lf \n", name[max], avg[max]);
	*/
	print("\nThe name of max score : %s, score: %2lf \n", name[max], score[max][2]);
	return 0;
}