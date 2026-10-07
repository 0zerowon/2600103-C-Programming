- 교재 368페이지의 문제 17-1을 푸시오.
- 소스코드의 모든 라인을 자세히 설명하시오.
- 메모리 그림을 이용하여 설명할 것

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
```
- 전처리기 매크로 _CRT_SECURE_NO_WARNINGS 정의
	- scanf 함수의 보안 취약점에 대한 경고 무시
		- 버퍼 오버플로우
		- 서식 지정자 불일치

<br>

```c
#pragma warning(disable:6031)
```
- 전처리기 지시문
	- 컴파일에게 경고 코드 6031 비활성화
		- scanf 함수가 반환하는 값을 사용하지 않아서 발생하는 경고

	<br>

```c
#include <stdio.h>
```
- 전처리기 지시문 
	- 입출력 표준 헤더 파일 포함
```
void MaxAndMin(int** maxP, int** minP, int* arr, const unsigned short arrLen)
```
- 반환 값 없는 MaxAndMin 함수 선언 및 정의
	- 매개변수
		- int형 더블 포인터 maxP, minP
			- main 함수의 지역 변수인 포인터 maxPtr, minPtr의 주소를 인수로 사용
		- int형 포인터 arr
			- main 함수의 지역 변수인 배열 arr의 첫 번째 원소의 주소를 인수로 사용
		- 부호 없는 short형 상수 arrLen
			- main 함수의 지역 변수인 len을 인수로 사용
<br>

```c
{
```
- MaxAndMin 함수 시작

<br>

```c
	unsigned short i;
```
- 부호 없는 short형 지역 변수 i 선언

<br>

```c
	for (i = 0; i < arrLen; i++)
```
- i를 0으로 초기화
- i가 매개변수 arrLen 보다 작으면
	- 반복문 시작

<br>

```c
	{
```
- 반복문 본문 시작

<br>

```c
		printf("arr[%d] == ", i);
```
- printf 함수로 "arr[%d] == " 출력
	- "%d" == i
		- 첨자

<br>

```c
		scanf("%d", arr + i);
```
- scanf 함수로 정수 입력
	- 매개변수 arr의 포인터 연산 + i가 가르키는 주소에 사용자 입력 값 할당
		- sanf 함수는 인자를 주소로, 간접 참조 연산으로 가르키는 변수에 사용자 입력 값 대입

<br>

```c
	}
```
- i에 i + 1의 값 대입
- 반복문 조건 확인
	- 거짓이라면
		- 반복문 종료

<br>

```c
	int arrMax = *(arr + 0);
```
- int형 지역변수 arrMax 선언 및
- 매개변수 arr에 포인터 연산 + 0한 주소 값을 간접 참조 연산한 값으로 초기화
	- 배열 첨자 0의 원소 값

<br>

```c
	int arrMin = *(arr + 0);
```
- int형 지역변수 arrMin 선언 및
- 매개변수 arr에 포인터 연산 + 0한 주소 값을 간접 참조 연산한 값으로 초기화
	- 배열 첨자 0의 원소 값

<br>

```c
	for (i = 1; i < arrLen; i++)
```
- i를 1로 대입
	- arrMax, arrMin에 배열 첨자 0의 값이 대입되어 있어 첨자 1의 원소 값부터 비교
- i가 arrLen 보다 작으면
	- 반복문 시작

<br>

```c
	{
```
- 반복문 본문 시작

<br>

```c
		if (arrMax < *(arr + i))
```
- arrMax가 매개변수 arr에 포인터 연산 + i한 주소 값을 간접 참조 연산한 값 보다 작으면
	- 배열의 첨자 i의 원소 값

<br>

```c
		{
```
- 분기문 본문 시작

<br>

```c
			*maxP = arr + i;
```
- 매개 변수 maxP의 간접 참조한 곳에 arr에 포인터 연산 + i한 주소 값 대입
	- main 함수의 지역 변수 maxPtr

<br>

```c
			arrMax = *(arr + i);
```
- 지역 변수 arrMax에 매개변수 arr에 포인터 연산 + i한 주소 값을 간접 참조 연산한 값 대입
	- 배열의 첨자 i의 원소 값
	
<br>

```c
		}
```
- 분기문 종료
	
<br>

```c
		else if (arrMin > *(arr + i))
```
- 위 분기문의 조건이 거짓이고
- arrMin이 매개변수 arr에 포인터 연산 + i한 주소 값을 간접 참조 연산한 값 보다 크다면
	
<br>

```c
		{
```
- 분기문 본문 시작
	
<br>

```c
			*minP = arr + i;
```
- 매개 변수 minP의 간접 참조한 곳에 arr에 포인터 연산 + i한 주소 값 대입
	- main 함수의 지역 변수 minPtr
	
<br>

```c
			arrMin = *(arr + i);
```
- 지역 변수 arrMin에 매개변수 arr에 포인터 연산 + i한 주소 값을 간접 참조 연산한 값 대입
	- 배열의 첨자 i의 원소 값
	
<br>

```c
		}
```
- 분기문 종료
	
<br>

```c
	}
```
- i에 i + 1한 값 대입
- 반복문 조건 확인
	- 거짓이라면
		- 반복문 종료
	
<br>

```c
}
```
- MaxAndMin 함수 종료
	
<br>

```c
int main()
```
- main 함수 시작
	
<br>

```c
{
- main 함수 본문 시작
	
<br>

```c
	int* maxPtr;
```
- int형 포인터 maxPtr 선언
	
<br>

```c
	int* minPtr;
```
- int형 포인터 minPtr 선언
	
<br>

```c
	int arr[5];
```
- int형 배열 arr 선언
	- 크기 5
	
<br>

```c
	const unsigned short len = sizeof(arr) / sizeof(arr[0]);
```
- 부호 없는 short형 상수 len 선언 및
- sizeof 연산자를 사용하여 arr의 크기 나누기 sizeof 연산자를 사용하여 arr의 첨자 0의 크기의 값 대입
	- 배열의 크기 5
		
<br>

```c
	MaxAndMin(&maxPtr, &minPtr, arr, len);
```
- MaxAndMin 함수 호출
	- 인자
		- 주소 연산자를 사용한 maxPtr, minPtr
		- arr
			- 첫 번째 원소의 주소 값
		- len
		
<br>

```c
	printf("int arr[5]의 최대값은 %d, 최소값은 %d", *maxPtr, *minPtr);
```
- printf 함수로 "int arr[5]의 최대값은 %d, 최소값은 %d" 출력
	- "%d" == *maxPtr
		- maxPtr에는 arr의 최대값의 원소의 주소가 할당되어 있어 그 주소를 간접 참조 연산자를 사용하여 값 출력
	- "%d" == *minPtr
		- minPtr에는 arr의 최소값의 원소의 주소가 할당되어 있어 그 주소를 간접 참조 연산자를 사용하여 값 출력
				
<br>

```c
}
```
- main 함수 종료

## 메모리 그림
| main 함수 호출 후 MaxAndMin 함수 호출 전 | -> | MaxAndMin 함수 호출 및 실행 | -> | MaxAndMin 함수 종료 후 | -> | main 함수 종료 후 |
| :---: | | :---: | | :---: | | :---: |
| maxPtr | | maxPtr | | maxPtr |
| minPtr | | minPtr |
| arr | |
| len -> 5 | |

# 실행 결과