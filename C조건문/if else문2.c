#include<stdio.h>
int main() {
	int mom, son;
	printf("���� �и� �Է�: ");
	scanf_s("%d %d", &son, &mom);
	if (mom != 0/*!mom*/)
		printf("%d", son / mom);
	else
		printf("0���� ������");
	return 0;
}