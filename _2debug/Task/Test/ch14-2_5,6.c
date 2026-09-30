#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

//void ShowAllData(const int* arr, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}

int main()
{
	int nums[10];
	int i = 0, tmp;

	for (int j = 9; j > i; j--)
	{
		for (; i <= j; i++)
		{
			
			printf("입력: ");
			scanf("%d", &tmp);

			if (tmp % 2 == 1)
			{
				nums[i] = tmp;
			}
			else
			{
				nums[j] = tmp;
				break;
			}
		}
	}
	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}

}