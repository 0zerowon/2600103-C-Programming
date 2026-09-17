- 키보드를 통하여 문자열을 입력 받고 대문자는 소문자로 소문자는 대문자로 변환하는 코드를 작성하라.
- 문자열의 끝은 널문자('\0')을 이용하여 판단할 것, 라이브러리 함수를 사용하지 말고 직접 코드로 작성할 것.
```
문자열을 입력하시오: HelloWorld\n
변환 결과: hELLOwORLD
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- visual studio에서 scanf_s를 사용하지 않고 scanf를 사용하기 위해 경고를 무시하는 코드

<br>

```c
#include <stdio.h>
```
- 표준 입출력 함수를 사용하기 위해 포함

<br>

```c
int main()
```
- main 함수 시작

<br>

```c
char s[100];
```
- 문자열을 저장하기 위해 char 배열 선언
	- 최대 문자 99개 및 널문자

<br>

```c
printf("문자열을 입력하시오: ");
scanf("%s", s);
```
- 문자열을 입력 받아 s 배열에 할당

<br>

```c
for (int i = 0; s[i] != '\0'; i++)
```
- 문자열의 끝인 널문자까지 반복문 실행

<br>

```c
	if (s[i] >= 'A' && s[i] <= 'Z')
		s[i] += ('a' - 'A');
```
- 대문자인 경우 소문자로 변환
	- 아스키코드에서 대문자들의 값은 A 보다 크고 Z 보다 작음
	- 아스키코드에서 소문자들은 32만큼 더 큰 값을 가짐

<br>

```c
	else if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= ('a' - 'A');
```
- 소문자인 경우 대문자로 변환
	- 아스키코드에서 소문자들의 값은 a 보다 크고 z 보다 작음
	- 아스키코드에서 대문자들은 32만큼 더 작은 값을 가짐
	
<br>

```c
printf("%s", s);
```
- 변환된 문자열 출력

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/e32d88ac-41f8-429f-9766-d8b29fe3e5e3" />
