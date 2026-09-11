#include <stdio.h>
int main(void)
{
	int a[] = { 10, 20, 30 }, i, sum = 0;
	int* pA = a;

	for (i = 0; i < 3; i++)
		sum += *pA++;
	printf("sum:%d\n", sum);
	return 0;
}