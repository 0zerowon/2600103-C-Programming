- 예제 2번을 참고하여 함수 포인터를 활용하여 다음처럼 실행되는 코드를 작성하시오.
- 공통 부분은 하나의 함수에 작성하고 연산 부분만 분리된 함수로 만들 것
```
연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈): 1\n
두 개의 정수를 입력하시오: 10 20\n
결과값: 30
```

# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- scanf 함수와 printf 함수를 사용하기 위한 코드

```c
void MenuSelect(unsigned short* menu, short* a, short* b);
void Calculator(unsigned short usrInput, short a, short b);
void PrintResult(short (*calRes)(short, short), short a, short b);
```
- 사용자가 사용할 메뉴를 정의할 함수 선언
	- 반환 없는 MenuSelect
		- 매개변수
			- 부호 없는 short형 포인터 menu
			- short형 포인터 a, b
- 사용자가 선택한 메뉴를 실행할 함수 선언
	- 반환 없는 Calculator
		- 매개변수
			- 부호 없는 short형 변수 usrInput
			- short형 변수 a, b
- 메뉴를 실행하여 출력하는 함수 선언
	- 반환 없는 PrintResult
		- 매개변수
			- 매개변수를 short 변수 두 개로 선언된 short형 함수를 담는 함수 포인터 calRes
			- short형 변수 a, b

```c
short Add(short a, short b);
short Sub(short a, short b);
short Mul(short a, short b);
short Div(short a, short b);
```
- 사칙연산을 수행할 함수 선언
	- short형 함수
		- Add
		- Sub
		- Mul
		- Div
	- 매개변수
		- short형 a, b

```c
int main()
{
```
- main 함수 시작

```c
	unsigned short usrMenuSelection = 0;
	short decA, decB;
```
- 부호 없는 short형 변수 usrMenuSelection 선언 및 0으로 초기화
- short형 변수 decA, decB 선언

```c
	MenuSelect(&usrMenuSelection, &decA, &decB);
	Calculator(usrMenuSelection, decA, decB);
```
- MenuSelect 함수 호출
	- 인자
		- 주소 연산을 하여 포인터 매개변수에 전달
			- &usrMenuSelection
			- &decA
			- &decB

```c
}
```
- main 함수 종료

```c
void MenuSelect(unsigned short* menu, short* a, short* b)
```
- MenuSelect 함수 정의

```c
{
	printf("연산을 선택하시오(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ");
	scanf("%hu", menu);
	printf("두 개의 정수를 입력하시오: ");
	scanf("%hd %hd", a, b);
}
```
- "연산을 선택하시오(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): " 출력
- usrMenuSelection에 사용자 입력 할당
- "두 개의 정수를 입력하시오: " 출력
- a, b에 사용자 입력 할당

```c
void Calculator(unsigned short usrMenuInput, short a, short b)
```
- Calculator 함수 정의

```c
{
	switch (usrMenuInput)
	{
		case 1:
		{
			PrintResult(Add, a, b);
			break;
		}
		case 2:
		{
			PrintResult(Sub, a, b);
			break;
		}
		case 3:
		{
			PrintResult(Mul, a, b);
			break;
		}
		case 4:
		{
			PrintResult(Div, a, b);
			break;
		}
	}
}
```
- 분기문
	- 매개변수 usrMenuInput의 값이
		- 1
			- PrintResult 함수 실행
				- 매개변수
					- Add 함수 주소
					- 매개변수 a, b
		- 2
			- PrintResult 함수 실행
				- 매개변수
					- Sub 함수 주소
					- 매개변수 a, b
		- 3
			- PrintResult 함수 실행
				- 매개변수
					- Mul 함수 주소
					- 매개변수 a, b
		- 4
			- PrintResult 함수 실행
				- 매개변수
					- Div 함수 주소
					- 매개변수 a, b

```c
void PrintResult(short(*calRes)(short, short), short a, short b)
```
-PrintResult 함수 정의

```c
{
	short res = calRes(a, b);

	printf("결과 값: %hd", res);
}
```
- 지역변수 short형 res 선언 및 
	- 매개변수 함수 포인터 calRes로 해당 주소의 함수에 인자로 매개변수 a, b를 사용한 함수 호출의 반환 값으로 초기화
- "결과 값: %hd" 출력
	- "hd": 부호 있는 short형 변수 res의 값

```c
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
```
- short형 사칙연산을 수행하는 함수 정의
	- Add
		- 매개변수의 a, b를 더한 값 반환
	- Sub
		- 매개변수의 a, b를 뺀 값 반환
	- Mul
		- 매개변수의 a, b를 곱한 값 반환
	- Div
		- 매개변수의 a, b를 나눈 값 반환
# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/e58f04e7-3d45-46e9-8fec-cfd5412f2797" />
