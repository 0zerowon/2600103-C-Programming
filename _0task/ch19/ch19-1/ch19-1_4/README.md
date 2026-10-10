- 20장 도전 문제 중에서 3문제만 골라서 푸시오.
	- 도전 3
	- 도전 4
	- 도전 6

# 소스 코드 설명
## 도전 3
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("난수의 범위: 0부터 99까지\n");
	for (i = 0; i < 5; i++)
	{
		printf("난수 출력: %d\n", rand() % 100);
	}
}
```
- printf 함수 사용을 위한 표준 입출력 함수 헤더 파일 포함
- rand 함수 사용을 위한 표준 라이브러리 함수 헤더 파일 포함
- main 시작
	- int형 i 변수 선언
	- "난수의 범위: 0부터 99까지" 출력 후 개행
	- 5번 출력
		- "난수 출력: %d"
			- "%d" == rand() % 100
				- 나머지 0-99

## 도전 4
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;

	srand((int)time(NULL));
	for (i = 1; i <= 2; i++)
	{
		printf("주사위 %d의 결과 %d\n", i, rand() % 6 + 1);
	}
}
```
- printf 함수 사용을 위한 표준 입출력 함수 헤더 파일 포함
- rand 함수 사용을 위한 표준 라이브러리 함수 헤더 파일 포함
- srand의 인자로 현재 시간으로 사용하기 위한 시간 함수 헤더 파일 포함
- main 시작
	- int형 i 변수 선언
	- 인자로 time함수의 인자를 NULL로 하는 강제 형 변환한 값을 사용하여 srand 함수 호출
	- 2번 출력
		- "주사위 %d의 결과 %d\n"
			- "%d" == i
			- "%d" == rand() % 6 + 1
				- 0-5 + 1
					- 주사위 6면 무작위
			- "\n"
				- 개행

## 도전 6
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- scanf를 사용하기 위해 VS의 경고 무시
- printf, scanf 함수을 사용하기 위한 표준 입출력 함수 헤더 파일 포함

```c
#include <stdlib.h>
#include <time.h>
```
- 난수 생성을 위해 rand, srand, time 함수를 사용하기 위한 헤더 파일 포함
	- 표준 라이브러리 함수
	- 시간 함수

```c
#include <stdbool.h>
```
- 중복 제거를 위해 변수 isDuplicate를 bool형으로 사용하고 true, false를 사용하기 위한 표준 bool 헤더 파일 포함

```c
int main()
{
```
- 메인 함수 시작

```c
	unsigned short i, j;
	unsigned short comNums[3] = { 0 };
	unsigned short usrNums[3] = { 0 };
	unsigned short strike, ball, attemp = 0;
```
- 부호 없는 short형 변수 선언
	- i, j
	- 세 원소를 저장할 수 있는 배열 comNums
		- 0으로 초기화
	- 세 원소를 저장할 수 있는 배열 usrNums
		- 0으로 초기화
	- strike, ball
	- attemp
		- 0으로 초기화
```c
	bool isDuplicate = false;
```
- bool 변수 isDuplicate 선언 후 false로 초기화
	- 0
```c
	srand((unsigned int)time(NULL));
```
- NULL을 인자로 하는 time 함수의 값을 강제 형 변환 한 값을 인자로 하는 srand 함수 호출
	- 현재 시간을 시드 값으로 지정
```c
	for (i = 0; i < 3; i++)
	{
```
- i를 0으로 초기화
- 외부 반복문 시작
	- 총 3번 반복
```c
		do
		{
```
- 내부 반복문 시작
```c
			comNums[i] = rand() % 10;
```
- comNum[i]에 0에서 9 사이 값 대입
```c
			for (j = 0; j < i; j++)
			{
```
- j를 0으로 대입
- 내부의 내부 반복문 시작
	- comNums의 특정 원소와 다른 원소들과 중복인지 확인
```c
				if (comNums[i] == comNums[j])
				{
					isDuplicate = true;
					break;
				}
```
- 만약 comNums[i]랑 comsNums[j]가 같으면
	- isDuplicate에 true 대입
		- 1
	- 내부의 내부 반복문 종료
```c
			}
```
- j += 1;
- j가 i 보다 작으면 내부의 내부 반복문 시작
- 내부의 내부 반복문 종료
```c
		}
```
- 내부 반복문 종료
```c
		while (isDuplicate);
```
- 만약 isDuplicate가 true면 
	- 내부 반복문 반복
		- 중복이 발견되면 다시 난수 값 대입
```c		
	}
```
- i += 1;
- i가 3보다 작으면 외부 반복문 시작
- 외부 반복문 종료
```c
	printf("숫자 야구!\n\n");
```
- "숫자 야구!" 출력 후 개행 두 번
```c
	while (true)
	{
```
- 무한 외부 반복문 시작
```c
		strike = 0;
		ball = 0;
```
- strike 및 ball을 0으로 대입
```c
		printf("\n\n세 개 숫자 입력: ");
		scanf("%hu %hu %hu", &usrNums[0], &usrNums[1], &usrNums[2]);
```
- 개행 두 번 후 "세 개 숫자 입력: " 출력
- 사용자로부터의 부호 없는 short형 정수 세 입력을 usrNums[0], usrNums[1], usrNums[2]에 저장
```c
		for (i = 0; i < 3; i++)
		{
```
- i를 0으로 대입
- 내부 반복문 시작
```c
			if (usrNums[i] == comNums[i])
			{
				strike++;
			}
```
- 만약 usrNums의 i번 원소랑 comNum의 i번 원소가 같으면
	- strike의 값 더하기 1의 값을 strike에 대입
```c
			for (j = 0; j < 3; j++)
			{
```
- j를 0으로 대입
- 내부의 내부 반복문 시작
```c
				if (i != j && usrNums[i] == comNums[j])
				{
					ball++;
				}
```
- 만약 i랑 j가 같지 않고 만약 usrNums의 i번 원소랑 comNum의 i번 원소가 같으면
	- usrNums와 원소 중 특정 원소의 값이 comNums의 특정 원소의 값과 같지만 첨자가 다르면
		- ball의 값 더하기 1의 값을 ball에 대입
```c
			}
```
- j += 1;
- j가 3 보다 작으면 내부의 내부 반복문 시작
- 내부의 내부 반복문 종료
```c
		}
```
- i += 1;
- i가 3 보다 작으면 내부 반복문 시작
- 내부 반복문 종료
```c
		printf("\n%d번째 도전 결과: ", ++attemp);
```
- 개행 후 "%d번째 도전 결과: " 출력
	- "%d" == ++attemp
```c
		printf("%d 스트라이크! %d 볼!\n", strike, ball);
```
- "%d 스트라이크! %d 볼!" 출력 후 개행
	- "%d" == strike
	- "%d" == ball
```c
		if (strike >= 3)
		{
			break;
		}
```
- 만약 strike가 3이거나 그 이상이면
	- 외부 반복문 종료
```c	
	}
```
- 외부 반복문 종료
```c
	printf("\n\n\n끝!");
```
- 개행 세 번 후 "끝!" 출력
```c
}
```
- main 함수 종료

# 실행 결과
## 도전 3
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/76163207-ffa7-453a-a1d1-f6a53ee7002b" />

## 도전 4
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/6d65d159-6991-4172-8d6a-f2dae0a16695" />

## 도전 6
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/4f46cc8f-d947-43a3-8b44-94676649f258" />
