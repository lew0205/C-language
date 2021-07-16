#include<stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	printf("%d",max(3,4));
}