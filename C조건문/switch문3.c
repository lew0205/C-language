#include<stdio.h>
int main() {
	int month;
	printf("달 입력: ");
	scanf("%d", &month);
	switch (month)
	{
	case 2:
		printf("%d월의 일수는 28일입니다.", month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d월의 일수는 30일입니다.", month);
		break;
	default:
		printf("%d월의 일수는 31일입니다.", month);
		break;
	}
}