#include<stdio.h>
int main() {
	int year, month, day,sum;
	printf("해,월,일 입력: ");
	scanf_s("%d %d %d", &year, &month, &day);
	sum = year + month + day;
	if (sum % 10 < 5)
		printf("합은 %d입니다.", sum);
	if (sum % 10 >= 5)
		return 0;
	return 0;
}