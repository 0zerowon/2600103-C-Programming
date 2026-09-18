- 2개의 문자열(모두 소문자)을 입력 받고 사전에서 앞에 나오는 문자열을 출력하시오.
- 라이브러리 함수를 사용하지 말고 문자열의 첫 번째 문자의 아스키코드를 비교하여 구할 것
- 사전에서 앞에 나오는 문자가 아스키코드가 작음
```
문자열을 입력하시오: hello\n
문자열을 입력하시오: world\n
사전에서 앞에 나오는 문자열: hello
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)
```
- 보안 경고 무시

<br>

```c
#include <stdio.h>
```
- 표준 입출력 라이브러리 포함

<br>

```c
int main()
```
- 메인 함수 시작

<br>

```c
char s1[11];
char s2[11];
```
- 최대 10개 문자 및 널 문자 저장 가능한 배열 선언

<br>

```c
printf("문자열을 입력하시오: ");
scanf("%s", s1);
printf("문자열을 입력하시오: ");
scanf("%s", s2);
```
- 두 개의 문자열을 각각 s1과 s2에 입력 받음

<br>

```c
for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
	if (s1[i] >= 'A' && s1[i] <= 'Z')
	s1[i] += ('a' - 'A');

	if (s2[i] >= 'A' && s2[i] <= 'Z')
	s2[i] += ('a' - 'A');
}
```
- 널 문자가 나올 때까지 반복
	- 각 문자열의 문자가 대문자이면 소문자로 변환

<br>

```c
if(s1[0] < s2[0])
	printf("%s", s1);
else
	printf("%s", s2);
```
- 사전에서 앞에 나오는 문자는 아스키 코드에서 작은 값을 가지므로
	- 첫 번째 문자열의 첫 번째 문자가 두 번째 문자열의 첫 번째 문자보다 작으면 첫 번째 문자열을 출력
		- 그렇지 않으면 두 번째 문자열을 출력

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/83b7d4b1-ed17-42af-8dcf-c6ce844c1920" />
