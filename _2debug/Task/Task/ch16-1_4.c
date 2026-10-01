#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	char str[4][10];
	short strLen = 0;
	int i, j;
	for (i = 0; i < 4; i++) {
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	i = 0;
	for (j = 0; j < 4; j++)
	{
		while (str[j][i] != '\0')
		{
			i++;
		}
		strLen = i;
		printf("%d번째 문자열 길이: %d\n", j + 1, strLen);
		i = 0;
	}
	return 0;
}