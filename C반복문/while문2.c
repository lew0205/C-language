#include<stdio.h>
int main() {
	int a = 1, b;
	while (a < 10)
	{
		b = 1;
		while (b < 10)
		{
			printf("%d * %d = %d\n", a, b, a * b);
			b++;
		}
		a++;
	}
	return 0;
}