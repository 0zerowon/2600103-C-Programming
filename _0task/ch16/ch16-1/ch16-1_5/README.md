- 예제 6번을 참고하여 4개의 문자열을 입력 받아 사전에서 제일 뒤에 나오는 문자열을 구하는 프로그램을 작성하시오.
- 라이브러리 함수를 사용하지 말고 문자열의 첫 문자를 비교하는 방식으로 직접 작성할 것
- char str[4][10]; -> i번째 행의 시작주소 -> &str[i][0]

```
1번째 문자열 입력: apple\n
2번째 문자열 입력: blueberry\n
3번째 문자열 입력: orange\n
4번째 문자열 입력: melon\n
사전에서 제일 뒤에 나오는 문자열: orange
```

# 소스 코드 설명

```c
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS
```
- scanf 함수 사용하기 위해 vs 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 함수 헤더 파일 포함

<br>

```c
int main()
{
```
- main 함수 시작

<br>

```c
	char str[4][10];
	char lastStrFirCh;
	short lastStrFirIdx;
	short i;
```
- char형 배열 str 선언
	- 4행 10열
		- 4개 문자열
- char형 lastStrFirCh 선언
	- 사전에서 뒤에 나오는 문자열의 첫 문자 저장할 변수
- short형 i 선언
	- str[i][0] 원소 값 참조하기 위한 변수

<br>

```c
	for (i = 0; i < 4; i++)
	{
```
- i에 0 대입
- 반복문 시작
	- i가 4보다 작을 때까지
		- 4개 문자열

<br>

```c
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
```
- "%d번째 문자열 입력: " 출력
	- "%d" == i + 1
- *&str[i][0]에 문자열 저장
- i += 1
- 반복

<br>

```c
	}
```
- 반복문 종료

<br>

```c
	lastStrFirCh = str[0][0];
```
- lastStrFirCh에 str[0][0] 문자 대입

<br>

```c
	for (i = 1; str[i][0] != '\0'; i++)
	{
		if (str[i][0] > lastStrFirCh)
		{
			lastStrFirCh = str[i][0];
			lastStrFirIdx = i;
		}
	}
```
- i를 1로 대입
	- lastStrFirCh에는 str의 0행 0열의 문자가 대입되어 있음
- 반복문 시작
	- str[i][0]이 널문자가 아닐 때까지
	- 만약 str[i][0]이 lastStrFirCh 보다 크다면
		- 각 문자열의 첫 번째 문자가 아스키코드 값 보다 크면 알파벳 후순위
		- lastStrFirCh에 str[i][0]의 문자 대입
		- lastStrFirIdx에 i 대입
	- i++
- 반복문 종료

<br>

```c
	printf("사전에서 제일 뒤에 나오는 문자열: %s", &str[lastStrFirIdx][0]);
}
```
- "사전에서 제일 뒤에 나오는 문자열: orange" 출력
	- %s는 문자열을 담고 있는 배열의 첫 번째 원소의 주소여야 널문자 전까지 출력

# 실행 결과