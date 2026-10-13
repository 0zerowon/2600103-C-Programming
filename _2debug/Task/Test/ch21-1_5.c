#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
	char str[20];
	printf("문자열을 입력하시오:");
	scanf("%s", str);
	printf("문자열: %s\n", str);
	return 0;
}