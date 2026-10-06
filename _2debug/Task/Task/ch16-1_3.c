#include <stdio.h>

#define ARRAY_SIZE 3

int main()
{
	int arr[ARRAY_SIZE][ARRAY_SIZE] = {
		{ -5,2,35 },
		{ -20,5,100 },
		{ -75,5,-25 } };
	int maxVal = arr[0][0];
	short maxIdxI = 0, maxIdxJ = 0;

	for (short i = 0; i < ARRAY_SIZE; i++)
	{
		for (short j = 0; j < ARRAY_SIZE; j++)
		{
			if(maxVal < arr[i][j])
			{
				maxVal = arr[i][j];
				maxIdxI = i;
				maxIdxJ = j;
			}
		}
	}

	printf("최대값은 %d\n위치는 %d행 %d열\n", maxVal, maxIdxI + 1, maxIdxJ + 1);
}