#include<stdio.h>
int main() {
	char yon;
	int what, one = 0, two = 0, three = 0;
	printf(">> �ڵ��� ���� �����Ͻðڽ��ϱ�? (Y/N) : ");
	scanf("%c", &yon);
	if (yon=='Y'||yon=='y')
	{
		printf("\n");
		printf("�ڵ��� ���� ��Ȳ : %d %d %d\n", one, two, three);
		printf("�ڵ��� �� ����(1 ~ 3�� �� ����) : ");
		scanf("%d", &what);
		switch (what)
		{
		case 1:
			one = 1;
			printf("\n>> ���� �Ϸ�Ǿ����ϴ�\n");
			printf(">> �ڵ��� ���� ��Ȳ : %d %d %d", one, two, three);
			break;
		case 2:
			two = 1;
			printf("\n>> ���� �Ϸ�Ǿ����ϴ�\n");
			printf(">> �ڵ��� ���� ��Ȳ : %d %d %d", one, two, three);
			break;
		case 3:
			three = 1;
			printf("\n>> ���� �Ϸ�Ǿ����ϴ�\n");
			printf(">> �ڵ��� ���� ��Ȳ : %d %d %d", one, two, three);
			break;
		default:
			printf("\n>> ���� ������ �ƴմϴ�.\n");
			printf(">> �ڵ��� ���� ��Ȳ : %d %d %d", one, two, three);
			break;
		}
	}
	else if (yon == 'N' || yon == 'n')
	{
		printf("\n");
		printf(">> �ڵ��� ���� ���α׷��� �����մϴ�.");
	}
	else
	{
		printf("���ĺ� �Է� �����Դϴ�.\n���ĺ��� ��ҹ��� ���� ���� Y �Ǵ� N�� ����մϴ�.");
	}
}