//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i;
//	printf("난수의 범위: 0부터 99까지\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("난수 출력: %d\n", rand() % 100);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int i;
//
//	srand((int)time(NULL));
//	for (i = 1; i <= 2; i++)
//	{
//		printf("주사위 %d의 결과 %d\n", i, rand() % 6 + 1);
//	}
//}

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#include <stdbool.h>

int main()
{
	unsigned short i, j;
	unsigned short comNums[3] = { 0 };
	unsigned short usrNums[3] = { 0 };
	unsigned short strike, ball, attemp = 0;
	bool isDuplicate = false;

	srand((unsigned int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		do
		{
			comNums[i] = rand() % 10;

			for (j = 0; j < i; j++)
			{
				if (comNums[i] == comNums[j])
				{
					isDuplicate = true;
					break;
				}
			}
		}
		while (isDuplicate);
	}

	printf("숫자 야구!\n\n");
	while (true)
	{
		strike = 0;
		ball = 0;

		printf("\n\n세 개 숫자 입력: ");
		scanf("%hu %hu %hu", &usrNums[0], &usrNums[1], &usrNums[2]);

		for (i = 0; i < 3; i++)
		{
			if (usrNums[i] == comNums[i])
			{
				strike++;
			}

			for (j = 0; j < 3; j++)
			{
				if (i != j && usrNums[i] == comNums[j])
				{
					ball++;
				}

			}
		}

		printf("\n%d번째 도전 결과: ", ++attemp);
		printf("%d 스트라이크! %d 볼!\n", strike, ball);
		if (strike >= 3)
		{
			break;
		}
	}
	printf("\n\n\n끝!");
}