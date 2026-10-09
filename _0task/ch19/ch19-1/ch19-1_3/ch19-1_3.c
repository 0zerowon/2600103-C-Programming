// **********************************************
// 제 목: 함수 포인터로 사칙연산하기
// 날 짜: 2026년 10월 9일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void MenuSelect(unsigned short* menu, short* a, short* b);
void Calculator(unsigned short usrInput, short a, short b);
void PrintResult(short (*calRes)(short, short), short a, short b);
short Add(short a, short b);
short Sub(short a, short b);
short Mul(short a, short b);
short Div(short a, short b);

int main()
{
	unsigned short usrMenuSelection = 0;
	short decA, decB;

	MenuSelect(&usrMenuSelection, &decA, &decB);
	Calculator(usrMenuSelection, decA, decB);
}

void MenuSelect(unsigned short* menu, short* a, short* b)
{
	printf("연산을 선택하시오(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ");
	scanf("%hu", menu);
	printf("두 개의 정수를 입력하시오: ");
	scanf("%hd %hd", a, b);
}

void Calculator(unsigned short usrMenuInput, short a, short b)
{
	//short res = 0;

	switch (usrMenuInput)
	{
		case 1:
		{
			//res = a + b;
			PrintResult(Add, a, b);
			break;
		}
		case 2:
		{
			//res = a - b;
			PrintResult(Sub, a, b);
			break;
		}
		case 3:
		{
			//res = a * b;
			PrintResult(Mul, a, b);
			break;
		}
		case 4:
		{
			//res = a / b;
			PrintResult(Div, a, b);
			break;
		}
	}

	//printf("결과 값: %hd", res);
}

void PrintResult(short(*calRes)(short, short), short a, short b)
{
	short res = calRes(a, b);

	printf("결과 값: %hd", res);
}

short Add(short a, short b)
{
	return a + b;
}

short Sub(short a, short b)
{
	return a - b;
}

short Mul(short a, short b)
{
	return a * b;
}

short Div(short a, short b)
{
	return a / b;
}
