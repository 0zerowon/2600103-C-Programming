- 키보드로 부터 실수를 입력 받아 그것의 정수부와 소수부를 구하여 출력해주는 프로그램을 작성하시오.
- 정수부와 소수부를 구하여 리턴하는 부분을 1개의 함수로 작성할 것
- 화면에 입출력하는 부분은 메인함수에서 작성할 것
- 함수의 정의, 호출, 선언을 모두 작성하시오.
```
실수를 입력하시오: 3.14159\n
정수부: 3
소수부: 0.14159
```
# 소스 코드 설명
```c
#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float Split_Number(float f);

int main()
{
	float realNum = 0.0f;

	printf("실수를 입력하시오: ");
	scanf("%f", &realNum);

	float frac = Split_Number(realNum);
	printf("정수부: %d\n", (int)realNum);
	printf("소수부: %.6f\n", frac);

	return 0;
}

float Split_Number(float f)
{
	return f - (int)f;
}
```
# 출력 결과