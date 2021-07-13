#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int a, b, c = 0;
	srand(time(NULL));
	a = rand() % 100;
	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &b);
		if (b > a)
			printf("제시한 정수가 높습니다\n");
		if (a > b)
			printf("제시한 정수가 낮습니다\n");
		c++;
	} while (b != a);
	printf("축하합니다 시도횟수=%d", c);
}