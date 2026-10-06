// **********************************************
// 제 목: 크기 3의 int형 포인터 배열 ptrarr의 각 원소가 가르키는 변수들 중 최대값 찾기
// 날 짜: 2026년 10월 6일
// 작성자: 2600103 송영원
// **********************************************

#include <stdio.h>

int get_max(int** p, int len);

int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3);
	printf("최대값 :%d\n", max);
	return 0;
}

int get_max(int** p, int len)
{
	int m = **(p + 0);

	for (int i = 1; i < len; i++)
	{
		if (**(p + i) > m)
		{
			m = **(p + i);
		}
	}
	
	return m;
}
