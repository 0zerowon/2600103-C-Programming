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