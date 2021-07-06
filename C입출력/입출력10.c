#include<stdio.h>
int main() {
	double Radius;
	double Area;
	printf("반지름을 입력하시오: ");
	scanf_s("%lf", &Radius);
	Area = Radius*Radius * 3.14;
	printf("원의 면적:%f", Area);
	return 0;
}