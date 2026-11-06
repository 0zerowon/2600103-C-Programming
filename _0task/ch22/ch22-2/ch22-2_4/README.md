- 2차원 평면의 점을 저장하는 point 구조체와 이를 이용하여
	- 삼각형의 3개의 점을 저장하는 triangle 구조체를 정의하고
	- 키보드로부터 3개의 점을 입력 받고
	- 직각삼각형인지 아닌지 판단하는 코드를 작성 하시오.

```
1번째 점(x, y) 입력: 0 0\n
2번째 점(x, y) 입력: 5 0\n
3번째 점(x, y) 입력: 0 5\n
삼각형은 직각 삼각형임
```
```
1번째 점(x, y) 입력: 0 0\n
2번째 점(x, y) 입력: 5 0\n
3번째 점(x, y) 입력: 3 4\n
삼각형은 직각 삼각형 아님
```

# 소스 코드 설명
```c
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
```
- 입출력 함수를 사용하기 위한 전처리

```c
struct point
{
	int x, y;
};
```
- 구조체 point 정의
	- 멤버 변수 int형 x, y
```c
struct triangle
{
	struct point p[3];
};
```
- 구조체 triangle 정의
	- point형 구조체 변수 크기 3의 배열 p
```c
int main()
{
```
- main 함수 시작
```c
	struct triangle t;
	int tLen = sizeof(t.p) / sizeof(t.p[0]);
```
- t구조체 변수 t 선언
- int형 변수 tLen 선언 및 3으로 초기화
```c
	for (int i = 0; i < tLen; i++)
	{
		printf("%d번째 점(x, y) 입력: ", i + 1);
		scanf("%d %d", &t.p[i].x, &t.p[i].y);

	}
```
- 구조체 변수 t의 멤버 변수 배열 p의 i번 째의 멤버 변수 x, y 사용자로부터 입력 받아 할당
```c
	if (t.p[0].x == t.p[1].y && t.p[0].x == t.p[2].x)
	{
		fputs("삼각형은 직각 삼각형임", stdout);
	}
	else
	{
		fputs("삼각형은 직각 삼각형 아님", stdout);
	}
```
- 첫 번째 점 x와 두 번째 점의 y가 같고 첫 번째 점 x와 세 번째 점 x가 같으면 직각 삼각형
```c
}
```
- main 함수 종료
# 실행 결과
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/93421004-e3e4-4c8b-83b2-bf61a3099b67" />
<img width="979" height="512" alt="image" src="https://github.com/user-attachments/assets/450b6410-42f4-4364-95e6-be743b42461b" />

