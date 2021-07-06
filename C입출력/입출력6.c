#include<stdio.h>
int main() {
	double w, h, area, perimeter;
	printf("밑변과 높이를 입력하시오: ");
	scanf_s("%lf %lf", &w, &h);
	area = w * h;
	perimeter = 2 * (w + h);
	printf("사각형의 둘레:%f\n", perimeter);
	printf("사각형의 넓이:%f\n", area);
	return 0;
}