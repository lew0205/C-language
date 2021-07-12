#include<stdio.h>
int main() {
	int score;
	char HAKJUM;
	printf("성적을 입력하시오 :");
	scanf("%d", &score);
	if (score <= 100 && score >= 0)
	{
		HAKJUM = score / 10;
		switch (HAKJUM) {
			case 10:
			case 9:
				printf("A학점");
			case 8:
				printf("B학점");
			case 7:
				printf("C학점");
			case 6:
				printf("D학점");
			default:
				printf("F학점");
}
	}
	else
		printf("점수 허용 구간이 아닙니다. 다시 시작하세요.");
}