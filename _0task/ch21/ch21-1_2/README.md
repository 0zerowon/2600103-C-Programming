- 키보드로부터 문자를 입력 받아 화면에 출력해주는 프로그램을 작성하시오. ‘q’ 또는 ‘Q’를 입력하면 종료한다. 
	- 힌트: 무한 루프(while(1){...})와 if(종료조건) break문을 이용하라.

```
문자 입력: a\n
입력된 문자는 a
문자 입력: 1\n
입력된 문자는 1
문자 입력: C\n
입력된 문자는 C
문자 입력: q\n
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
```
- scanf 사용 시 보안 경고 무시
```
#include <stdio.h>
```
- 입출력 스트림을 사용하는 함수의 선언 및 정의가 있는 표준 헤더 파일 포함
	- printf scanf 함수 사용하기 위해
```c
int main()
{
```
- main 함수 시작
```c
	char usrInput;
```
- 문자 입력을 위한 usrInput 선언
```c
	while (1)
	{
```
- 무한 반복문 시작
```c
		printf("문자 입력: ");
```
- "문자 입력: " 출력
```c
		scanf(" %c", &usrInput);
```
- " %c"는 서식 지정자 앞에 공백 문자를 추가하므로써
	- 반복할 때 입력 버퍼에 남아 있는 '\n' 문자를 무시
		- 공백 문자가 아닌 문자는 버리고 공백 문자가 아닌 것만 읽어서 저장
```c
		if (usrInput == 'q' || usrInput == 'Q')
		{
			break;
		}
```
- 만약 usrInput 값이 q 또는 Q라면 반복문 중단
```c
		printf("입력된 문자는 %c\n", usrInput);
```
- "입력된 문자는 %c" 출력 후 개행
	- '%c' == usrInput
```c
	}
```
- 반복문 반복
```c
}
```
- main 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/69ba17e4-1c5c-477a-a954-c2256100e1f3" />
