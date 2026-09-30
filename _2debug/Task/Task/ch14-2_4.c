#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float Split_Number(float f);

int main()
{
	float realNum = 0.0f;

	printf("실수를 입력하시오: ");
	scanf("%f", &realNum);

	float frac = Split_Number(realNum);
	printf("정수부: %d\n", (int)realNum);
	printf("소수부: %.6f\n", frac);

	return 0;
}

float Split_Number(float f)
{
	return f - (int)f;
}
