#include<stdio.h>
int main() {
	int min,a,b;
	printf("������ �Է��Ͻÿ�\n����� Ctrl+z\n");
	scanf("%d", &min);
	while (1)
	{
		b=scanf("%d", &a);
		if (b == EOF)
		{
	printf("�ּҰ��� %d", min);
	break;
		}
		if (a < min)
			min = a;
	}
}