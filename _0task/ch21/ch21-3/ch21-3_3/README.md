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
//my_strcpy 함수 선언
```

```
1234567890
```
