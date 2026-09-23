- swap함수 예제를 참고하여 아래 결과가 나오도록 코드를 수정 하시오. 
	- 세 정수를 교환하는 부분은 반드시 함수(swap)로 작성하고 또, 함수의 선언, 호출, 정의를 모두 사용할 것
- 세 정수의 교환 방법은 실행 결과로부터 유추하라.
- 24페이지처럼 시간에 따라 메모리의 상태를 그려보시오.
```
정수 x를 입력 하시오: 10\n
정수 y를 입력 하시오: 20\n
정수 z를 입력 하시오: 30\n
swap 함수 호출 전 x = 10, y = 20, z = 30
swap 함수 호출 후 x = 20, y = 30, z = 10
```

| main 함수 호출 후 swap 함수 호출 전 | swap 함수 호출 직후 | tmp = *px; | *px = *py; | *py = *pz;	| *pz = tmp; | swap 함수 종료 후
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| x -> 10 | x -> 10 | x -> 10 | x -> 20 | x -> 20 | x -> 20 | x -> 20 |
| y -> 20 | y -> 20 | y -> 20 | y -> 30 | y -> 30 | y -> 30 | y -> 30 |
| z -> 30 | z -> 30 | z -> 30 | z -> 30 | z -> 30 | z -> 10 | z -> 30 |
|| tmp | tmp -> 10 | tmp -> 10 | tmp -> 10 | tmp -> 10 |
|| px -> &x | px -> &x | px -> &x | px -> &x | px -> &x |
|| py -> &y | py -> &y | py -> &y | py -> &y | py -> &y |
|| pz -> &z | pz -> &z | pz -> &z | pz -> &z | pz -> &z |


# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- scanf를 사용하기 위해 visual studio에서 보안 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 라이브러리 포함

<br>

```c
void swap(int* px, int* py, int* pz);
```
- void형 swap 함수 선언
	- 포인터 px, py, pz를 매개변수로 받음

<br>

```c
int main(void)
```
- 메안 함수 시작 

<br>

```c
int x, y, z;
```
- int형 x, y, z 선언

<br>

```c
printf("정수 x를 입력하시오: ");
scanf("%d", &x);
printf("정수 y를 입력하시오: ");
scanf("%d", &y);
printf("정수 z를 입력하시오: ");
scanf("%d", &z);
```
- "정수 x를 입력하시오: " 출력
- x에 (10) 저장
- "정수 y를 입력하시오: " 출력
- y에 (20) 저장
- "정수 x를 입력하시오: " 출력
- z에 (30) 저장

<br>

```c
printf("swap 함수 호출 전 x = %d, y = %d, z = %d\n", x, y, z);
```
- "swap 함수 호출 전 x = 10, y = 20, z = 30\n" 출력

<br>

```c
swap(&x, &y, &z);
```
- swap 함수 호출
	- 세 개의 포인터 매개변수로 받아서 인수 &x, &y, &z

<br>

```c
return 0;
```
- 메인 함수 종료

<br>

```c
void swap(int* px, int* py, int* pz)
```
- swap 함수 시작
	- px = &x;
	- py = &y;
	- pz = &z;

	<br>

```c
int tmp;
```
- 정수형 변수 tmp 선언

<br>

```c
tmp = *px;
*px = *py;
*py = *pz;
*pz = tmp;
```
- tmp에 포인터 px가 가리키는 변수의 값인 main의 지역 변수 x 값 할당
- 포인터 px가 가리키는 변수의 값인 main의 지역 변수 x에 py가 가리키는 y 값, 20 할당
- 포인터 py가 가리키는 변수의 값인 main의 지역 변수 y에 pz가 가리키는 z 값, 30 할당
- 포인터 pz가 가리키는 변수의 값인 main의 지역 변수 z에 tmp의 값, 10 할당

<br>

```c
printf("swap 함수 호출 후 x = %d, y = %d, z = %d\n", *px, *py, *pz);
```
- "swap 함수 호출 후 x = 20, y = 30, z = 10\n" 출력

# 실행 결과
<img width="1363" height="762" alt="image" src="https://github.com/user-attachments/assets/bf7d0fca-eeb8-4c27-986e-f6d8fb9921a5" />

- 한글 깨짐
