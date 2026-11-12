 아래코드를 열거형을 이용하여 가독성이 높은 코드로 수정해보시오.
```c
#include <stdio.h>
int main(void)
{
int direction=10;
switch (direction)
{
case 10: printf("현재방향: 위"); break;
case 20: printf("현재방향: 아래"); break;
case 30: printf("현재방향: 왼쪽"); break;
case 40: printf("현재방향: 오른쪽"); break;
}
return 0;
}
```