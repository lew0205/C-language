#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int fcnt=0;
	int bcnt=0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		if (rand() % 2 == 0)
			fcnt += 1;
		else
			bcnt += 1;
	}
	printf("������ �ո�: %d\n", fcnt);
	printf("������ �޸�: %d", bcnt);
}