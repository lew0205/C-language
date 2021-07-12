#include<stdio.h>
int main() {
	char a;
	printf("문자를 입력하시오 :");
	scanf("%c",&a);
	if (a>='0'&&a<= '9')
		printf("%c는 숫자",a);
	else if (a >= 'a' &&a<= 'z')
		printf("%c는 소문자",a);
	else if (a >= 'A' &&a<= 'Z')
		printf("%c는 대문자",a);
	else
		printf("%c는 기타문자입니다",a);
}