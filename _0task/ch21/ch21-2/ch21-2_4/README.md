- 아래 코드에서 fgets함수는 엔터키까지 저장해주므로 출력하면 줄바꿈이 발생한다. 엔터키를 널문자로 변경하는 코드를 추가하여 줄바꿈이 발생하지 않도록 해보시오.
```c
#include <stdio.h>
int main(void)
{
	char str[20];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	// 배열에서 '\n'을 널문자('\0')로 변환
	printf("%s", str);
	return 0;
}
```
```
문자열 입력: hello\n
hello

```
```
문자열 입력: hello\n
hello
```

```c
int i = 0;
	do
	{
		i++;
	}
	while (str[i] != '\n');
	str[i] = '\0';
```
- int형 i 선언 및 0으로 초기화
- 반복문 시작
	- i+=1;
	- 만약 str[i]가 '\n'이 아니라면 반복
		- 배열 끝에 '\n'이 할당되어 있음
			- '\n'을 포함한 문자열 길이 == i
- str[i]에 '\0' 대입
	- str[0] == 'h'
	- str[1] == 'e'
	- str[2] == 'l'
	- str[3] == 'l'
	- str[4] == 'o'
	- str[5] == '\0'
		- '\n'이 할당되어 있던 원소
	- str[6] == '\0'
