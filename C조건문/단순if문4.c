#include<stdio.h>
int main() {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	if (num < 0)
		num = -num;
	printf("���밪�� %d�Դϴ�.", num);
}