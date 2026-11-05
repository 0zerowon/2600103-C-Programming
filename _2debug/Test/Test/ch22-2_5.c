#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
struct point {
	int x;
	int y;
};
struct rect {
	struct point p1; //왼쪽상단 좌표
	struct point p2; //오른쪽하단 좌표
};
int main(void)
{
	struct rect r;
	int w, h, area, peri;
	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;
	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
	return 0;
}