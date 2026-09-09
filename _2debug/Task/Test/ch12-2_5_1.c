#include <stdio.h>

int main()
{
	int a = 10;

	int* ptr1 = &a, * ptr2 = ptr1;		// int* ptr2 = &a;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", a);
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
}