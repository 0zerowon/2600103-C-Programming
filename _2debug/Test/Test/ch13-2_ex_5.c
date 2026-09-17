#include <stdio.h>
int main(void)
{
	int i, n;
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* pa[5] = { &a, &b, &c, &d, &e };
	n = sizeof(pa) / sizeof(pa[0]); // 배열 원소 개수 계산
	for (i = 0; i < n; i++)
		printf("%d\n", *pa[i]); //pa[i]는 주소, *pa[i]는 값
	return 0;
}