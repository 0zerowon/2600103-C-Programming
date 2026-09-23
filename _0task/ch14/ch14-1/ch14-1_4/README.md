- swap함수 예제를 참고하여 아래 결과가 나오도록 코드를 수정 하시오. 
	- 세 정수를 교환하는 부분은 반드시 함수(swap)로 작성하고 또, 함수의 선언, 호출, 정의를 모두 사용할 것
- 세 정수의 교환 방법은 실행 결과로부터 유추하라.
- 24페이지처럼 시간에 따라 메모리의 상태를 그려보시오.
```
정수 x를 입력 하시오: 10\n
정수 y를 입력 하시오: 20\n
정수 z를 입력 하시오: 30\n
swap 함수 호출 전 x=10, y=20, z=30
swap 함수 호출 후 x=20, y=30, z=10
```

# 소스 코드 설명

```c
#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

void swap(int* px, int* py, int* pz);

int main(void)
{
	int x, y, z;

	printf("정수 x를 입력하시오: ");
	scanf("%d", &x);
	printf("정수 y를 입력하시오: ");
	scanf("%d", &y);
	printf("정수 z를 입력하시오: ");
	scanf("%d", &z);
	printf("swap 함수 호출 전 x = %d, y = %d, z = %d\n", x, y, z);
	swap(&x, &y, &z);

	return 0;
}

void swap(int* px, int* py, int* pz)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = *pz;
	*pz = tmp;

	printf("swap 함수 호출 전 x = %d, y = %d, z = %d\n", *px, *py, *pz);

}
```

# 실행 결과