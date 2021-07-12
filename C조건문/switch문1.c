#include<stdio.h>
int main() {
	int a;
	printf("정수입력: ");
	scanf("%d", &a);
	switch (a) {
	case 0:
		printf("없음\n");
		break;
	case 1:
		printf("하나\n");
		break;
	case 2:
		printf("둘\n");
		break;
	case 3:
		printf("셋\n");
		break;
	default:
		printf("많음\n");
		break;
	}
	return 0;
}