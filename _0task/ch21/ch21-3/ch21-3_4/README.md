- 아래 실행결과처럼 동작하도록 my_strcat 함수의 선언과 정의를 추가 하시오.
	- 힌트: while문을 사용하여 널문자를 만날 때까지 문자를이어준다.
	- 문자열의 마지막에는 널문자를 추가 저장한다.

```c
#include <stdio.h>
#include <string.h>
//my_strcat 함수 선언
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}
//my_strcat 함수 정의
```

```
First~Second
```

```c
void my_strcat(char* s1, char* s2)
{
	int i = 0;
	int s1OriginalLen = strlen(s1);

	do
	{
		s1[s1OriginalLen + i] = s2[i];

		i++;
	}
	while (s2[i] != '\0');

	s1[s1OriginalLen + i] = '\0';
}

```
- 문자열 배열 str1에 str2를 잇기 위해 매개 변수로 배열의 첫 번째 원소 주소를 받는 s1, s2
- s1을 s1OriginalLen의 첨자로 참조하면 널 문자가 저장되어 있는 원소이기에
	- 그 원소 + i s2의 문자열을 이음
- 문자열의 마지막을 나타내는 널 문자 대입