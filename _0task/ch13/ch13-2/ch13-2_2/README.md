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

#include <stdio.h>


int main()
{
	char s[11];

	printf("문자열을 입력하시오: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%d번째 문자: %c\n", i + 1, s[i]);
	}
}
```

# 출력 결과