#include<stdio.h>
int main() {
	int a;
	printf("�����Է�: ");
	scanf("%d", &a);
	switch (a) {
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("�ϳ�\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("��\n");
		break;
	default:
		printf("����\n");
		break;
	}
	return 0;
}