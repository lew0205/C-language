//��Ŭ���� ȣ����
#include<stdio.h>
int main() {
	int x, y,temp,gcm;
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��,������): ");
	scanf("%d %d", &x, &y);
	while (y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	if (y == 0)
		gcm = x;
	}
	printf("�ִ� ������� %d�Դϴ�.", gcm);
}