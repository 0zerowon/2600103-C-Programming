// **********************************************
// 제목: 구조체로 3명 학생의 이름과 성적을 입력하여 최우수 학생의 이름과 점수 출력하기
// 날짜: 2026년 11월 6일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct Student
{
	char name[5];
	int score;
};

int main()
{
	struct Student s[3];
	int highestScoreIdx = 0;
	int sLen = sizeof(s) / sizeof(s[0]);

	for (int i = 0; i < sLen; i++)
	{
		fputs("이름을 입력하시오: ", stdout);
		gets(s[i].name);
		fputs("성적을 입력하시오: ", stdout);
		scanf("%d", &s[i].score);
		getchar();

		if (s[highestScoreIdx].score < s[i].score)
		{
			highestScoreIdx = i;
		}
	}

	printf("최우수 학생의 이름은 %s, 점수는 %d점", s[highestScoreIdx].name, s[highestScoreIdx].score);
}