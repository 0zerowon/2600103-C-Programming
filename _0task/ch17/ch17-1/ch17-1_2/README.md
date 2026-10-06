- 다음 코드에서 함수 선언과 정의를 추가하여 결과처럼 나오도록 하시오.

```c
#include <stdio.h>
// 함수선언
int main(void)
{
int num1 = 50, num2 = 20, num3 = 30;
int* ptrarr[3] = {&num1, &num2, &num3};
int max;
max = get_max(ptrarr, 3); // 함수호출
printf("최대값: %d\n", max);
return 0;
}
// 함수정의
```

```
최대값: 50
```

# 소스 코드 설명
```c
int get_max(int** p, int len);
```
- int형 값을 반환하는 get_max 선언
	- 매개변수 int형 이중 포인터 p, int형 len
		- 이중 포인터는 포인터의 주소 값을 받음

	<br>

```c
int get_max(int** p, int len)
{
```
- get_max 정의

<br>

```c
	int m = **(p + 0);
```
- 반환할 최대값을 저장할 변수 m 선언 및
- 매개변수 p가 가르키는 포인터의 주소 값의
	- 포인터가 가르키는 변수의 주소 값에
		- 포인터 연산 + 0한 주소의 변수의 값으로 초기화
			- ptrarr[0]

			<br>

```c
	for (int i = 1; i < len; i++)
	{
```
- 반복문 시작
	- int형 i 선언 및 1로 초기화
		- m에는 참조할 첨자 값인 ptraar[0]의 값이 저장되어 있기 때문
	- i가 매개변수 len 보다 작을 때까지
		- 배열의 모든 원소 참조
			- 3

			<br>

```c
		if (**(p + i) > m)
		{
			m = **(p + i);
		}
```
- 만약 매개변수 p가 최종적으로 가르키는 값인 배열에 포인터 연산 + i한 값이 m 보다 크다면
	- m에 그 값을 대입
		- 반복문이 실행될 때마다 조건을 확인하여 해당하면 실행

		<br>

```c
	}
```
- i += 1;
- i가 len 보다 작으면 
	- 반복
- 아니라면
	- 반복문 종료

	<br>

```c
	return m;
}
```
- 함수를 호출한 곳에 m을 반환 후 get_max 함수 종료

# 실행 결과