- 이름, 학번, 주소를 멤버로 가지는 구조체를 선언하고
	- 다음처럼 키보드로 부터 정보를 입력 받아 구조체 멤버 변수에 저장하고
	- 변수 값을 화면에 각각 출력하는 프로그램을 작성하라.
- 문자열 입력 시 문제점: '\n'을 제거하는 방법
	- getchar(); 호출

```
학번을 입력하시오: 192040\n
이름을 입력하시오: 홍길동\n
주소를 입력하시오: 군산시 대학로 558\n

1. 학번: 192040
2. 이름: 홍길동
3. 주소: 군산시 대학로 558
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- 표준 입출력 함수를 사용하기 위해
	- 보안 경고 무시
	- 반환 값 처리 경고 무시
	- 표준 입출력 라이브러리 헤더 파일 포함
```c
struct UserInfo
{
	int classId;
	char name[10];
	char adress[18];
};
```
구조체 UserInfo 정의
	- 이름, 학번, 주소를 저장할 멤버 변수 선언
		- 학번을 저장할 int형 변수 classId
		- 이름을 저장할 char형 길이 10 배열 name
		- 주소를 저장할 char형 길이 18 배열 adress
			- "군산시 대학로 558" + ~~'\n'~~ + '\0'
				- 한글 2byte
```c
int main()
{
```
- main 함수 정의
```c
	struct UserInfo usrInfo;
```
- 구조체 UserInfo 변수 usrInfo 선언
- 메모리에 멤버 변수 classId, name, adress를 순서대로 메모리 할당
	- classId: 4byte, name: 10byte, adress: 18byte
```c
	fputs("학번을 입력하시오: ", stdout);
	scanf("%d", &usrInfo.classId);
```
- fputs 함수를 호출하여 "학번을 입력하시오: "을 표준 출력 스트림으로 출력
- scanf 함수를 호출하여 '학번'을 입력 받아
	- 구조체 usrInfo 변수의 멤버 변수 classId 초기화
```c
	fputs("이름을 입력하시오: ", stdout);
	scanf("%s", usrInfo.name);
	getchar();
```
- fputs 함수를 호출하여 "이름을 입력하시오: "을 표준 출력 스트림으로 출력
- scanf 함수를 호출하여 '이름'을 입력 받아
	- 구조체 usrInfo 변수의 멤버 변수 name 초기화
- getchar 함수를 호출하여 입력 버퍼에 남아 있는 개행 문자 제거

```c
	fputs("주소를 입력하시오: ", stdout);
	fgets(usrInfo.adress, sizeof(usrInfo.adress), stdin);
```
- fputs 함수를 호출하여 "주소를 입력하시오: "을 표준 출력 스트림으로 출력
- fgets 함수를 호출하여 '주소'를 입력 받아
	- "군산시 대학로 558"
		- 구조체 usrInfo 변수의 멤버 변수 adress 초기화
			- fgets 함수는 배열의 크기만큼 입력을 받고 초과되면 마지막 원소에 '\0'을 넣는 특성 이용
				- fgets 함수는 개행 문자까지 입력 받으므로
					- usrInfo.adress[17] == '\n'
				- usrInfo.adress[17] = '\0'
				- "군산시 대학로 558"와 같이
					- 한글 6자, 공백 2자, 숫자 3자의 크기만 입력 받아야하는 하드 코딩
						- getchar 함수로 개행 문자 제거할 수 있으나
							- 사용자 입력이 있어야 해서 배열 크기를 18로 지정한 이유
				- 개행 문자를 저장하지 않는 gets 함수를 사용할 수도 있음
```c
	putchar('\n');
```
- putchar 함수를 호출하여 개행 문자 출력
```c
	printf("1. 학번: %d\n", usrInfo.classId);
	printf("2. 이름: %s\n", usrInfo.name);
```
- printf 함수를 호출하여 "1. 학번: " 출력 및 개행
	- '%d' == usrInfo.classId
- printf 함수를 호출하여 "2. 이름: " 출력 및 개행
	- '%s' == usrInfo.name
```c
	fputs("3. 주소: ", stdout);
	fputs(usrInfo.adress, stdout);
```
- fputs 함수를 호출하여 "3. 주소: " 출력
- fputs 함수를 호출하여 usrInfo.adress 문자열 출력
```c
}
```
