#include<stdio.h>
int main() {
	for (int a = 1; a > 0; a++) {
		printf("3X%d=%d\n", a, a * 3);
		if (a == 9)
			break;
	}
	return 0;
}