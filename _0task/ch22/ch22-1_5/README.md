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