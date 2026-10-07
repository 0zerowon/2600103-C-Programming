// **********************************************
// 제 목: 문자열을 담은 포인터 배열의 문자열들 출력하기
// 날 짜: 2026년 10월 7일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

void prn_str(char** p, short cnt);

int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
	}

void prn_str(char** p, short cnt)
{
	for (unsigned short i = 0; i < cnt; i++)
	{
		printf("%s\n", *(p + i));
	}
}
