- 이름, 점수를 멤버로 가지는 구조체를 정의하고
	- 다음처럼 3명의 정보를 키보드로부터 입력 받아 
		- 이름이 사전순서로 제일 앞에 나오는 학생을 구하여
			- 화면에 출력하는 프로그램을 작성하라.
- 힌트: 이름의 최소값 구하는 알고리즘을 이용 
	- strcmp 함수 이용

```
이름을 입력하시오: 임꺽정\n
성적을 입력하시오: 75\n
이름을 입력하시오: 홍길동\n
성적을 입력하시오: 85\n
이름을 입력하시오: 장길산\n
성적을 입력하시오: 65\n

이름은 임꺽정, 점수는 75점
```
``
# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
```
- 표준 입출력 함수와 문자열 처리 함수를 사용하기 위한 전처리

```c
struct student
{
	char name[5];
	int score;
};
```
- 구조체 student 정의
	- 이름의 문자열을 저장할 char형 크기 5 배열 name
	- 점수를 저장할 int형 score
```c
int main(void)
{
```
- main 함수 시작
```c
	struct student arr[3];
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	int firstNameStrcmpRes;
	int firstNameIdx = 0;
```
- 변수 선언
	- student형 구조체 배열 크기 3 arr
	- int형 
		- arrLen 3으로 초기화
		- firstNameStrcmpRes
		- firstNameIdx 0으로 초기화
```c
	for (int i = 0; i < arrLen; i++)
	{
```
- int형 i 선언 및 0으로 초기화
- 반복문 시작
	- i가 arrLen 보다 작을 때까지
```c
		fputs("이름을 입력하시오: ", stdout);
		gets(arr[i].name);
```
- fputs 함수를 호출하여 "이름을 입력하시오: " 출력
- gets 함수를 호출하여 arr의 i 첨자 원소의 멤버 변수 name 배열에 사용자의 입력으로부터 문자열 할당
```c
		fputs("성적을 입력하시오: ", stdout);
		scanf("%d", &arr[i].score);
		getchar();
```
- fputs 함수를 호출하여 "성적을 입력하시오: " 출력
- scanf 함수를 호출하여 arr[i].score에 입력 값 정수 할당
- getchar 함수를 호출하여 입력 버퍼의 개행 문자 제거
```c
		firstNameStrcmpRes = strcmp(arr[firstNameIdx].name, arr[i].name);
```
- firstNameStrcmpRes에 strcmp 호출한 결과 대입
	- arr[firstNameIdx].name와 arr[i].name 비교
		- arr의 firstNameIdx 첨자 원소의 멤버 변수 name의 문자열 - arr의 i 첨자 원소의 멤버 변수 name
			- 0이면 문자열 같음
			- 0 보다 크면 문자열 arr[i].name이 더 작음
			- 0 보다 작으면 문자열 arr[firstNameIdx].name이 더 큼
```c
		if (firstNameStrcmpRes > 0)
		{
			firstNameIdx = i;
		}
```
- 만약 firstNameStrcmpRes이 0 보다 크면
	- arr[i].name이 arr[firstNameIdx].name 보다 작으면
	- firstNameIdx에 i 대입
```c
	}
```
- i++
- 만약 i가 3 보다 작으면 반복문 반복
	- 아니면 반복문 종료
```c
	putchar('\n');
	printf("이름은 %s, 점수는 %d", arr[firstNameIdx].name, arr[firstNameIdx].score);
```
- putchar 함수를 호출하여 개행 출력
- printf 함수를 호출하여 사전 순 첫 번째 이름과 그의 성적 출력
	- "이름은 %s, 점수는 %d"
		- '%s' == arr[firstNameIdx].name
		- '%c' == arr[firstNameIdx].score
```c
}
```
- main 함수 종료

# 실행 결과
<img width="1115" height="628" alt="image" src="https://github.com/user-attachments/assets/936c99f2-0329-428f-abeb-7565fdecdbec" />