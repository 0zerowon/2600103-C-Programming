#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char usrInput;

	while (1)
	{
		fputs("문자 입력: ", stdout);
		usrInput = getchar();
		fgetc(stdin);

		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
		fputs("입력된 문자는 ", stdout);
		putchar(usrInput);
		fputc('\n', stdout);
	}
}