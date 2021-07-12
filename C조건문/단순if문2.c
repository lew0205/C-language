#include<stdio.h>
int main() {
	int score;
	printf("Á¡¼ö ÀÔ·Â : ");
	scanf_s("%d", &score);
	if (score >= 80 && score <= 90)
	{
		printf("ÃÊÄÝ¸´´çÃ·\n");
		printf("B");
	}
	return 0;
}