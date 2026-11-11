#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct Student
{
	char name[10];
	int score;
};

typedef struct Student ST;

void get_data(ST* s);
ST get_first(ST* s);

int main()
{
	ST s[3];
	ST firstNameS;

	get_data(s);
	firstNameS = get_first(s);

	printf("제일 앞에 나오는 이름은 %s, 점수는 %d", firstNameS.name, firstNameS.score);
}

void get_data(ST* s)
{
	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", s[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &s[i].score);
	}
}

ST get_first(ST* s)
{
	ST f;
	int cmpRes;
	int firstIdx = 0;

	for (int i = 1; i < 3; i++)
	{
		cmpRes = strcmp(s[firstIdx].name, s[i].name);
		if (cmpRes > 0)
		{
			firstIdx = i;
		}
	}

	f = s[firstIdx];

	return f;
}