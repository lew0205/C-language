#include<stdio.h>
int main() {
	int x;
	x = 10;
	printf("%d\n",x++);
	x = 10;
	printf("%d\n", ++x);
	x = 10;
	printf("%d\n", x--);
	x = 10;
	printf("%d\n", --x);
	return 0;
}