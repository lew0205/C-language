#include<stdio.h>
int main() {
	int a,c=1;
	float b = 100;
	printf("반감기를 입력하시오(년): ");
	scanf("%d", &a);
	while (b > 10)
	{
		b /= 2;
		printf("%d년 후에 남은 양=%f\n", c * a,b);
		c++;
	}
	printf("1/10이하로 되기 까지 걸린 시간=%d년", (c - 1) * a);
}