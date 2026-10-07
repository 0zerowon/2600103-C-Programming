#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void MaxAndMin(int** maxP, int** minP, int* arr, const unsigned short arrLen)
{
	unsigned short i;
	for (i = 0; i < arrLen; i++)
	{
		printf("arr[%d] == ", i);
		scanf("%d", arr + i);
	}

	int arrMax = *(arr + 0);
	int arrMin = *(arr + 0);
	for (i = 1; i < arrLen; i++)
	{
		if (arrMax < *(arr + i))
		{
			*maxP = arr + i;
			arrMax = *(arr + i);
		}
		else if (arrMin > *(arr + i))
		{
			*minP = arr + i;
			arrMin = *(arr + i);
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
	printf("int arr[5]의 최대값은 %d, 최소값은 %d", *maxPtr, *minPtr);
}