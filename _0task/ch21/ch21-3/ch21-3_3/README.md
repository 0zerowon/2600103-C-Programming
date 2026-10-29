- 아래 실행결과처럼 동작하도록 my_strcpy함수의 선언과 정의를 추가하시오.
	- 힌트: while문을 사용하여 널문자를 만날 때까지 문자를 하나씩 복사한다.
	- 문자열의 마지막에는 널문자를 추가 저장한다.

```c
#include <stdio.h>
#include <string.h>
//my_strcpy 함수 선언
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}
//my_strcpy 함수 정의
```

```
1234567890

```

```c
void my_strcpy(char* s1, char* s2)
{
	int i = 0;

	do
	{
		s1[i] = s2[i];

		i++;
	}
	while (s2[i]!='\0');

	s1[i] = '\0';
}
```
- 배열의 첫 번째 첨자의 주소 값 두 인수를 받아 포인터 두 매개 변수로 배열의 원소 값 참조
- i로 첨자 0부터 널 문자 원소 전 첨자의 원소까지 str1의 각 원소를 str2의 원소에 대입
	- 복사
- 문자열의 마지막을 나타내는 널 문자를 str2 문자열 마지막을 나타내는 곳에 대입
	- 그대로 복사하는 것이기에 str1의 널 문자의 첨자와 같은 곳
		- i는 반복문 조건이 거짓으로 빠져 나왔으므로 널 문자 첨자를 가르킴