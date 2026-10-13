#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char usrInput;

	while (1)
	{
		printf("문자 입력: ");
		scanf(" %c", &usrInput);

		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
		printf("입력된 문자는 %c\n", usrInput);
	}
}