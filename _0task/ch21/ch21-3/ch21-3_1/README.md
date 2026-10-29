- 키보드로부터 문자열를 입력 받아 이전문자열에 연결하여 화면에출력해주는 프로그램을 작성하시오. "quit"를 입력하면 종료한다.
	- 힌트: 무한루프와 break문 이용하라. 문자열 비교는 strcmp 이용

```
문자열 입력: hello\n
입력된 문자열: hello
문자열 입력: world\n
입력된 문자열: hello world
문자열 입력: C++\n
입력된 문자열: hello world C++
문자열 입력: quit\n
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
```
- strcat 함수에 대한 보안 경고 무시

```c
#include <stdio.h>
#include <string.h>
```
- 표준 라이브러리 함수 사용
	- fputs, fgets, printf
	- strcat, strcmp, strlen
```c
void NewLineChToSpaceCh(char* str);
```
- fgets로 인해 \n을 저장한 걸 공백 문자로 변환하기 위한 함수 NewLineChToSpaceCh 선언

```c
int main()
{
```
- main 함수 시작
```c
	char str1[30] = "", str2[10];
```
- strcat 함수로 str2를 이어서, 전체 문자열을 저장할 30 길이 배열 str1 선언
- 사용자로부터 입력 받을 10 길이 배열 str2 선언
```c
	while (1)
	{
```
- 무한 반복문 시작
```c
		fputs("문자열 입력: ", stdout);
```
- fputs 함수로 "문자열 입력: " 출력
```c
		fgets(str2, sizeof(str2), stdin);
```
- fgets 함수로 str2에 사용자로부터의 문자열 할당
```c
		NewLineChToSpaceCh(str2);
```
- NewLineChToSpaceCh 함수 호출
	- str2 인수
```c
		strcat(str1, str2);
```
- strcat 함수 호출하여 str1에 str2를 이음
```c
		if (!strcmp(str2, "quit "))
		{
			break;
		}
```
- strcmp 함수를 호출하여 str2가 "quit"라면 반복문 종료
```c
		printf("입력된 문자열: %s\n", str1);
```
- printf 함수를 호출하여 "입력된 문자열: " 출력 후
- str1 문자열 출력 후
- 개행
```c
	}
```
- 무한 반복문 반복
```c
}
```
- main 함수 종료

```c
void NewLineChToSpaceCh(char* str)
{
	int len = len(str);

	str[len - 1] = ' ';
}
```
- NewLineChToSpaceCh 함수 정의
	- int형 len 선언 및
		- len 함수를 호출하여 매개 변수 str이 가리키는 배열의 문자열 길이 대입
			- '\0' 제외
			- '\n'까지			
	- str의 len - 1한 값의 첨자의 원소에 공백 대입
		- 배열의 첨자는 배열의 크기 - 1로 참조되기에
			- '\0'을 제외한 배열의 크기 값인 len이
				- 문자열의 끝을 나타내는 '\0'이 할당되어 있는 원소의 첨자 값과 같음
		- '널 문자 값이 할당되어 있는 원소의 첨자 - 1' 첨자의 원소 값은
			- fgets 함수로 인해 '\n'이 할당되어 있으므로 공백 대입

# 실행 결과