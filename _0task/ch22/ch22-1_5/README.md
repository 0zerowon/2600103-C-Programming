- 두개의 구조체 변수의 멤버 변수의 값을 교환하는 코드를 작성하시오.(swap 알고리즘)

```c
#include <stdio.h>
struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = {10,10}, p2={20,20};
	printf("교환 전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환 전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	// 두 구조체 변수 p1, p2의 멤버 변수의 값을 교환하는 코드
	printf("교환 후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환 후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}
```

```
교환 전 P1의 좌표: (10,10)
교환 전 P2의 좌표: (20,20)
교환 후 P1의 좌표: (20,20)
교환 후 P2의 좌표: (10,10)
```

```c
	int tmpX, tmpY;
	tmpX = p1.x;
	tmpY = p1.y;
	p1.x = p2.x;
	p1.y = p2.y;
	p2.x = tmpX;
	p2.y = tmpY;
```
- 구조체 변수 p1의 멤버 변수 x, y의 값으로 초기화하여
	- p2의 x, y에 대입할
		- tmpX, tmpY 선언
- p1의 x의 값으로 tmpX을 초기화
- p1의 y의 값으로 tmpY을 초기화
- p1의 x를 p2의 x로 대입
- p1의 y를 p2의 y로 대입
- p2의 x를 tmpX로 대입
- p2의 y를 tmpY로 대입