#include<stdio.h>
int main() {
	int month;
	printf("�� �Է�: ");
	scanf("%d", &month);
	switch (month)
	{
	case 2:
		printf("%d���� �ϼ��� 28���Դϴ�.", month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d���� �ϼ��� 30���Դϴ�.", month);
		break;
	default:
		printf("%d���� �ϼ��� 31���Դϴ�.", month);
		break;
	}
}