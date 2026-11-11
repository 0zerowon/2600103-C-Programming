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
	ST highstScoreS;
	
	get_data(s);
	highstScoreS = get_first(s);
	
	printf("최우수 학생의 이름은 %s, 점수는 %d", highstScoreS.name,highstScoreS.score);
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
	ST hS;
	int hIdx = 0;

	for (int i = 1; i < 3; i++)
	{
		if (s[hIdx].score < s[i].score)
		{
			hIdx = i;
		}
	}

	hS = s[hIdx];

	return hS;
}