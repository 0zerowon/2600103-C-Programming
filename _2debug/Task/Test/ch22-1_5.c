#include <stdio.h>
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 };
	printf("교환 전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환 전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	int tmpX, tmpY;
	tmpX = p1.x;
	tmpY = p1.y;
	p1.x = p2.x;
	p1.y = p2.y;
	p2.x = tmpX;
	p2.y = tmpY;
	printf("교환 후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환 후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}