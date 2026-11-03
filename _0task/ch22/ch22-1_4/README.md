- 2차원 점의 좌표를 저장하는 구조체를 정의하고
	- 사각형의 좌측 상단, 우측 하단의 좌표를 각각 입력 받아 저장하고
	- 사각형의 폭과 높이를 계산하는 코드를 작성하시오.

```
좌측 상단의 좌표 입력: 10 20\n
우측 하단의 좌표 입력: 30 50\n
사각형의 폭: 20
사각형의 높이: 30
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
struct Point
{
	int x;
	int y;
};
```
- 2차원 점의 좌표를 저장할 구조체 정의
	- int형 멤버 변수 선언
		- 사각형의 좌측 상단의 좌표로 사용할 x
		- 사각형의 우측 하단의 좌표로 사용할 y
```
int main()
{
```
- main 함수 정의
```c
	struct Point leftTopPoint, rightBottomPoint;
```
- 구조체 Point 변수 leftTopPoint, rightBottomPoint 선언
```c
	fputs("좌측 상단의 좌표 입력: ", stdout);
	scanf("%d %d", &leftTopPoint.x, &leftTopPoint.y);
```
- fputs 함수를 호출하여 "좌측 상단의 좌표 입력: "을 표준 출력 스트림으로 출력
- scanf 함수를 호출하여 좌측 상단의 좌표를 입력 받아 leftTopPoint 변수의 멤버 변수 x 초기화
```c
	fputs("우측 하단의 좌표 입력: ", stdout);
	scanf("%d %d", &rightBottomPoint.x, &rightBottomPoint.y);
```
- fputs 함수를 호출하여 "우측 하단의 좌표 입력: " 표준 스트림으로 출력
```c
	printf("사각형의 폭: %d\n", rightBottomPoint.x - leftTopPoint.x);
	printf("사각형의 높이: %d\n", rightBottomPoint.y - leftTopPoint.y);
```
- printf 함수를 호출하여 "사각형의 폭: " 출력
	- '%d' == rightBottomPoint.x - leftTopPoint.x
		- 사각형의 폭: 오른쪽 하단의 점 좌표 - 왼쪽 상단의 점 좌표
- printf 함수를 호출하여 "사각형의 높이: " 출력
	- '%d' == rightBottomPoint.y - leftTopPoint.y
		- 사각형의 높이: 오른쪽 하단의 점 좌표 - 왼쪽 상단의 점 좌표
}
```

# 실행 결과