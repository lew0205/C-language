#include<stdio.h>
int Add(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b;
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &a);
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &b);
		printf("�� ���� ���� %d�Դϴ�.", Add(a, b));
}