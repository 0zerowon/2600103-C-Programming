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
