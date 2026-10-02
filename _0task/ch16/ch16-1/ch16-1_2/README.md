- 3명 학생의 국어,영어,수학 성적을 입력 받아 각 학생의 평균값을 구한 후 최우수 학생의 성적을 출력하는 프로그램을 작성하라.

```
1번째 학생의 국어, 영어, 수학 성적을 입력: 80 90 100\n
2번째 학생의 국어, 영어, 수학 성적을 입력: 70 80 90\n
3번째 학생의 국어, 영어, 수학 성적을 입력: 60 70 80\n
최우수 학생은 1번째 학생이고 평균 점수는 90점이다.
```

# 소스 코드 설명

```c
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS
```
- #pragma warning(disable:6031)
	- scanf() 함수의 반환값을 확인하지 않아 발생하는 경고 무시
- #define _CRT_SECURE_NO_WARNINGS scanf()
	- 함수 사용 시 발생하는 보안 경고 무시

```c
#include <stdio.h>
```
- 표준 입출력 함수 사용을 위해 stdio.h 헤더 파일 포함

```c
#define STUDENT 3
#define SUBJECT 3
```
- 학생 수와 과목 수를 각각 상수 3으로 정의

```c
int main()
{
```
- main 함수 시작

```c
	unsigned short score[STUDENT][SUBJECT];
	unsigned short meanScore[STUDENT] = { 0 };
	unsigned short hstScoreIdx = 0;
	unsigned short i, j;
```
- 부호 없는 short형 변수 선언
	- 학생의 성적 배열 score[STUDENT][SUBJECT]
	- 평균 점수를 저장할 배열 meanScore[STUDENT]
		- 0으로 초기화
	- 최우수 학생의 인덱스를 저장할 변수 hstScoreIdx
	- 반복문에서 사용할 변수 i, j

```c
	for (i = 0; i < STUDENT; i++)
	{
```
- 외부 반복문 시작
	- i는 0부터 시작
	- 학생 수만큼 반복

```c
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
```
- "%d번째 학생의 국어, 영어, 수학 성적을 입력: " 출력
	- "%d" == i + 1

```c
		for (j = 0; j < SUBJECT; j++)
		{
			scanf("%hu", &score[i][j]);
			meanScore[i] += score[i][j];
		}
		meanScore[i] /= SUBJECT;
```
- 내부 반복문 시작
	- j는 0부터 시작
	- 과목 수만큼 반복
		- 각 학생의 국어, 영어, 수학 성적을 입력받아 score[i][j]에 저장
			- i번째 학생은 행
			- 과목 점수 j는 열
		- meanScore[i]에 score[i][j]를 누적하여 합 대입
	- j++
- 내부 반복문 종료
- meanScore[i]를 SUBJECT로 나누어 평균 점수 계산

```c		
		if (meanScore[hstScoreIdx] < meanScore[i])
		{
			hstScoreIdx = i;
		}
```
- 최우수 학생의 평균 점수와 i번째 학생의 평균 점수를 비교
		- i번째 학생의 평균 점수가 더 높으면 hstScoreIdx를 i로 변경
	}
- 외부 반복문 종료

```c
	printf("최우수 학생은 %hu번재이고 평균 점수는 %hu이다.", hstScoreIdx + 1, meanScore[hstScoreIdx]);
```
- "최우수 학생은 %hu번재이고 평균 점수는 %hu이다." 출력
	- "%hu" == hstScoreIdx + 1
	- "%hu" == meanScore[hstScoreIdx]

```c
}
```
- main 함수 종료

# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/0927b10a-995a-415d-a22a-03bc456a2a60" />
