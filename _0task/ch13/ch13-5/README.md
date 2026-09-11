- 교재 300페이지 문제 2에서 배열의 초기값을 키보드로부터 5개의 실수를 입력 받아 저장하고 나머지는 문제와 동일하게 푸시오.
- 키보드로부터 입력 받아 저장할 때도 문제처럼 포인터 변수를 덧셈 연산을 하는 형태의 연산을 이용하여 작성하시오.

# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- scanf 함수 사용 시 발생하는 경고를 무시하기 위한 코드

<br>

```c
#include <stdio.h>
```
- C 표준 라이브러리 input, output 함수의 선언을 포함하고 있는 헤더 파일 stdio.h를 포함

<br>

```c
float arr[5];
```
- 전역 변수 float형 배열 arr[5] 선언
  - 배열 arr[5]의 각 요소는 0.0으로 초기화됨

<br>

```c
int main()
```
- main 함수 시작

<br>

```c
float* ptrArr = arr;
```
- float형 포인터 ptrArr 선언 후 배열 arr의 첫 번째 원소 주소 값으로 초기화

<br>

```c
for (int i = 0; i < 5; i++)
{
	printf("arr[%d] 초기화: ", i);
	scanf("%f", ptrArr + i);
}
```
- for 반복문을 사용하여 i 0부터 4까지 반복
  - 각 반복마다 문자열 "arr[i] 초기화: " 출력
  - scanf 함수를 사용하여 키보드로부터 실수 입력
	- 포인터 ptrArr + i가 가리키는 배열 arr의 각 요소에 저장

<br>

```c
for (int i = 0; i < 5; i++)
{
	*(ptrArr + i) += 2;
}
```
- for 반복문을 사용하여 i 0부터 4까지 반복
  - 각 반복마다 포인터 ptrArr + i가 가리키는 배열 arr의 각 요소에 2를 더함

<br>

```c
printf("\nfloat arr[5] = { ");
for (int i = 0; i < 5; i++)
{
	printf("%.1f ", *(ptrArr + i));
}
printf("}\n");
```
- 문자열을 출력하는 printf 함수를 사용하여
  - 이스케이프 시퀀스 \n로 개행, 문자열 "float arr[5] = { " 출력
- for 반복문을 사용하여 i 0부터 4까지 반복
  - 각 반복마다 포인터 ptrArr + i가 가리키는 배열 arr의 각 요소를 소수점 첫째 자리까지 출력
- 문자열 "}\n" 출력

# 실행 결과