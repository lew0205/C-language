#include<stdio.h>
int main() {
	int score;
	char HAKJUM;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &score);
	if (score <= 100 && score >= 0)
	{
		HAKJUM = score / 10;
		switch (HAKJUM) {
			case 10:
			case 9:
				printf("A����");
			case 8:
				printf("B����");
			case 7:
				printf("C����");
			case 6:
				printf("D����");
			default:
				printf("F����");
}
	}
	else
		printf("���� ��� ������ �ƴմϴ�. �ٽ� �����ϼ���.");
}