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