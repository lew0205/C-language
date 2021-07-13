#include<stdio.h>
int main() {
	int a, b=0, c=1;
	scanf("%d", &a);
	while (c <= a)
	{
		if (c % 2 == 0)
			b += c;
		c++;
	}
	printf("%d", b);
}