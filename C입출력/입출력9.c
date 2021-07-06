#include<stdio.h>
int main() {
	int year=0;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf_s("%d",&year);
	printf("월수령액(단위: 만원):%d", year / 12);
	return 0;
}