#include <stdio.h>
int main(void)
{
	int* ptr = (int*)125; // ①
	*ptr = 10;
	printf("%d\n", *ptr);
	return 0;
}