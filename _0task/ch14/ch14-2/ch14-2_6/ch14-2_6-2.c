// **********************************************
// 제 목: 회문인지 판단하기
// 날 짜: 2026년 10월 1일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	char str[100];
	int i = 0;

	printf("문자열 입력: ");
	scanf("%s", str);

	while (str[i] != '\0')
	{
		i++;
	}

	if (str[i / 2 - 1] == str[i / 2 + 1])
	{
		printf("회문입니다.");
	}
	else if (str[i / 2 - 1] == str[i / 2])
	{
		printf("회문입니다.");
	}
	else
	{
		printf("회문이 아닙니다.");
	}
}