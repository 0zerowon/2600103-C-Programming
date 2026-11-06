- 교재 463페이지 문제 22-2번을 변형하여 푸시오.
- 같은 문제를 풀면 0점처리 함

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- 표준입출력 함수를 사용하기 위한 전처리
```c
#include <stdbool.h>
```
- bool 자료형을 사용하기 위해 stdbool.h include
```c
#define NUMBER_OF_EMPLOYEES 3
```
- NUMBER_OF_EMPLOYEES를 3으로 정의
	- 사원 수
```
struct Salary
{
	unsigned int general;
	unsigned int bonus;
};
```
- Salary 구조체 정의
	- general: 일반 월급
	- bonus: 보너스
```c
struct employee
{
	char name[10];
	char id[15];
	struct Salary sal;
};
```
- employee 구조체 정의
	- 멤버 변수
		- name
			- 이름을 저장할 10 크기 char형 배열
		- id
			- 주민등록번호을 저장할 15 크기 char형 배열
		- sal
			- Salary 구조체 변수
```c
int main()
{
```
- main 함수 시작
```c
	struct employee empl[NUMBER_OF_EMPLOYEES];
	unsigned short idx;
	unsigned short emplNum;
	bool confirmBonus[NUMBER_OF_EMPLOYEES];
	unsigned int includeBonusSalaryTotal;
	bool printInfo;
```
- 변수 선언
	- employee 구조체 배열 empl
		- 크기 NUMBER_OF_EMPLOYEES
			- 3명의 사원 정보를 저장
	- 부호 없는 short형 idx
		- 반복문에서 사용할 인덱스 변수
	- 부호 없는 short형 emplNum
		- 사원 번호를 저장할 변수
	- bool형 배열 confirmBonus
		- 각 사원의 보너스 지급 여부를 저장할 배열
	- 부호 없는 int형 includeBonusSalaryTotal
		- 보너스가 포함된 월급 총액을 저장할 변수
	- 개인정보 출력 여부를 저장할 bool형 변수 printInfo
	
```c
	printf("%hu명의 직원 정보를 입력하시오.\n", NUMBER_OF_EMPLOYEES);
```
- "%hu명의 직원 정보를 입력하시오." 출력 후 개행
	- '%hu'	== NUMBER_OF_EMPLOYEES
```c
	for (idx = 0; idx < NUMBER_OF_EMPLOYEES; idx++)
	{
```
- 반복문 시작
	- 모든 사원 배열 참조
```c
		emplNum = idx + 1;
```
- 사원 번호 emplNum에 대입
```c
		putchar('\n');
```
- 개행 문자 출력
```c
		printf("%hu번 사원의 개인정보를 입력하시오.\n", emplNum);
```
- "%hu번 사원의 개인정보를 입력하시오." 출력 후 개행
	- '%hu' == emplNum
```c
		fputs("이름: ", stdout);
		gets(empl[idx].name);
		fputs("주민등록번호: ", stdout);
		gets(empl[idx].id);
```
- "이름: " 출력
- empl 각 원소의 멤버 변수 name 배열에 사용자로부터 이름 문자열 저장
- "주민등록번호: " 출력
- empl 각 원소의 멤버 변수 id 배열에 사용자로부터 정수 문자열 저장
```c
		putchar('\n');
```
- 개행 문자 출력
```c
		printf("%hu번 사원의 월급을 입력하시오.\n", emplNum);
		scanf("%u", &empl[idx].sal.general);
```
- "%hu번 사원의 월급을 입력하시오." 출력 후 개행
	- '%hu' == emplNum
- empl 각 원소의 멤버 변수인 구조체 변수 sal의 멤버 변수 general에 사용자로부터 부호 없는 정수 저장
```c
		putchar('\n');
```
- 개행 문자 출력
```c
		printf("%hu번 사원에게 이번 달 보너스를 지급하겠습니까?\n", emplNum);
		scanf("%d", &confirmBonus[idx]);
		getchar();
```
- "%hu번 사원에게 이번 달 보너스를 지급하겠습니까?" 출력 후 개행
	- '%hu' == emplNum
- confirmBonus의 idx 첨자의 원소에 0 또는 1 저장
- 입력 버퍼에 남아 있는 개행 문자 제거
```c
		if (confirmBonus[idx])
		{
			printf("%hu번 사원의 보너스를 입력하시오.\n", emplNum);
			scanf("%u", &empl[idx].sal.bonus);
			getchar();
		}
```
- 0이면 건너뜀
- 1이면
	- "%hu번 사원의 보너스를 입력하시오." 출력 후 개행
		- '%hu' == emplNum
	-  empl 각 원소의 멤버 변수인 구조체 변수 sal의 멤버 변수 bonus에 사용자로부터 부호 없는 정수 저장
	- 입력 버퍼에 남아 있는 개행 문자 제거
```c
	}
```
- 반복문 종료
```c
	putchar('\n');
```
- 개행 문자 출력

```c
	printf("%hu명의 이번 달 월급을 출력합니다.\n", NUMBER_OF_EMPLOYEES);
```
- "%hu명의 이번 달 월급을 출력합니다." 출력 후 개행
	- '%hu' == NUMBER_OF_EMPLOYEES
```c
	for (idx = 0; idx < NUMBER_OF_EMPLOYEES; idx++)
	{
```
- 반복문 시작
	- 모든 사원 배열 참조
```c
		emplNum = idx + 1;
```
- 사원 번호
```c
		putchar('\n');
```
- 개행 문자 출력
```c
		printf("%hu번 사원의 이번 달 월급은 ", emplNum);
```
- "%hu번 사원의 이번 달 월급은 " 출력
	- '%hu == empNum
```c
		if (confirmBonus[idx])
		{
			includeBonusSalaryTotal = empl[idx].sal.general + empl[idx].sal.bonus;
			printf("보너스 %u가 추가된 %u입니다.\n", empl[idx].sal.bonus, includeBonusSalaryTotal);
		}
		else
		{
			printf("%u입니다.\n", empl[idx].sal.general);
		}
```
- 만약 사원 보너스가 포함된 게 확인되면 
	- 보너스가 포함된 월급 출력
- 아니면 일반 월급 출력
```c
		putchar('\n');
```
- 개행 문자 출력
```c
		puts("해당 사원의 개인정보를 출력하겠습니까?");
		scanf("%d", &printInfo);
		if (printInfo)
		{
			printf("이름: %s\n주민등록번호: %s\n", empl[idx].name, empl[idx].id);
		}
```
- 개인정보 출력 여부를 묻고
	- 0이면 건너뜀
	- 1이면 출력
```c
	}
```
- 반복문 종료
```c
}
```
- main 함수 종료

# 실행 결과
<img width="1920" height="1040" alt="image" src="https://github.com/user-attachments/assets/fa893dd1-bcaf-4bfc-a699-9f3b5fd94382" />
