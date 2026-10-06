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
	short maxIdxI = 0, maxIdxJ = 0;
```
- 2차원 배열 arr 선언 및 각 원소 -5, 2, 35, -20, 5, 100, -75, 5, -25로 초기화
- maxVal 변수를 arr[0][0] 값으로 초기화하여 최대값을 저장할 변수로 사용
- short형 변수 maxIdxI, maxIdxJ를 선언 및 0으로 초기화
	- 최대값의 위치를 저장할 인덱스

<br>

```c
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		for (j = 0; j < ARRAY_SIZE; j++)
		{
			if(maxVal < arr[i][j])
			{
				maxVal = arr[i][j];
				maxIdxI = i;
				maxIdxJ = j;
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
	printf("최대값은 %d\n위치는 %d행 %d열\n", maxVal, maxIdxI + 1, maxIdxJ + 1);
```
- 최대값과 위치를 출력
	- 배열의 인덱스는 0부터 시작하기에 maxIdxI, maxIdxI 값이 1, 2이므로 2, 3으로 조정하여 최대값의 위치를 출력

<br>

```c
}
```
- main 함수 종료

# 실행 결과

