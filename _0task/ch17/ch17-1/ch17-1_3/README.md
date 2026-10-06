- 다음 코드에서 함수선언과 정의를 추가하여 결과처럼 나오도록 하시오.

```c
#include <stdio.h>
// 함수선언
int main(void)
{
char* ptrarr[] = {"eagle", "tiger", "lion", "squirrel“ };
int count;
count = sizeof(ptrarr)/sizeof(ptrarr[0]);
prn_str(ptrarr, count);
return 0;
}
// 함수정의
```

```
eagle
tiger
lion
squirrel
```