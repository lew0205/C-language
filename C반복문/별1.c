#include<stdio.h>
int main() {
	int b;
	for (int a = 1; a <= 5; a++)
	{
		for (int c = 0; c < (5 - a); c++)
		{
			printf(" ");
		}
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		b = 0;
		printf("\n");
	}
}