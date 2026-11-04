// **********************************************
// 제목: 구조체로 좌측 상단 좌표, 우측 하단 좌표를 입력받아 사각형의 폭과 높이 출력하기
// 날짜: 2026년 11월 3일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point leftTopPoint, rightBottomPoint;

	fputs("좌측 상단의 좌표 입력: ", stdout);
	scanf("%d %d", &leftTopPoint.x, &leftTopPoint.y);
	fputs("우측 하단의 좌표 입력: ", stdout);
	scanf("%d %d", &rightBottomPoint.x, &rightBottomPoint.y);

	printf("사각형의 폭: %d\n", rightBottomPoint.x - leftTopPoint.x);
	printf("사각형의 높이: %d\n", rightBottomPoint.y - leftTopPoint.y);
}