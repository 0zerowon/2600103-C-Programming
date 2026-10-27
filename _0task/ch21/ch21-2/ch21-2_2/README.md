- 키보드로부터 문자를 입력 받아 화면에 출력해주는 프로그램을 작성하시오. ‘q’ 또는 ‘Q’를 입력하면 종료한다. 
- 반드시 문자 입출력 전용함수만 사용하라.
- 힌트: 무한 루프(while(1){...})와 if(종료조건) break문을 이용하라.

```
문자 입력 :a\n
입력된 문자는 a
문자 입력: 1\n
입력된 문자는 1
문자 입력: C\n
입력된 문자는 C
문자 입력: q\n
```

# 소스 코드 설명
```c
#include <stdio.h>
```
- 표준 입출력 함수가 정의되어 있는 포함
```
```c
int main()
{
```
- main 함수 시작
```c
	char usrInput;
```
- char형 usrInput 선언
```c
	while (1)
	{
```
- 무한 반복문 시작
```c
		fputs("문자 입력: ", stdout);
		usrInput = getchar();
```
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "문자 입력: " 출력
- usrInput에 사용자로부터의 문자 하나 대입
```c
		fgetc(stdin);
```
- 표준 입력 스트림을 사용하는 fgetc 함수를 사용하여 입력 버퍼의 '\n' 제거
```c
		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
```
- 만약 usrInput이 q 또는 Q라면 반복문 종료
```c
		fputs("입력된 문자는 ", stdout);
		putchar(usrInput);
		fputc('\n', stdout);
```
- 표준 출력 스트림을 사용하는 fputs을 사용하여 "입력된 문자는 " 출력
- putchar 함수로 usrInput의 문자 출력
- 표준 출력 스트림을 사용하는 fputc를 사용하여 개행
```c
	}
```
- 반복
```c
}
```
- main 함수 종료

# 실행 결과
