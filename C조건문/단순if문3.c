#include<stdio.h>
int main() {
	int year, month, day,sum;
	printf("��,��,�� �Է�: ");
	scanf_s("%d %d %d", &year, &month, &day);
	sum = year + month + day;
	if (sum % 10 < 5)
		printf("���� %d�Դϴ�.", sum);
	if (sum % 10 >= 5)
		return 0;
	return 0;
}