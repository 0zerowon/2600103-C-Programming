//문자열입력: I am a boy.\n
//단어수 : 4

#include <stdio.h>

int main()
{
	char str[13];
	int strLen = sizeof(str);
	int wordCnt = 0;
	int isSpace = 1;

	fputs("문자열 입력: ", stdout);
	fgets(str, strLen, stdin);

	for (int i = 0; i < strLen - 1; i++)
	{
		if (str[i] == ' ')
		{
			isSpace = 1;
		}
		else if(isSpace)
		{
			wordCnt++;
			isSpace = 0;
		}
	}

	printf("단어 수: %d", wordCnt);
}