// **********************************************
// 제 목: 내림차순 정렬하기
// 날 짜: 2026년 10월 1일
// 작성자: 2600103 송영원
// **********************************************

#pragma warning(disable:6031)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void DesSort(int ary[], int len);

int main()
{
	int arr[7];

	for (int i = 0; i < 7; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}

}

void DesSort(int ary[], int len)
{
	int temp;

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < (len - i) - 1; j++)
		{
			if(ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
