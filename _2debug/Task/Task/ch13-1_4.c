#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float arr[5];

int main()
{
	float* ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] ÃÊ±âÈ­: ", i);
		scanf("%f", ptrArr++);
	}

	ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		*ptrArr++ += 2;
	}
	
	ptrArr = arr;

	printf("\nfloat arr[5] = { ");
	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", *ptrArr++);
	}
	printf("}\n");
}