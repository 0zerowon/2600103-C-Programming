// **********************************************
// 제 목: 배열 arr의 최대값과 최소값의 원소 주소를 간접 참조하여 출력하기
// 날 짜: 2026년 10월 7일
// 작성자: 2600103 송영원
// **********************************************

#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void MaxAndMin(int** maxP, int** minP, int* arr, const unsigned short arrLen)
{
	unsigned short i;
	for (i = 0; i < arrLen; i++)
	{
		printf("arr[%hu] == ", i);
		scanf("%d", arr + i);
	}

	*maxP = arr;
	*minP = arr;
	for (i = 1; i < arrLen; i++)
	{
		if (**maxP < *(arr + i))
		{
			*maxP = arr + i;
		}
		else if (**minP > *(arr + i))
		{
			*minP = arr + i;
		}
	}
}

int main()
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	const unsigned short len = sizeof(arr) / sizeof(arr[0]);

	MaxAndMin(&maxPtr, &minPtr, arr, len);
	printf("배열 arr의 최대값은 %d, 최소값은 %d", *maxPtr, *minPtr);
}