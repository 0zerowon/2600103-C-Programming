// **********************************************
// 제 목: 4개의 문자열 길이 구하기
// 날 짜: 2026년 10월 1일
// 작성자: 2600103 송영원
// **********************************************

#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char str[4][10];
	int i, j = 0;

	for (i = 0; i < 4; i++) 
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (i = 0; i < 4; i++)
	{
		while (str[i][j] != '\0')
		{
			j++;
		}
		printf("%d번째 문자열 길이: %d\n", i + 1, j);
		j = 0;
	}
}