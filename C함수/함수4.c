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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	b=findprime(a);
	if (b != 0)
		printf("%d�� �Ҽ��Դϴ�.",a);
	else
		printf("%d�� �Ҽ�x.",a);
}