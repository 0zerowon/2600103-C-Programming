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