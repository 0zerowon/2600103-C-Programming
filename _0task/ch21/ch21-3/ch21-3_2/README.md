- 예제 1번과 동일하게 동작하도록 my_strlen 함수를 작성하라.
- 널문자를 만날 때까지 문자의 개수를 카운트한다.

```c
#include <stdio.h>
#include <string.h>
//my_strlen 함수 선언
void RemoveBSN(str);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", my_strlen(str), str);
	return 0;
}
//my_strlen 함수 정의
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';
}
```

```
문자열 입력: Good morning\n
길이: 13, 내용: Good morning

길이: 12, 내용: Good morning

```

```c
int my_strlen(char* s)
{
	int i = 0;
	do
	{
		i++;
	} while (s[i] != '\0');
	
	return i;
}
```
- 문자열이 저장되어 있는 배열의 시작 주소를 인자로 받아 매개 변수로 참조
- 문자열의 끝을 나타내는 널 문자는 문자열의 끝 문자가 할당되어 있는 원소의 다음 원소이기에
	- 반복문을 통해 문자열의 길이를 그 전까지 i	++;로 길이를 구함
	- 문자열 길이 i를 반환