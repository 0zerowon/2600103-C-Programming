#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

char s[100];

int main()
{
	int i = 0;

	printf("문자열을 입력하시오: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > s[i] + ('A' + 'a'))
		{
			s[i] -= ('a' - 'A');

		}
		else
		{
			s[i] += ('A' + 'a');
		}
	}
	// 흠
	printf("%s", s);
}