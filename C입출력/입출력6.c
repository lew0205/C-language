#include<stdio.h>
int main() {
	double w, h, area, perimeter;
	printf("�غ��� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &w, &h);
	area = w * h;
	perimeter = 2 * (w + h);
	printf("�簢���� �ѷ�:%f\n", perimeter);
	printf("�簢���� ����:%f\n", area);
	return 0;
}