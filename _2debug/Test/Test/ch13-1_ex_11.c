#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30 }, i, sum = 0;
	int* p = a;

	for (i = 0; i < 3; i++)
		sum += a[i]; //배열표현
	printf("sum:%d\n", sum);
	sum = 0;
	for (i = 0; i < 3; i++)
		sum += *(a + i); //배열명을 이용한 주소표현
	printf("sum:%d\n", sum);
	sum = 0;
	for (i = 0; i < 3; i++)
		sum += p[i]; //포인터변수를 이용한 배열표현
	printf("sum:%d\n", sum);
	sum = 0;
	for (i = 0; i < 3; i++)
		sum += *(p + i); //포인터 변수를 이용한 주소표현
	printf("sum:%d\n", sum);
	sum = 0;
	for (i = 0; i < 3; i++)
		sum += *p++; //증감연산자 이용한 주소표현
	printf("sum:%d\n", sum);
	return 0;
}