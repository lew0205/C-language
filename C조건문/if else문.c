#include<stdio.h>
int main() {
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("%d�� \"Ȧ��\" �Դϴ�.",num);
	else
		printf("%d�� \"¦��\" �Դϴ�.",num);
	return 0;
}