#include<stdio.h>
int main() {
	int mom, son;
	printf("분자 분모 입력: ");
	scanf_s("%d %d", &son, &mom);
	if (mom != 0/*!mom*/)
		printf("%d", son / mom);
	else
		printf("0으로 못나눔");
	return 0;
}