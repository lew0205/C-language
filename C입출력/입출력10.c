#include<stdio.h>
int main() {
	double Radius;
	double Area;
	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &Radius);
	Area = Radius*Radius * 3.14;
	printf("���� ����:%f", Area);
	return 0;
}