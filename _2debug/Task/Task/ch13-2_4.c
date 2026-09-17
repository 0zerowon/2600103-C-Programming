#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	char s1[11];
	char s2[11];

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("문자열을 입력하시오: ");
	scanf("%s", s2);

	for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += ('a' - 'A');
		}

		if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s2[i] += ('a' - 'A');
		}
	}

	if(s1[0] < s2[0])
	{
		printf("%s", s1);
	}
}