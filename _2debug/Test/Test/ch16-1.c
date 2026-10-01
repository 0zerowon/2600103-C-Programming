#include <stdio.h>


int main()
{
	int arr[5][3] = { {1,1,1} };
	//int arr2[][2] = { {1, 0}, {2, 0}, {3, 0} };		// arr2[3][2]

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
			printf(" - %d", &arr[0][0] + j + 4 * i);		// i행 j열의 주소

		}
		printf("\n");
	}
}