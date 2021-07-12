#include<stdio.h>
int main() {
	char yon;
	int what, one = 0, two = 0, three = 0;
	printf(">> 자동차 모델을 선택하시겠습니까? (Y/N) : ");
	scanf("%c", &yon);
	if (yon=='Y'||yon=='y')
	{
		printf("\n");
		printf("자동차 예약 현황 : %d %d %d\n", one, two, three);
		printf("자동차 모델 선택(1 ~ 3번 중 선택) : ");
		scanf("%d", &what);
		switch (what)
		{
		case 1:
			one = 1;
			printf("\n>> 예약 완료되었습니다\n");
			printf(">> 자동차 예약 현황 : %d %d %d", one, two, three);
			break;
		case 2:
			two = 1;
			printf("\n>> 예약 완료되었습니다\n");
			printf(">> 자동차 예약 현황 : %d %d %d", one, two, three);
			break;
		case 3:
			three = 1;
			printf("\n>> 예약 완료되었습니다\n");
			printf(">> 자동차 예약 현황 : %d %d %d", one, two, three);
			break;
		default:
			printf("\n>> 예약 범위가 아닙니다.\n");
			printf(">> 자동차 예약 현황 : %d %d %d", one, two, three);
			break;
		}
	}
	else if (yon == 'N' || yon == 'n')
	{
		printf("\n");
		printf(">> 자동차 예약 프로그램을 종료합니다.");
	}
	else
	{
		printf("알파벳 입력 오류입니다.\n알파벳은 대소문자 구별 없이 Y 또는 N만 허용합니다.");
	}
}