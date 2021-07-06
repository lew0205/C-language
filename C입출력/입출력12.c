#include<stdio.h>
int main() {
	double Dollar,ER;
	int Won;
	printf("환율을 입력하시오: ");
	scanf_s("%lf", &ER);
	printf("원화 금액을 입력하시오: ");
	scanf_s("%d", &Won);
	Dollar = Won/ER;
	printf("원화 %d원은 %f달러입니다.", Won, Dollar);
	return 0;
}