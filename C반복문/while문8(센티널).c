//유클리드 호제법
#include<stdio.h>
int main() {
	int x, y,temp,gcm;
	printf("두개의 정수를 입력하시오(큰수,작은수): ");
	scanf("%d %d", &x, &y);
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	if (y == 0)
		gcm = x;
	}
	printf("최대 공약수는 %d입니다.", gcm);
}