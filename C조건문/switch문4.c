#include<stdio.h>
int main() {
	int x, y;
	char op;
	printf("수식을 입력하시오(예: 2 + 5): ");
	scanf("%d %c %d", &x, &op, &y);
	printf("계산 결과\n");
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
