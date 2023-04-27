/*
* 프로그램 내용 : 월 사용전력을 받아 낼 금액을 책정하는 프로그램
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.04.25
*/
#include <stdio.h>

int main(void) 
{
    float kw;
	float total_pay, base_pay, use_pay;
	int i_pay;
	
	printf("월 사용량(kW) >> ");
	scanf("%f", &kw);
	
	if(kw <= 200){
		base_pay = 910;
		use_pay = 112.0 * kw;
	} else if (kw <= 400){
		base_pay = 1600;
		use_pay = 200*112.0 + (kw-200)*206.6;
	} else {
		base_pay = 7300;
		use_pay = 200*112.0 + 200*206.6 + (kw-400)*299.3;
	}
	total_pay = base_pay + use_pay;
	total_pay *= 1.1;
	i_pay = total_pay;
	i_pay = (i_pay/10)*10;
	
	printf("전기 요금 합계 : %d \n", (int) total_pay);
    return 0;
}
