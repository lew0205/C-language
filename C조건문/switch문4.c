#include<stdio.h>
int main() {
	int x, y;
	char op;
	printf("������ �Է��Ͻÿ�(��: 2 + 5): ");
	scanf("%d %c %d", &x, &op, &y);
	printf("��� ���\n");
	switch (op)
	{
	case '+':
		printf("%d %c %d = %d", x, op, y, x + y);
		break;
	case '-':
		printf("%d %c %d = %d", x, op, y, x - y);
		break;
	case '*':
		printf("%d %c %d = %d", x, op, y, x * y);
		break;
	case '/':
		printf("%d %c %d = %d", x, op, y, x / y);
		break;
	case '%':
		printf("%d %c %d = %d", x, op, y, x % y);
		break;
	}
}
