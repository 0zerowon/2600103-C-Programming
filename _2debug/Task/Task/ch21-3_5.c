#include <stdio.h>
#include <string.h>

int main()
{
	char strs[5][10];
	int firstStrIdx = 0, lastStrIdx = 0;
	int cmpRes = 0;

	for (int i = 0; i < 5; i++)
	{
		fputs("문자열 입력: ", stdout);
		fgets(strs[i], sizeof(strs[i]), stdin);
		int j = strlen(strs[i]);
		strs[i][j - 1] = '\0';
	}

	for (int i = 1; i < 5; i++)
	{
		cmpRes = strcmp(strs[firstStrIdx], strs[i]);
		if (cmpRes > 0)
		{
			firstStrIdx = i;
		}

		cmpRes = strcmp(strs[lastStrIdx], strs[i]);
		if (cmpRes < 0)
		{
			lastStrIdx = i;
		}
	}

	printf("제일 앞: %s\n", strs[firstStrIdx]);
	printf("제일 뒤: %s\n", strs[lastStrIdx]);
}