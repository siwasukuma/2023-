#include<stdio.h>
int main(void)

{
	char large;//大文字
	printf("charを入力してください。");
	scanf_s("%c", &large);
if ((large >= 'A') && (large <= 'Z'))
	{
		printf("大文字は含まれています。\n");
	}
else 
	printf("大文字は含まれていません。\n");
	
	return 0;
}




