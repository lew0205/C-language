#include<stdio.h>
int findprime(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
			if (num == i)
			{
				return num;
			}
			else
			{
				return 0;
				break;
			}
	}
}

int main()
{
	int a,b;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	b=findprime(a);
	if (b != 0)
		printf("%d는 소수입니다.",a);
	else
		printf("%d는 소수x.",a);
}