#include<stdio.h>
int main() {
	int a = 59, b, c = 0;
	do
	{
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &b);
		if (b > a)
			printf("������ ������ �����ϴ�\n");
		if (a > b)
			printf("������ ������ �����ϴ�\n");
		c++;
	} while (b != a);
	printf("�����մϴ� �õ�Ƚ��=%d", c);
}