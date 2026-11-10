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
	ST s1;
	//int firstIdx;

	get_data(s);
	//firstIdx = get_first(s);

	//printf("제일 앞에 나오는 이름은 %s, 점수는 %d", s[firstIdx].name, s[firstIdx].score);
	s1 = get_first(s);
	printf("%s, %d", s1.name,s1.score);
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
	int f = 0;
	//int res;

	/*for (int i = 1; i < 3; i++)
	{
		res = strcmp(s[f].name, s[i].name);
		if (res > 0)
		{
			f = i;
		}
	}
	return f;*/

	for (int i = 1; i < 3; i++)
	{
		if (s[f].score < s[i].score)
		{
			f = i;
		}
	}

	ST s1 = s[f];

	return s1;
}