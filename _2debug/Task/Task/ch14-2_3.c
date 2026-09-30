#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

void get_data(int* d);

int main(void)
{
	int i, data[5];
	get_data(data);
	for (i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			printf("...");
			continue;
		}
		if (i == 3)
		{
			printf("\n");
			continue;
		}
		printf("%d번째 data: %d\n", i + 1, data[i]);
	}
	return 0;
}

void get_data(int* d)
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			printf("...");
			continue;
		}
		if (i == 3)
		{
			printf("\n");
			continue;
		}
		printf("%d번째 data를 입력하시오: ", i + 1);
		scanf("%d", d + i);
	}

}
