#include<stdio.h>
int main() {
	char a;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%c",&a);
	if (a>='0'&&a<= '9')
		printf("%c�� ����",a);
	else if (a >= 'a' &&a<= 'z')
		printf("%c�� �ҹ���",a);
	else if (a >= 'A' &&a<= 'Z')
		printf("%c�� �빮��",a);
	else
		printf("%c�� ��Ÿ�����Դϴ�",a);
}