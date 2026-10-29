- 예제 1번과 동일하게 동작하도록 my_strlen 함수를 작성하라.
- 널문자를 만날 때까지 문자의 개수를 카운트한다.

```c
#include <stdio.h>
#include <string.h>
//my_strlen 함수 선언
int main(void)
{
char str[100];
printf("문자열 입력: ");
fgets(str, sizeof(str), stdin);
printf("길이: %d, 내용: %s \n", my_strlen(str), str);
RemoveBSN(str);
printf("길이: %d, 내용: %s \n", my_ strlen(str), str);
return 0;
}
//my_strlen 함수 정의
```

```
문자열 입력: Good morning<엔터>
길이: 13, 내용: Good morning
길이: 12, 내용: Good morning
```