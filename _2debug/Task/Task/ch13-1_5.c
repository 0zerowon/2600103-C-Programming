#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float arr[5];

int main(void)
{
	float* ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] 초기화: ", i);
		scanf("%f", ptrArr + i);
	}

	for (int i = 0; i < 5; i++)
	{
		*(ptrArr + i) += 2;
	}

	printf("\nfloat arr[5] = { ");
	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", *(ptrArr + i));
	}
	printf("}\n");

}

//int main(void)
//{
//	int a[] = { 10, 20, 30 }, i, sum = 0;
//	int* p = a;
//
//	for (i = 0; i < 3; i++)
//		sum += a[i]; //배열표현
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *(a + i); //배열명을 이용한 주소표현
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += p[i]; //포인터변수를 이용한 배열표현
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *(p + i); //포인터 변수를 이용한 주소표현
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *p++; //증감연산자 이용한 주소표현
//	printf("sum:%d\n", sum);
//	return 0;
//}