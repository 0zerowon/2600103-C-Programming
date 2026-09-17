#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:6031)

#include <stdio.h>

float arr[5];

int main(void)
{
	float* ptrArr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] �ʱ�ȭ: ", i);
		scanf("%f", &ptrArr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		ptrArr[i] += 2;
	}

	printf("\nfloat arr[5] = { ");
	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", ptrArr[i]);
	}
	printf("}\n");

}

//int main(void)
//{
//	int a[] = { 10, 20, 30 }, i, sum = 0;
//	int* p = a;
//
//	for (i = 0; i < 3; i++)
//		sum += a[i]; //�迭ǥ��
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *(a + i); //�迭���� �̿��� �ּ�ǥ��
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += p[i]; //�����ͺ����� �̿��� �迭ǥ��
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *(p + i); //������ ������ �̿��� �ּ�ǥ��
//	printf("sum:%d\n", sum);
//	sum = 0;
//	for (i = 0; i < 3; i++)
//		sum += *p++; //���������� �̿��� �ּ�ǥ��
//	printf("sum:%d\n", sum);
//	return 0;
//}