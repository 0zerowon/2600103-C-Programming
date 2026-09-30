// **********************************************
// 제 목: 실수를 정수부와 소수부 출력하기
// 날 짜: 2026년 9월 30일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

void SplitFloat(float* n, int* d, float* f);

int main()
{
	float realNum;
	int intPart;
	float fracPart;

	printf("실수를 입력하시오: ");
	scanf("%f", &realNum);

	SplitFloat(&realNum, &intPart, &fracPart);
	printf("정수부: %d\n", intPart);
	printf("소수부: %.5f\n", fracPart);

	return 0;
}

void SplitFloat(float* n, int* d, float* f)
{
	*d = (int)*n;
	*f = *n - (int)*n;
}
