#include<stdio.h>
int main() {
	int x, y;
	char op;
	printf("수식을 입력하시오(예: 2 + 5) : ");
	scanf("%d %c %d",&x,&op,&y);
	printf("계산 결과\n");
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
		printf("지원되지 않는 연산자입니다.");
	return 0;
}