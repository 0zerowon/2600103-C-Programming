#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float arr[5];

int main(void)
{
	float* ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] ÃÊ±âÈ­: ", i);
		scanf("%f", (ptrArr + i));
	}

	for (int i = 0; i < 5; i++)
	{
		*(ptrArr + i) += 2;
	}

	printf("\nfloat arr[5] = { ");
	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", *(ptrArr + i));
	}
	printf("}\n");

}