- 다음 코드의 실행결과를 자세히 설명하라. 
	- 19, 21페이지의 그림처럼 반복문 실행단계별로 버퍼의 상태를 그리고 설명하라.

```c
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("문자 입력: ");
		scanf("%c", &ch);
		printf("문자: %c\n", ch);
	}
	return 0;
}
```

```
문자 입력: abcde\n
문자: a
문자 입력:문자: b
문자 입력:문자: c
문자 입력:문자: d
문자 입력:문자: e
```
