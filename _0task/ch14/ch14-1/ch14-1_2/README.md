- 아래 코드에서 add2함수는 매개변수의 값을 2만큼 증가시키는 함수이다.
	- 그러나 실행결과에서 보듯이 원하는 대로 동작하지 않는다.
		- ```정수를 입력 하시오: 15\n 2만큼 증가한 값: 15```
	- 그 이유를 17페이지 메모리 그림을 이용하여 자세히 설명하고 원하는 결과가 나오도록 코드를 수정하시오.

```c
#include <stdio.h>

void add2(int value);

int main(void)
{
	int number;
	printf(“정수를 입력하세요:”);
	scanf(“%d”, &number);
	add2(number);
	printf(“2만큼 증가한 값:%d\n", number);
	return0;
}

void add2(int value)
{
value += 2;
}
```