#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int a, b, c = 0;
	srand(time(NULL));
	a = rand() % 100;
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