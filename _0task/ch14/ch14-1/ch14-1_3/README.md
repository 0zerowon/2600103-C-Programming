- 과제 2번의 함수를 값에 의한 호출을 이용하여 2를 증가시킨 후 리턴하고
- main함수에서 리턴값을 받아서 처리하는 방식으로 다음처럼 실행되도록 하시오.
- 반드시 함수의 선언,호출,정의를 모두 사용할 것

```
정수를 입력 하시오: 15\n
2만큼 증가한 값: 17
```

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

int add2(int value);

int main(void)
{
	int number;
	printf("정수를 입력하세요: ");
	scanf("%d", &number);
	number = add2(number);
	printf("2만큼 증가한 값: %d\n", number);
	return 0;
}

int add2(int value)
{
	return value += 2;
}
```