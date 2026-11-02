#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct MyCar
{
	char modelName[10];
	char number[10];
	int distance;
};

int main()
{
	struct MyCar car;

	fputs("모델을 입력하시오: ", stdout);
	gets(car.modelName);
	fputs("번호판을 입력하시오: ", stdout);
	gets(car.number);
	fputs("주행 거리를 입력하시오: ", stdout);
	scanf("%d", &car.distance);

	printf("1. 모델: %s\n", car.modelName);
	printf("2. 번호판: %s\n", car.number);
	printf("3. 주행 거리: %dkm\n", car.distance);
}