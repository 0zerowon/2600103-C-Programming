// **********************************************
//		제	목: 포인터를 활용하여 초기화한 각 배열 원소 값 2 더하기
//		날	짜: 2026년 9월 11일
//		작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float arr[5];

int main()
{
	float* ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] 초기화: ", i);
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