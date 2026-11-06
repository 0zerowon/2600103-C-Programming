- 이름, 점수를 멤버로 가지는 구조체를 정의하고
	- 다음처럼 3명의 정보를 키보드로부터 입력 받아 최우수 학생을 구하여
		- 화면에 출력하는 프로그램을 작성하라.
- 힌트: 구조체 배열을 사용하고 점수의 최대값을 구하는 알고리즘을 이용

```
이름을 입력하시오: 임꺽정\n
성적을 입력하시오: 75\n
이름을 입력하시오: 홍길동\n
성적을 입력하시오: 85\n
이름을 입력하시오: 장길산\n
성적을 입력하시오: 65\n
최우수학생의 이름은 홍길동, 점수는 85점
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- 표준 입출력 함수를 사용하기 위해 전처리

```c
struct Student
{
	char name[5];
	int score;
};
```
- 구조체 Student 정의
	- 이름 문자열을 저장할 char형 5 크기 배열 name
	- 점수를 저장할 int형 변수 score

```c
int main()
{
```
- main 함수 시작
```c
	struct Student s[3];
	int highestScoreIdx = 0;
	int sLen = sizeof(s) / sizeof(s[0]);
```
- 변수 선언
	- Student형 3 크기 구조체 배열 s
		- 세 명의 정보 저장
	- int형 변수 highestScoreIdx 0으로 초기화
	- int형 변수 sLen 3으로 초기화
		- 구조체 배열 전체 크기 / 구조체 배열 첫 원소 크기
```c
	for (int i = 0; i < sLen; i++)
	{
```
- 반복문에서 사용할 변수
	- int형 i 선언 및 0으로 초기화
- 반복문 시작
	- i가 3 보다 작을 때까지 반복
```c
		fputs("이름을 입력하시오: ", stdout);
		gets(s[i].name);
```
- fputs 함수를 호출하여 "이름을 입력하시오: "를 표준 출력 스트림으로 출력
- gets 함수를 호출하여 s의 i 첨자 원소의 멤버 변수 name 배열에 문자열 할당
	- 인자로 name의 첫 번째 주소
```c
		fputs("성적을 입력하시오: ", stdout);
		scanf("%d", &s[i].score);
		getchar();
```
- fputs 함수를 호출하여 "성적을 입력하시오: "를 표준 출력 스트림으로 출력
	- scanf 함수를 호출하여 s의 i 첨자 원소의 멤버 변수 score에 정수 할당
		- 두 번째 인자로 score의 주소
```c
		if (s[highestScoreIdx].score < s[i].score)
		{
			highestScoreIdx = i;
		}
```
- 만약 s의 highestScoreIdx 첨자의 원소의 멤버 변수 score의 값이 s의 i 첨자의 score 보다 작으면
	- highestScoreIdx에 i 대입
```c
	}
```
- i++
- i가 3 보다 작으면 반복문 반복
- 반복문 종료
```c
	printf("최우수 학생의 이름은 %s, 점수는 %d점", s[highestScoreIdx].name, s[highestScoreIdx].score);
```
- printf 함수를 호출하여
	- "최우수 학생의 이름은 %s, 점수는 %d점" 출력
		- 서식 문자
			- '%s'는 첫 번째 인자 s[highestScoreIdx].name
				- s의 highestScoreIdx 첨자의 원소의 멤버 변수 name 배열의 첫 번째 주소
			- '%d'는 두 번째 인자 s[highestScoreIdx].score
				- s의 highestScoreIdx 첨자의 원소의 멤버 변수 score의 정수 값
```c
}
```
- main 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/a6bb62bb-e31d-4d8e-b24b-d62711c10dd5" />
