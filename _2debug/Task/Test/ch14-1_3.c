#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int add2(int value);

int main(void)
{
	int number;
	printf("정수를 입력하세요: ");
	scanf("%d", &number);
	number = add2(number);
	printf("2만큼 증가한 값: %d\n", number);
	return 0;
}

int add2(int value)
{
	return value += 2;
}