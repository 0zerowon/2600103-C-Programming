// **********************************************
// 제목: 구조체에 학생들의 이름과 성적을 입력하여 사전순 제일 첫 번째 학생의 이름과 점수를 구조체로 반환 받아 출력하기
// 날짜: 2026년 11월 10일
// 작성자: 2600103 송영원
// **********************************************

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