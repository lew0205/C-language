#include<stdio.h>
int main() {
	int a=1, b,c=0;
	b = 0;
	float d = 0;
	while (a > 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &a);
		if (a < 0) {
			d = c / b;
			printf("성적의 평균은 %f입니다.", d);
		}
		c +=a;
		b++;
	}
}