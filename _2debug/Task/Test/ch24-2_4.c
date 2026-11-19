#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[10];
	char gender;
	int age;
	int ret;
	FILE* fp = fopen("people.txt", "rt");

	if (fp == NULL)
	{
		puts("fail to open");
		return -1;
	}

	while (1)
	{
		ret = fscanf(fp, "%s%c%d", name, &gender, &age);

		if (ret == EOF)
		{
			break;
		}

		printf("%s %c %d\n", name, gender, age);
	}

	/*int a;
	scanf("%d", &a);
	printf("%d", a);*/
}