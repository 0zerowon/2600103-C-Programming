- 최소값 구하기 예제를 참고하여 아래 결과가 나오도록 코드를 수정하시오. 최대값을 구하는 부분은 반드시 함수로 작성하시오.
```
정수 5개를 입력하시오.
50\n
20\n
30\n
40\n
10\n
최대값은 50입니다
```
# 소스 코드 설명
```c
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS
```
- 보안 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 합수 포함

<br>

```c
#define NUMS_LEN 5
```
- 상수로 5를 NUMS_LEN으로 정의

<br>

```c
int GetMaxValue(int* arr, const short len);
```
- int형 반환 값을 갖는 함수 GetMaxValue 선언
	- 두 개의 매개변수
		- int형 포인터 arr, short형 상수 len

		<br>

```c
int main()
```
- 메인 함수 시작

<br>

```c
int nums[NUMS_LEN];
```
- int형 배열 nums 선언
	- 배열의 길이는 NUMS_LEN
		- 5

		<br>

```c
int i, maxVal;
```
- int형 i, maxVal 변수 선언

<br>

```c
printf("정수 %d개를 입력하시오.\n", NUMS_LEN);
```
- "정수 %d개를 입력하시오." 출력 후 개행
	- "%d" == NUMS_LEN
		- NUMS_LEN == 5

		<br>

```c
for (i = 0; i < NUMS_LEN; i++)
{
	scanf("%d", &nums[i]);
}
```
- 배열의 길이만큼 반복문 실행
	- nums[i]에 정수형으로 사용자 입력 저장

	<br>

```c
maxVal = GetMaxValue(nums, NUMS_LEN);
printf("최대값은 %d입니다.\n", maxVal);
```
- maxVal에 GetMaxValue 함수 호출하여 return한 값 대입
	- 인수로 nums 변수, NUMS_LEN 상수 사용
- "최대값은 %d입니다." 출력 후 개행
	- "%d" == GetMaxValue 함수의 return 값

<br>

```c
int GetMaxValue(int* arr, const short len)
```
GetMaxValue 함수 시작

<br>

```c
int i, max;
```
int형 지역 변수 i, max 선언

<br>

```c
max = *arr;
```
- max에 매개변수 arr이 가리키는 변수의 값 대입

<br>

```c
for (i = 1; i < len; i++)
{
	if (*(arr + i) > max)
	{
		max = *(arr + i);
	}
}
```
- 매개변수 len의 크기 보다 i가 작을 때까지 반복하면서 반복할 때마다 i++
	- i의 초기화는 1
		- max에 배열의 첫 번째 원소 값 저장되어 있음
	- 만약 배열의 첨자 i의 원소 값이 max 보다 크다면
		- max에 배열의 첨자 i의 원소 값 대입

<br>

```c
return max;
```
max 변수 반환 후 GetMaxValue 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/6090e631-5920-4186-9da4-07f3fb928c70" />
