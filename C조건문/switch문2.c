#include<stdio.h>
int main() {
	int a;
	printf("���� �Է�: ");
	scanf("%d", &a);
	switch (a % 3){
		case 0: 
			printf("%d�� 3�� ����Դϴ�.",a);
			break;
		default:
			printf("%d�� 3�� ����� �ƴմϴ�.",a);
			break;
	}
}