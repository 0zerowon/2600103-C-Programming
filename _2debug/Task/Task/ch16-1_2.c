#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define STUDENT 3
#define SUBJECT 3

int main()
{
	unsigned short score[STUDENT][SUBJECT];
	unsigned short meanScore[STUDENT] = { 0 };
	unsigned short hstScoreIdx = 0;
	unsigned short i, j;

	for (i = 0; i < STUDENT; i++)
	{
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
		for (j = 0; j < SUBJECT; j++)
		{
			scanf("%hu", &score[i][j]);
			meanScore[i] += score[i][j];
		}
		meanScore[i] /= SUBJECT;

		if (meanScore[hstScoreIdx] < meanScore[i])
		{
			hstScoreIdx = i;
		}
	}

	printf("최우수 학생은 %hu번재이고 평균 점수는 %hu이다.", hstScoreIdx + 1, meanScore[hstScoreIdx]);
}