#include<stdio.h>

int main(void)
{
	int max = 10000;

	for (int i = 1; i <= max; i++)
	{
		if (i % 221 == 0)
		{
			printf("13��17�Ŋ���鐔%8d\n",i);
		}
		else if (i%13 == 0)
		{
			printf("13�Ŋ���鐔%8d\n",i);
		}
		else if (i%17 == 0)
		{
			printf("17�Ŋ���鐔%8d\n",i);
		}
		
	}

	return 0;
}