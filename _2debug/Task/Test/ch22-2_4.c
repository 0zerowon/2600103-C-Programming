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
		printf("%d¹øÂ° Á¡(x, y) ÀÔ·Â: ", i + 1);
		scanf("%d %d", &t.p[i].x, &t.p[i].y);

	}

	if (t.p[0].x == t.p[1].y && t.p[0].x == t.p[2].x)
	{
		fputs("»ï°¢ÇüÀº Á÷°¢ »ï°¢ÇüÀÓ", stdout);
	}
	else
	{
		fputs("»ï°¢ÇüÀº Á÷°¢ »ï°¢Çü ¾Æ´Ô", stdout);

	}
}