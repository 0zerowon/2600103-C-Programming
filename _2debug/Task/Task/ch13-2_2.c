#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

char s[11];

int main()
{
	int i = 0;

	printf("문자열을 입력하시오: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%d번째 문자: %c\n", i + 1, s[i]);
	}
}