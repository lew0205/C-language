#include<stdio.h>
int main() {
	double Dollar,ER;
	int Won;
	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &ER);
	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &Won);
	Dollar = Won/ER;
	printf("��ȭ %d���� %f�޷��Դϴ�.", Won, Dollar);
	return 0;
}