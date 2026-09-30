- 키보드로 부터 실수를 입력 받아 그것의 정수부와 소수부를 구하여 출력해주는 프로그램을 작성하시오.
- 정수부와 소수부를 구하여 리턴하는 부분을 1개의 함수로 작성할 것
	- *리턴 없이 정수부와 소수부를 구하는 1개의 함수 작성할 것
		- 구조체를 사용하면 가능하나 현재 진도에서 구조체를 배우지 않음
- 화면에 입출력하는 부분은 메인함수에서 작성할 것
- 함수의 정의, 호출, 선언을 모두 작성하시오.
```
실수를 입력하시오: 3.14159\n
정수부: 3
소수부: 0.14159
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
void SplitFloat(float* n, int* d, float* f);
```
- 반환 없는 SplitFloat 함수 선언
	- float형, int형, float형 포인터 매개변수 n, d, f

	<br>

```c
int main()
```
- 메인 함수 시작

<br>

```c
{
	float realNum;
	int intPart;
	float fracPart;
```
- 실수형 realNum 선언
- 정수형 intPart 선언
- flaot fracPart 선언

<br>

```c
	printf("실수를 입력하시오: ");
	scanf("%f", &realNum);
```
- "실수를 입력하시오: " 출력
- realNum에 사용자의 실수 입력 저장

<br>

```c
	SplitFloat(&realNum, &intPart, &fracPart);
```
- 주소 연산자를 사용한 realNum, intPart, fracPart를 인수로 SplitFloat 함수 호출

<br>

```c
	printf("정수부: %d\n", intPart);
	printf("소수부: %.5f\n", fracPart);
```
- "정수부: %d" 출력 후 개행
	- "%d" == SplitFloat 함수로 초기화한 intPart
- "소수부: %.5f" 출력 후 개행
	- %.5f == SplitFloat 함수로 초기화한 fracPart를 소수점 5자리까지 출력 후 6자리 이후 반올림
	
	<br>

```c
	return 0;
}
```
- 메인 함수 종료

<br>

```c
void SplitFloat(float* n, int* d, float* f)
{
	*d = (int)*n;
	*f = *n - (int)*n;
}
```
- SplitFloat 함수 시작
	- d가 가리키는 변수의 값에 n이 가리키는 변수의 값을 int 강제 형변환한 값 대입
		- 소수를 정수로 강제 형변환
	- f가 가리키는 변수의 값에 n이 가리키는 변수의 값 빼기 n이 가리키는 변수의 값을 int 강제 형변환한 값 대입
		- 소수에서 정수를 빼서 소수
# 출력 결과