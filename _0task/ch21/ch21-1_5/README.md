- 아래쪽 실행결과처럼 나오도록 문자 입출력(scanf("%c",…)) 방식을 이용하여 코드를 수정하시오. 
	- 엔터키('\n')가 나올 때까지 문자를 하나씩 배열에 복사하고 마지막에 널문자를 대입한다.
		- ~~fgets(str, sizeof(str), stdin);~~

```c
#include <stdio.h>
int main(void)
{
	char str[20]; 
	printf("문자열을 입력하시오:");
	scanf("%s", str); 
	printf("문자열: %s\n", str);
	return 0;
}
```

```
문자열을 입력하시오: Hello world\n
문자열: Hello
```
```
문자열을 입력하시오: Hello world\n
문자열: Hello world
```

```c
int main(void)
{
	char str[20];
	int i;
	printf("문자열을 입력하시오: ");
	for (i = 0; i < sizeof(str) - 1; i++)
    {
		scanf("%c", &str[i]);
		if (str[i] == '\n')
		{
			break;
		}
    }
    str[i] = '\0';
	printf("문자열: %s\n", str);
	return 0;
}
```
- int형 변수 i 선언
- i를 0으로 초기화
- 반복문 시작
	- i가 str의 크기의 1 만큼 작은 동안 반복
		- 첨자 0-19
	- scanf 함수로 str[i]에 입력 스트림으로 입력 버퍼에 저장한 문자 할당
	- 만약 str[i]가 개행 문자라면
		- 반복문 종료
- i++
- i가 str의 크기의 1 만큼 작으면
	- 반복문 반복
- 반복문 종료
- str[i]에 널 문자 대입
	- 입력 스트림으로 입력된 배열의 원소 중 마지막 원소
