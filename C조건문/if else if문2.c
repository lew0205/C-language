#include<stdio.h>
int main() {
	int x, y;
	char op;
	printf("������ �Է��Ͻÿ�(��: 2 + 5) : ");
	scanf("%d %c %d",&x,&op,&y);
	printf("��� ���\n");
	if (op == '+')
		printf("%d + %d = %d", x, y, x + y);
	else if (op == '-')
		printf("%d - %d = %d", x, y, x - y);
	else if (op == '*')
		printf("%d * %d = %d", x, y, x * y);
	else if (op == '/')
		printf("%d / %d = %d", x, y, x / y);
	else if (op == '%')
		printf("%d %% %d = %d", x, y, x % y);
	else
		printf("�������� �ʴ� �������Դϴ�.");
	return 0;
}