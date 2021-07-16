#include<stdio.h>
int Add(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b;
		printf("정수를 입력하시오: ");
		scanf("%d", &a);
		printf("정수를 입력하시오: ");
		scanf("%d", &b);
		printf("두 수의 합은 %d입니다.", Add(a, b));
}