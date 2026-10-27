- 공백을 포함하는 문자열을 입력 받아 단어 수를 계산하여 출력하는 코드를 작성하라.
- 공백을 이용하여 단어를 구분할 것

```
문자열 입력: I am a boy.\n
단어 수:4
```

# 소스 코드 설명
```c
#include <stdio.h>
```
- 표준 입출력 함수 포함

```c
int main()
{
```
- main 함수 시작
```c
	char str[13];
	int strLen = sizeof(str);
	int wordCnt = 0;
	int isSpace = 1;
```
- char형 13길이 배열 str 선언
	- 문자 8개 및 공백 3개, 줄바꿈 문자, 널문자
- int형
	- strLen 선언 및 13으로 초기화
	- wordCnt 선언 및 0으로 초기화
	- isSpace 선언 및 1로 초기화
		- 첫 단어는 공백이 아니기에
```c
	fputs("문자열 입력: ", stdout);
	fgets(str, strLen, stdin);
```
- 표준 출력 스트림을 사용한 fputs 함수를 사용하여 "문자열 입력: " 출력
- 표준 입력 스트림을 사용한 fgets 함수를 사용하여
	- 사용자로부터의 입력 버퍼의 문자들을 차례대로 배열 0 첨자의 원소부터 strLen-1 첨자 원소까지 할당 후
		- strLen 첨자 원소에 '\0' 할당
			- 최종적으로 "I am a boy.\n\0" 할당
```c
	for (int i = 0; i < strLen - 1; i++)
	{
```
- 반복문에서 사용할 int형 i 선언 및 0으로 초기화
- i가 strLen-1 보다 작으면 반복
	- i로 첨자 12 보다 작은 첨자 11의 원소 값 '.'까지 참조
- 반복문 시작
```c
		if (str[i] == ' ')
		{
			isSpace = 1;
		}
```
- 만약 str[i]가 공백 문자라면
	- isSpace는 1로 대입
		- 다음 i+1 첨자의 원소 값이 공백이 아니면 else if 조건문을 실행하기 위해
```c
		else if(isSpace)
		{
			wordCnt++;
			isSpace = 0;
		}
```
- 위 조건문이 거짓이고 만약 isSpace가 참이면
	- wordCnt+=1;
	- isSpace에 0 대입
		- 다음 i+1 첨자의 원소 값이 공백인지 확인하기 위해
```c
	}
```
- i+=1;
- 반복문의 조건이 참이면 반복
	- 거짓이면 반복문 종료
```c
	printf("단어 수: %d", wordCnt);
```
- printf 함수로 "단어 수: %d" 출력
	- '%d' == wordCnt
```c
}
```
- main 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/cc4b466b-33d3-46ba-a036-adef3c6c2c9a" />
