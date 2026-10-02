// **********************************************
// 제 목: 3x3 2차원 배열에서 최대값과 그 인덱스 위치 찾기
// 날 짜: 2026년 10월 2일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>
#include <stdint.h>

struct My_Int8
{
	unsigned char i : 2, j : 2, k : 2;		// 6bits
	unsigned char : 2;						// 2bits: padding
}int8;

int main()
{
	int8_t arr[3][2][2] =
	{
		{
			{2,4},
			{5,-5}
		},
		{
			{-2,3},
			{0,-5}
		},
		{
			{0}
		}
	};

	//uint8_t i = 0;
	printf("연산 결과:\n");
	////for (unsigned char i = 0; i < 1; i++)
	{
		//for (uint8_t j = 0; j < 2; j++)
		for (int8.j = 0; int8.j < 2; int8.j++)
		{
			//for (uint8_t k = 0; k < 2; k++)
			for (int8.k = 0; int8.k < 2; int8.k++)
			{
				arr[2][int8.j][int8.k] = arr[0][int8.j][int8.k] + arr[1][int8.j][int8.k];
				//printf("%d\t", arr[i][j][k] + arr[i + 1][j][k]);
				printf("%d\t", arr[2][int8.j][int8.k]);
			}
			printf("\n");
		}
		//printf("\n");
	}
}
