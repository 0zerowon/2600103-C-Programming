// **********************************************
// 제 목: 10진수를 2진수로 변환하기
// 날 짜: 2026년 9월 30일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int binary[16];

int main()
{
	int intInput;

	printf("10진수 정수 입력: ");
	scanf("%d", &intInput);

	for (int i = 0; intInput > 0; i++)
	{
		binary[i] = intInput % 2 ? 1 : 0;
		intInput /= 2;
	}

	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	
}