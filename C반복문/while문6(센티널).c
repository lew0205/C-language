#include<stdio.h>
int main() {
	int a=1, b,c=0;
	b = 0;
	float d = 0;
	while (a > 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &a);
		if (a < 0) {
			d = c / b;
			printf("������ ����� %f�Դϴ�.", d);
		}
		c +=a;
		b++;
	}
}