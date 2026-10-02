// **********************************************
// 제 목: 3x3 2차원 배열에서 최대값과 그 인덱스 위치 찾기
// 날 짜: 2026년 10월 2일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

#define ARRAY_SIZE 3

int main()
{
	int arr[ARRAY_SIZE][ARRAY_SIZE] = {
		{ -5,2,35 },
		{ -20,5,100 },
		{ -75,5,-25 } };
	int maxVal = arr[0][0];
	short i, j;

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		for (j = 0; j < ARRAY_SIZE; j++)
		{
			if(maxVal < arr[i][j])
			{
				maxVal = arr[i][j];
			}
		}
	}

	printf("arr[%d][%d] == %d\n", i-1, j-1, maxVal);
}