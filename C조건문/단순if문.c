#include<stdio.h>
int main() {
	int score;
	printf("성적입력: ");
	scanf_s("%d", &score);
	if (score >= 90)
		printf("아이스크림 당첨!");
	return 0;
}