#include <stdio.h>

int main(void)
{
	int a;

	printf("’l‚ÍH");
	scanf_s("%d",&a);

	printf("’l‚Í");
	if (a % 2 == 0)
	{
		printf("‹ô”");
	}
	else
	{
		printf("Šï”");
	}
	printf("‚Å‚·\n");

	return 0;
}