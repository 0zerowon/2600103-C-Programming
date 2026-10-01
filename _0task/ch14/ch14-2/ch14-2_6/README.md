- 15장의 도전 1~5번 중 3문제를 푸시오.
	- 문제 1
		- 도전 2
			- 서식 지정자를 사용하거나, 라이브러리 함수를 사용하면 간단하지만,
				- 문제의 의도가 아닐 테고, 표준 함수가 아니다.
			- 직접 구상한 코드 보다 비트 연산자를 사용하는 등 더 좋은 방법이 있다.
	- 문제 2
		- 도전 4
			-  if문에서 C6385 경고가 발생하기는 하지만 문제 의도에서 크게 중요한 부분은 아니다.
				- "'str'에서 잘못된 데이터를 읽고 있습니다.  읽기 가능한 크기는 '100'바이트인데 실제로는 '-1'바이트만 읽을 수 있습니다."
	- 문제 3
		- 도전 5
# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- scanf 함수를 사용하기 위해 Visual Studio 보안 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 함수 포함

<br>

```c
int main()
{
```
- main 함수 시작

<br>

```c
	int binary[16] = { 0 };
	int intInput;
```
- 길이 16의 int형 배열 binary 선언 및 각 원소 0으로 초기화
	- 16비트(2바이트)
		- 배열의 크기는 64바이트
			- 어차피 원소 당 0 아니면 1이기에 short, char, uint8_t 등 크기를 자료형 자체 크기를 줄이거나 해야 할텐데
				- 크게 중요한 게 아니다
				- 애초에 비트 연산 방식으로 했으면 배열 불필요

<br>

```c
	printf("10진수 정수 입력: ");
	scanf("%d", &intInput);
```
- "10진수 정수 입력:" 출력
- intInput에 사용자 정수 입력을 저장

<br>

```c
	for (int i = 0; intInput > 0; i++)
	{
```
- int형 변수 i를 0으로 초기화
- 반복문 시작
	- intInput이 0 보다 클 때까지 반복

<br>

```c
		binary[i] = intInput % 2;
		intInput /= 2;
	}
```
- binary[i]에 intInput을 2로 나눈 나머지 대입
	- 0 || 1
- intInput을 2로 나누기
- 반복문 종료
	- i++

	<br>

```c
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
```	
- int형 변수 i를 64 / 4 - 1로 초기화
	- 배열 binary의 길이 == 16
		- 첨자는 0부터 15까지
- 반복문 시작
	- i가 0 보다 크거나 같을 때까지
	- binary[i] 출력 
- 반복문 종료
	- i--
		- 역순으로 저장된 배열이기에 역순으로 출력

<br>

```c
}
```
- main 함수 종료
# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/73abf5e2-ad79-42e4-9c24-ad966d3a4ce5" />

# 소스 코드 설명
```c
int main()
{
```
- main 함수 시작

<br>

```c
	char str[100];
	int i = 0;
```
- 길이 100의 char형 배열 str 선언
- int형 변수 i 선언 및 0으로 초기화

<br>

```c
	printf("문자열 입력: ");
	scanf("%s", str);
```
- "문자열 입력: " 출력
- 사용자 문자열 입력을 str에 저장

<br>

```c
	while (str[i] != '\0')
	{
		i++;
	}
```
- str의 길이를 구하기 위해 반복문 시작
	- i가 0부터 시작하여 str[i]가 널 문자('\0')가 아닐 때까지 반복
		- i++;

<br>

```c
	if (str[i / 2 - 1] == str[i / 2 + 1])
	{
		printf("회문입니다.");
	}
```
- str의 길이가 홀수일 때 회문인지 확인
	- 절반으로 나눈 인덱스의 양쪽 문자가 같은지 비교
		- "회문입니다." 출력

<br>

```c
	else if (str[i / 2 - 1] == str[i / 2])
	{
		printf("회문입니다.");
	}
```
- str의 길이가 짝수일 때 회문인지 확인
	- 절반으로 나눈 인덱스의 왼쪽 문자와 같은지 비교
		- "회문입니다." 출력

<br>

```c
	else
	{
		printf("회문이 아닙니다.");
	}
```
- 회문이 아닌 경우
	- "회문이 아닙니다." 출력

	<br>

```c
}
```
- main 함수 종료
# 실행 결과
- 입력에 따라 결과가 달라짐
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/f49ad2b7-7801-4f06-a4dd-f8ff886adf18" />
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/b8223cac-439a-41f3-b98c-b5c5ebc25907" />

