#include <stdio.h>

int main()
{
	double num = 6.28;
	double* ptr = &num;
	double** dptr = &ptr;

	printf("%d\n%d", **dptr, &ptr);
}