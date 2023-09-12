/*
* 프로그램 내용 : 학생들의 이름과 중간고사, 기말고사 점수를 입력받아 각 학생의 평균 점수를 계산하고, 평균 점수가 가장 높은 학생의 이름과 그 점수를 출력하는 프로그램
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
	printf("\nThe name of max score : %s, score: %2lf \n", name[max], score[max][2]);
	return 0;
}


void read_data(double score[][3], char name[][20], int size) {
    int i;
	for(i=0;i<size;i++) {
		printf("Please enter name, mid and final exam scores >> ");
		scanf("%s %lf %lf", name[i], &score[i][0], &score[i][1]);
		score[i][2] = (score[i][0] + score[i][1])/2.0;
	}
}

void print_data(double score[][3], char name[][20], int size) {
    int i;
	for(i=0;i<size;i++)
		printf("\n%s : avg[%d] = %.2lf", name[i], i, score[i][2]);
}

int find_max(double score[][3], int size) {
    int max, i;
	max = 0;
	for(i=1;i<5;i++)
		if(score[max][2] < score[i][2])
			max = i;
	return max;
}
