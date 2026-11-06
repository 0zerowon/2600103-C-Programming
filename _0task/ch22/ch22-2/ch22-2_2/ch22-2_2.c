// **********************************************
// 제목: 이름 및 점수를 입력 받아 사전 순 제일 앞에 오는 이름과 그의 점수 출력하기
// 날짜: 2026년 11월 6일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct student
{
	char name[5];
	int score;
};

int main(void)
{
	struct student arr[3];
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	int firstNameStrcmpRes;
	int firstNameIdx = 0;

	for (int i = 0; i < arrLen; i++)
	{
		fputs("이름을 입력하시오: ", stdout);
		gets(arr[i].name);

		fputs("성적을 입력하시오: ", stdout);
		scanf("%d", &arr[i].score);
		getchar();

		firstNameStrcmpRes = strcmp(arr[firstNameIdx].name, arr[i].name);
		if (firstNameStrcmpRes > 0)
		{
			firstNameIdx = i;
		}

	}

	putchar('\n');
	printf("이름은 %s, 점수는 %d", arr[firstNameIdx].name, arr[firstNameIdx].score);
}
