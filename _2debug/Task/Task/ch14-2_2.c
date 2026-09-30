#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUMS_LEN 5

GetMaxValue(int* arr, const short len);

int main()
{
	int nums[NUMS_LEN];
	int i, maxVal;

	printf("정수 %d개를 입력하시오: ", NUMS_LEN);
	for (i = 0; i < NUMS_LEN; i++)
	{
		scanf("%d", &nums[i]);
	}

	maxVal = GetMaxValue(nums, NUMS_LEN);
	printf("최대값은 %d입니다.\n", maxVal);
}

GetMaxValue(int* arr, const short len)
{
	int i, max;
	max = *arr;

	for (i = 1; i < len; i++)	// max가 arr[0]이라 i = 1부터 비교
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}

	return max;
}