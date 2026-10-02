#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char str[4][10];
	char lastStrFirCh;
	short lastStrFirIdx;
	short i;

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
		
	}

	lastStrFirCh = str[0][0];
	for (i = 1; str[i][0] != '\0'; i++)
	{
		if (str[i][0] > lastStrFirCh)
		{
			lastStrFirCh = str[i][0];
			lastStrFirIdx = i;
		}
	}
	printf("사전에서 제일 뒤에 나오는 문자열: %s", &str[lastStrFirIdx][0]);
}