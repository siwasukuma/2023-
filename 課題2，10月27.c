#include <stdio.h>

int main(void)
{
	int a;

	printf("値は？");
	scanf_s("%d",&a);

	printf("値は");
	if (a % 2 == 0)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}
	printf("です\n");

	return 0;
}