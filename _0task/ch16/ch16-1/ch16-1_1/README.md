- 다음 행렬 계산을 수행하여 결과를 출력하는 프로그램을 작성하시오.
	- 힌트: 2차원 배열을 3개 선언하고 초기화한 후 이중반복문을 이용하여 연산을 수행한다.
		- 뭔가 심심해서
			- 3차원 배열로 2차원 배열 3개를 선언 및 초기화해서 했습니다.
			- 큰 의미는 없지만 비트 필드로 메모리 절약 시도도 해 봤습니다.
- 배열표현 대신에 포인터 표현을 이용하는 코드도 작성해볼 것

```math
\begin{pmatrix}
2 & 4 \\
5 & -5
\end{pmatrix}
+
\begin{pmatrix}
-2 & 3 \\
0 & -5
\end{pmatrix}
=
\begin{pmatrix}
0 & 7 \\
5 & -10
\end{pmatrix}
```

```
연산 결과:
0	7
5	-10
```

# 소스 코드 설명

```c
#include <stdio.h>
#include <stdint.h>
```
- stdio.h 헤더 파일을 포함하여 표준 입출력 함수 사용
- stdint.h 헤더 파일을 포함하여 고정 크기 정수 타입 사용

```c
struct My_Int8
{
	unsigned char i : 2, j : 2, k : 2;
	unsigned char : 2;
}int8;
```
- My_Int8 구조체 정의
  - i, j, k: 각각 2비트 크기의 unsigned char 필드로 선언
	- 해당 코드에서 i 인덱스를 사용하지는 않았음
  - 2비트 크기의 unnamed 필드로 padding
- 구조체 변수 int8 선언

```c
int main()
{
```
- main 함수 시작

```c
	int8_t arr[3][2][2] =
	{
		{
			{2,4},
			{5,-5}
		},
		{
			{-2,3},
			{0,-5}
		},
		{
			{0}
		}
	};
```
- 3차원 배열 arr 선언 및 초기화
	- arr[0]: 첫 번째 2x2 행렬
		- arr[0][0][0] = 2, arr[0][0][1] = 4
		- arr[0][1][0] = 5, arr[0][1][1] = -5
	- arr[1]: 두 번째 2x2 행렬
		- arr[1][0][0] = -2, arr[1][0][1] = 3
		- arr[1][1][0] = 0, arr[1][1][1] = -5
	- arr[2]: 세 번째 2x2 행렬
		- arr[2][0][0] = 0, 나머지 요소는 0으로 초기화
			- 행렬 덧셈 결과 저장할 공간

```c
	printf("연산 결과:\n");
```
- "연산 결과:" 출력 후 개행

```c
	for (int8.j = 0; int8.j < 2; int8.j++)
	{
		for (int8.k = 0; int8.k < 2; int8.k++)
		{
			arr[2][int8.j][int8.k] = arr[0][int8.j][int8.k] + arr[1][int8.j][int8.k];
			printf("%d\t", arr[2][int8.j][int8.k]);
		}
		printf("\n");
	}
```
- 이중 반복문을 사용하여 행렬 덧셈 수행
	- 외부 반복문
		- int8.j = 0부터 1까지
			- 행
		- 내부 반복문
			- int8.k = 0부터 1까지
				- 열
			- arr[2][int8.j][int8.k]에 arr[0][int8.j][int8.k]와 arr[1][int8.j][int8.k]의 합 대입
			- 각 결과값을 탭으로 구분하여 출력
				- "%d" == arr[2][int8.j][int8.k]
			- int8.k++
		- 내부 반복문 종료
		- 각 행 출력 끝날 때마다 개행 출력
		- int8.j++
	- 외부 반복문 종료

```c
}
```
- main 함수 종료

## 포인터 표현 설명

```c
			*(*(*(arr + 2) + int8.j) + int8.k) = *(*(*(arr + 0) + int8.j) + int8.k) + *(*(*(arr + 1) + int8.j) + int8.k);
			printf("%d\t", *(*(*(arr + 2) + int8.j) + int8.k));
```
- *배열 arr의 첨자 2의 주소의 값에 int8.j 만큼 포인터 연산을 더한 값에 int8.k 만큼 포인터 연산을 더한 주소가 가리키는 원소 값*에
	- 대입
		- *배열 arr의 첨자 0의 주소의 값에 int8.j 만큼 포인터 연산을 더한 값에 int8.k 만큼 포인터 연산을 더한 주소가 가리키는 원소 값*
		- 더하기
		- *배열 arr의 첨자 1의 주소의 값에 int8.j 만큼 포인터 연산을 더한 값에 int8.k 만큼 포인터 연산을 더한 주소가 가리키는 원소 값*을
		- 더한 값
- *배열 arr의 첨자 2의 주소의 값에 int8.j 만큼 포인터 연산을 더한 값에 int8.k 만큼 포인터 연산을 더한 주소가 가리키는 원소 값* 출력 후 서식 문자열 탭
	- "%d" == *(*(*(arr + 2) + int8.j) + int8.k)

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/12314dae-9dd7-42a8-9f78-62426d578172" />
