- 아래 결과처럼 실행되도록 문자열 입출력 전용함수를 이용하여 코드를 작성하시오. 한글은 한문자를 2바이트로 저장함

```
이름: 홍길동\n
주소: 군산시 대학로 558\n
자동차 번호: 52어 6746\n
이름: 홍길동
주소: 군산시 대학로 558
자동차 번호: 52어 6746
```

```c
#include <stdio.h>
```
- 표준 스트림 및 입출력 스트림을 사용하는 표준 입출력 함수가 선언되어 있는 stdio 헤더 파일 포함
```c
int main()
{
```
- main 함수 시작
```c
	char name[7];
	char address[18];
	char carNum[10];
```
- char형 배열 선언
	- 배열 크기 7의 name
		- 2바이트의 한글 3개, 널문자
	- 배열 크기 18의 address
		- 2바이트의 한글 6개 및 공백이랑 숫자 문자 5개, 널문자
	- 배열 크기 10의 carNum
		- 숫자 및 공백 문자 7개 및 2바이트의 한글 1개, 널문자
```c
	fputs("이름: ", stdout);
	gets(name);
```
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "이름: " 출력
- gets 함수로 name에 사용자가 입력한 "홍길동\0" 할당
```c
	fputs("주소: ", stdout);
	gets(address);
```
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "주소: " 출력
- gets 함수로 address에 사용자가 입력한 "군산시 대학로 558\0" 할당
```c
	fputs("자동차 번호: ", stdout);
	gets(carNum);
```
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "주소: " 출력
- gets 함수로 address에 사용자가 입력한 "52어 6746\0" 할당
```c
	fputs("이름: ", stdout);
	puts(name);
```
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "이름: " 출력
- puts 함수로 name의 문자열 "홍길동" 출력
```c
	fputs("주소: ", stdout);
	puts(address);
```	
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "주소: " 출력
- puts 함수로 address의 문자열 "군산시 대학로 558" 출력
```c
	fputs("자동차 번호: ", stdout);
	puts(carNum);
```	
- 표준 출력 스트림을 사용하는 fputs 함수를 사용하여 "자동차 번호: " 출력
- puts 함수로 carName의 문자열 "52어 6746" 출력
```c
}
```
- main 함수 종료

# 실행 결과
<img width="979" height="510" alt="image" src="https://github.com/user-attachments/assets/d8240bee-fc06-4d47-b5a1-4d76e162ea36" />
