#include<stdio.h>
int main() {
	int a;
	printf("정수 입력: ");
	scanf("%d", &a);
	switch (a % 3){
		case 0: 
			printf("%d는 3의 배수입니다.",a);
			break;
		default:
			printf("%d는 3의 배수가 아닙니다.",a);
			break;
	}
}