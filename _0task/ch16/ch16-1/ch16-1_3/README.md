- 다음 행렬을 2차원 배열에 저장하고 원소 중에서 최대값과 위치를 구하는 프로그램을 작성하라.

```math
\begin{pmatrix}
-5 & 2 & 35 \\
-20 & 5 & 100 \\
-75 & 5 & -25
\end{pmatrix}
```

# 소스 코드 설명

```c
#include <stdio.h>
```
- printf 함수 사용하기 위해 표준 입출력 라이브러리 포함

<br>

```c
#define ARRAY_SIZE 3
```
- 3x3 행렬을 2차원 배열로 선언하기 위해 상수 ARRAY_SIZE를 3으로 정의

<br>

```c
int main()
{
```
-  main 함수 시작

<br>

```c
	int arr[ARRAY_SIZE][ARRAY_SIZE] = {
		{ -5,2,35 },
		{ -20,5,100 },
		{ -75,5,-25 } };
	int maxVal = arr[0][0];
	short i, j;
```
- 2차원 배열 arr 선언 및 각 원소 -5, 2, 35, -20, 5, 100, -75, 5, -25로 초기화
- maxVal 변수를 arr[0][0] 값으로 초기화하여 최대값을 저장할 변수로 사용
- i, j 변수를 반복문에서 사용할 short형 변수로 선언

<br>

```c
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		for (j = 0; j < ARRAY_SIZE; j++)
		{
			if(maxVal < arr[i][j])
			{
				maxVal = arr[i][j];
			}
		}
	}
```
- 2중 for문을 사용하여 2차원 배열 arr의 모든 원소를 참조하여 maxVal보다 큰 값이 있으면 maxVal을 해당 값으로 갱신
	- 외부 반복문
		- 행 인덱스
	- 내부 반복문
		- 열 인덱스

<br>

```c
	printf("arr[%d][%d] == %d\n", i-1, j-1, maxVal);
```
- 최대값과 위치를 출력
	- i-1, j-1은 반복문 종료 후 i, j 값이 3이므로 2로 조정하여 최대값의 위치를 출력

<br>

```c
}
```
- main 함수 종료

# 실행 결과