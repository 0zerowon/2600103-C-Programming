#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("문자 입력: ");
		scanf("%c", &ch);
		printf("문자: %c\n", ch);
	}
	return 0;
}