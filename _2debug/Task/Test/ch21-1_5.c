#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
	char str[20];
	int i;

	printf("문자열을 입력하시오: ");
    for (i = 0; i < sizeof(str) - 1; i++)
    {
		scanf("%c", &str[i]);
		if (str[i] == '\n')
		{
			break;
		}
    }
    str[i] = '\0';

	printf("문자열: %s\n", str);

	return 0;
}