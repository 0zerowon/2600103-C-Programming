// **********************************************
// 제 목: HelloWorld의 각 문자 출력하기
// 날 짜: 2026년 9월 17일
// 작성자: 2600103 송영원
// **********************************************
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	char s[100];

	printf("문자열을 입력하시오: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')			// 대문자
		{
			s[i] += ('a' - 'A');

		}
		else if (s[i] >= 'a' && s[i] <= 'z')	// 소문자
		{
			s[i] -= ('a' - 'A');
		}
	}

	printf("%s", s);
}