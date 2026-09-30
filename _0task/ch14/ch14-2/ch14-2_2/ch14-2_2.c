// **********************************************
// 제 목: 배열 NUMS_LEN 개에 정수를 사용자에게 입력 받고 최대값 출력하기
// 날 짜: 2026년 9월 30일
// 작성자: 2600103 송영원
// **********************************************

#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUMS_LEN 5

int GetMaxValue(int* arr, const short len);

int main()
{
	int nums[NUMS_LEN];
	int i, maxVal;

	printf("정수 %d개를 입력하시오.\n", NUMS_LEN);
	for (i = 0; i < NUMS_LEN; i++)
	{
		scanf("%d", &nums[i]);
	}

	maxVal = GetMaxValue(nums, NUMS_LEN);
	printf("최대값은 %d입니다.\n", maxVal);
}

int GetMaxValue(int* arr, const short len)
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