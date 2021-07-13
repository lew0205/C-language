#include<stdio.h>
int main() {
	int a,b=0,c=0;
	scanf("%d", &a);
	while (c<=a)
	{
		b += c;
		c++;
	}
	printf("%d", b);
}