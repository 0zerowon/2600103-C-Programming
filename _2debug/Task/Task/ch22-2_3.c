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
	struct student* pArr = arr;
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	int ResFirstNameStrcmp;
	int IdxFirstName = 0;

	for (int i = 0; i < arrLen; i++)
	{
		fputs("이름을 입력하시오: ", stdout);
		gets((pArr + i)->name);

		fputs("성적을 입력하시오: ", stdout);
		scanf("%d", &(pArr + i)->score);
		getchar();

		ResFirstNameStrcmp = strcmp((pArr + IdxFirstName)->name, (pArr + i)->name);
		if (ResFirstNameStrcmp > 0)
		{
			IdxFirstName = i;
		}

	}

	putchar('\n');
	printf("이름은 %s, 점수는 %d", (pArr + IdxFirstName)->name, (pArr + IdxFirstName)->score);
}