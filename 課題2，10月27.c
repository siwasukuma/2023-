#include <stdio.h>

int main(void)
{
	int a;

	printf("�l�́H");
	scanf_s("%d",&a);

	printf("�l��");
	if (a % 2 == 0)
	{
		printf("����");
	}
	else
	{
		printf("�");
	}
	printf("�ł�\n");

	return 0;
}