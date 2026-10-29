#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void NewLineChToSpaceCh(char* str);

int main()
{
	char str1[30] = "", str2[10];

	while (1)
	{
		fputs("문자열 입력: ", stdout);
		fgets(str2, sizeof(str2), stdin);
		NewLineChToSpaceCh(str2);
		strcat(str1, str2);
		
		if (!strcmp(str2, "quit "))
		{
			break;
		}
		printf("입력된 문자열: %s\n", str1);
	}

}

void NewLineChToSpaceCh(char* str)
{
	int len = strlen(str);

	str[len - 1] = ' ';
}
