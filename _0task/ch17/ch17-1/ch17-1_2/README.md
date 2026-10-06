- 다음 코드에서 함수 선언과 정의를 추가하여 결과처럼 나오도록 하시오.

```c
#include <stdio.h>
// 함수선언
int main(void)
{
int num1 = 50, num2 = 20, num3 = 30;
int* ptrarr[3] = {&num1, &num2, &num3};
int max;
max = get_max(ptrarr, 3); // 함수호출
printf("최대값:%d\n", max);
return 0;
}
// 함수정의
```

```
최대값: 50
```