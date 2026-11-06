// **********************************************
// 제목: 점 세 개 좌표를 입력 받아 직각 삼각형인지 판단하기
// 날짜: 2026년 11월 6일
// 작성자: 2600103 송영원
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct point
{
	int x, y;
};

struct triangle
{
	struct point p[3];
};

int main()
{
	struct triangle t;
	int tLen = sizeof(t.p) / sizeof(t.p[0]);

	for (int i = 0; i < tLen; i++)
	{
		printf("%d번째 점(x, y) 입력: ", i + 1);
		scanf("%d %d", &t.p[i].x, &t.p[i].y);

	}

	if (t.p[0].x == t.p[1].y && t.p[0].x == t.p[2].x)
	{
		fputs("삼각형은 직각 삼각형임", stdout);
	}
	else
	{
		fputs("삼각형은 직각 삼각형 아님", stdout);

	}
}