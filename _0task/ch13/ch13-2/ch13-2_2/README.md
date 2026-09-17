- 키보드를 통하여 문자열을 입력 받고 문자열의 각 문자를 실행 결과처럼 출력하시오.
   - 문자열의 끝은 널문자('\0')을 이용하여 판단할 것
```
문자열을 입력하시오: HelloWorld\n
1번째 문자 H
2번째 문자 e
3번째 문자 l
4번째 문자 l
5번째 문자 o
6번째 문자 W
7번째 문자 o
8번째 문자 r
9번째 문자 l
10번째 문자 d
```

# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- scanf()와 같은 함수 사용 시 발생하는 경고를 무시하기 위한 코드

<br>

```c
#include <stdio.h>
```
- 표준 입출력 함수를 사용하기 위한 헤더 파일

<br>

```c
int main()
```
- 메인 함수 시작

<br>

```c
char s[11];
```
- 문자열을 저장하기 위한 배열 선언
	- 최대 10개 문자 및 널문자

<br>

```c
printf("문자열을 입력하시오: ");
scanf("%s", s);
```
- 문자열을 입력 받아 배열 s에 할당

<br>

```c
for (int i = 0; s[i] != '\0'; i++)
	printf("%d번째 문자: %c\n", i + 1, s[i]);
```
- 문자열의 각 문자를 반복문을 통해 출력
	- 문자열의 끝을 널문자로 판단

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/25222d17-6bca-4986-abc9-06cdf364689f" />
