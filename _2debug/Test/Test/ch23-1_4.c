#include<stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
} Point;
void OrgSymTrans(Point* ptr); // 원점에 대한 대칭이동
void ShowPosition(Point pos);
int main(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans(&pos);
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);
	return 0;
}
void OrgSymTrans(Point* ptr) // 원점에 대한 대칭이동
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}
void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}