// **********************************************
// 제 목: 최대 10 문자열 두 개 중 사전순으로 먼저 오는 문자열 출력
// 날 짜: 2026년 9월 17일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	char s1[11];
	char s2[11];

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("문자열을 입력하시오: ");
	scanf("%s", s2);

	for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += ('a' - 'A');
		}

		if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s2[i] += ('a' - 'A');
		}
	}

	if(s1[0] < s2[0])
	{
		printf("%s", s1);
	}
	else
	{
		printf("%s", s2);
	}
}