#include<stdio.h>
int main() {
	int a, b=0;
	do
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &a);
		b += a;
	} while (a!=0);
	printf("���ڵ��� �� = %d", b);
}