#include<stdio.h>
int main() {
	int a,c=1;
	float b = 100;
	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf("%d", &a);
	while (b > 10)
	{
		b /= 2;
		printf("%d�� �Ŀ� ���� ��=%f\n", c * a,b);
		c++;
	}
	printf("1/10���Ϸ� �Ǳ� ���� �ɸ� �ð�=%d��", (c - 1) * a);
}