#include <stdio.h>
#include <string.h>

int main()
{
	char* strs[5][10];
	int firstStrIdx, lastStrIdx;
	int cmp;

	for (int i = 0; i < 5; i++)
	{
		fputs("문자열 입력: ", stdout);
		gets(strs[i]);
	}

	firstStrIdx = lastStrIdx = 0;
	
	for (int i = 1; i < 4; i++)
	{
		cmp = strcmp(strs[firstStrIdx], strs[i]);
		if (cmp < 0)
		{
			firstStrIdx = i;
		}

		cmp = strcmp(strs[lastStrIdx], strs[i]);
		if (cmp > 0)
		{
			lastStrIdx = i;
		}
	}

	printf("제일 앞: %s\n", *strs[firstStrIdx]);
	printf("제일 뒤: %s\n", *strs[lastStrIdx]);
}