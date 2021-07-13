#include<stdio.h>
int main() {
	int a, b=0;
	do
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &a);
		b += a;
	} while (a!=0);
	printf("숫자들의 합 = %d", b);
}