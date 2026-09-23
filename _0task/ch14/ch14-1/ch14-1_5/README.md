- 교재 320페이지 문제 1번을 푸시오.
	- 단, num 변수에 저장된 값을 100배 하는 함수로 수정하라.
- 함수의 선언, 호출, 정의를 모두 사용할 것
- 2가지 방식의 차이를 설명하고 원하는 결과는 어느 것인가?

# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- scanf 사용하기 위해 visual studio 보안 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 라이브러리 포함

<br>

```c
int CallByValue(int v);
```
- int형 CallByValue 함수 선언
	- int형 매개변수 v

<br>

```c
void CallByPointer(int* v);
```
- void형 CallByPointer 함수 선언
	- int형 포인터 매개변수 v

<br>

```c
int num;
```
- 전역 변수 num 선언

<br>

```c
int main()
```
- main 함수 시작

<br>

```c
short usrChoose = 1;
```
- short형 변수 usrChoose 선언 및 1로 초기화

<br>

```c
printf("Init num: ");
scanf("%d", &num);
printf("int num = %d;\n", num);
```
- "Init num: " 출력
- num에 입력 값 저장
- "int num = %d\n" 출력
	- '%d' == num

	<br>

```c
while (usrChoose)
```
- while문 시작
- usrChoose == 1
	- 0이 아니면 무한 반복

	<br>

```c
printf("\n0: Exit / 1: Call by Value / 2: Call by Pointer / 3: Assign num / 4: Print num\n");
scanf("%hd", &usrChoose);
```
- "\n0: Exit / 1: Call by Value / 2: Call by Pointer / 3: Assign num / 4: Print num\n" 출력
- usrChoose에 메뉴 숫자 저장
	- %hd: short decimal
		- 2바이트 정수 서식 지정자

		<br>

```c
if (usrChoose == 1)
{
	num = CallByValue(num);
}
```
- usrChoose가 1이면
	- num에 CallByValue()의 반환값 대입
		- num을 인수로 호출
	<br>

```c
else if (usrChoose == 2)
{
	CallByPointer(&num);
}
```
- 위 if문 조건이 아니라 usrChoose가 2면
	- CallByPointer() 호출
		- &num을 인수로 호출

		<br>

```c
else if (usrChoose == 3)
{
	printf("Assign num: ");
	scanf("%d", &num);
	printf("num = %d;\n", num);
}
```
- 위 if문 조건이 아니라 usrChoose가 3이면
	- "Assign num: " 출력
	- num에 입력 값 저장
	- "num = %d;\n" 출력
		- '%d' == num

		<br>

```c
else
{
	printf("printf(\"num = %%d\\n\", num);\nnum = %d\n", num);
}
```
- 위 if문 조건이 아니라면
	- 예시: usrChoose == 0 || usrChoose == 4
	- "printf(\"num = %%d\\n\", num);\nnum = %d\n" 출력
		- '%d' == num
		- '\"' == '"'
		- '%%' == '%'
		- '//' == '/'

		<br>

```c
int CallByValue(int v)
{
	printf("num = CallByValue(num);\t\t// num = v * 100;\n");
	printf("int CallByValue(int v)\t\t// int v = num;\n");
	printf("{\n");
	printf("\treturn v * 100;\n");
	printf("}\n");

	return v * 100;
}

void CallByPointer(int* p)
{
	printf("CallByPointer(&num);\n");
	printf("void CallByPointer(int* p)\t// int* p = &num;\n");
	printf("{\n");
	printf("\t*p *= 100;\t\t// *&num *= 100\n");
	printf("}\n");

	*p *= 100;
}

# 실행 결과