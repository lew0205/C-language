#include<stdio.h>
int main() {
	int score;
	printf("���� �Է� : ");
	scanf_s("%d", &score);
	if (score >= 80 && score <= 90)
	{
		printf("���ݸ���÷\n");
		printf("B");
	}
	return 0;
}