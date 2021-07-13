#include<stdio.h>
int main() {
	int min,a,b;
	printf("정수를 입력하시오\n종료는 Ctrl+z\n");
	scanf("%d", &min);
	while (1)
	{
		b=scanf("%d", &a);
		if (b == EOF)
		{
	printf("최소값은 %d", min);
	break;
		}
		if (a < min)
			min = a;
	}
}