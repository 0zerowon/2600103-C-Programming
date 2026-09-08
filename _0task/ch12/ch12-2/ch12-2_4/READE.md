- 아래 코드를 포인터를 이용한 간접 참조 방식의 코드로 필요한 코드를 추가 또는 수정하시오. 실행 결과는 같아야 한다.


```c
#include <stdio.h>
int main(void)
{
	int a = 100, b = 200;
	int sum;

	sum = a + b; //포인터를 이용하여 수정
	printf("두 정수의 합: %d\n", sum); //포인터를 이용하여 수정
	return 0;
}
```

```c
#include <stdio.h>
int main(void)
{
	int a = 100, b = 200;
	int* pa = &a, * pb = &b;
	int sum;

	sum = *pa + *pb; //포인터를 이용하여 수정
	printf("두 정수의 합: %d\n", *&sum); //포인터를 이용하여 수정
	return 0;
}
```