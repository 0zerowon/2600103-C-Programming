// **********************************************
// 제목: 구조체로 자동차 모델, 번호판, 주행 거리 입력받아 출력하기
// 날짜: 2026년 11월 4일
// 작성자: 2600103 송영원
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>

struct MyCar
{
	char modelName[10];
	char number[10];
	int distance;
};

int main()
{
	struct MyCar car;
	char buffer[10];

	fputs("모델을 입력하시오: ", stdout);
	/*gets(buffer);
	struct MyCar car = { buffer, "", 0 };*/		// 논리적 오류
	//gets(car.modelName);
	gets(buffer);
	for (int i = 0; i < sizeof(buffer); i++)
	{
		car.modelName[i] = buffer[i];
	}

	fputs("번호판을 입력하시오: ", stdout);
	//gets(car.number);
	gets(buffer);
	strcpy(car.number, buffer);

	fputs("주행 거리를 입력하시오: ", stdout);
	scanf("%d", &car.distance);

	putchar('\n');
	printf("1. 모델: %s\n", car.modelName);
	printf("2. 번호판: %s\n", car.number);
	printf("3. 주행 거리: %dkm\n", car.distance);
}