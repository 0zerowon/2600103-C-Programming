#include <stdio.h>
int main(void)
{
	int grade[5];
	int sum = 0, i, average;
	for (i = 0; i < 5; i++)
	{
		printf("성적을 입력하시오: ");
		scanf_s("%d", grade + i);
	}
	for (i = 0; i < 5; i++)
		sum += *(grade + i);

	average = sum / 5.0;
	printf("성적 평균= %d\n", average);

	return 0;
}