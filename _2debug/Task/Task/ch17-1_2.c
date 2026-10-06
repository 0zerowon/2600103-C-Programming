#include <stdio.h>
int get_max(int** p, int len);

int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3); // 함수호출
	printf("최댓값:%d\n", max);
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
