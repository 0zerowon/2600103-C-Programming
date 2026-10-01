#include <stdio.h>
int main(void)
{
	int score[3][4]; // 3명의 4과목
	int tot; // 총점
	double avg; // 평균
	int i, j; // 반복 제어 변수
	for (i = 0; i < 3; i++) // 학생 수만큼 반복
	{
		printf("네 과목의 점수 입력 : "); // 입력 안내 메시지
		for (j = 0; j < 4; j++) // 과목 수만큼 반복
			scanf("%d", &score[i][j]); // 점수 입력
	}
	for (i = 0; i < 3; i++)
	{
		tot = 0;
		for (j = 0; j < 4; j++)
			tot += score[i][j];
		avg = tot / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", tot, avg);
	}
	return 0;
}
