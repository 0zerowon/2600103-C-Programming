#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

#include <stdbool.h>

#define NUMBER_OF_EMPLOYEES 3

struct Salary
{
	unsigned int general;
	unsigned int bonus;
};

struct employee
{
	char name[10];
	char id[15];
	struct Salary sal;
};

int main()
{
	struct employee empl[NUMBER_OF_EMPLOYEES];
	//const unsigned short emplLen = sizeof(empl) / sizeof(empl[0]);
	unsigned short idx;
	unsigned short emplNum;
	bool confirmBonus[NUMBER_OF_EMPLOYEES];
	unsigned int includeBonusSalaryTotal;

	printf("%hu명의 직원 정보를 입력하시오.\n", NUMBER_OF_EMPLOYEES);
	for (idx = 0; idx < NUMBER_OF_EMPLOYEES; idx++)
	{
		emplNum = idx + 1;

		putchar('\n');

		printf("%hu번 사원의 개인정보를 입력하시오.\n", emplNum);
		fputs("이름: ", stdout);
		gets(empl[idx].name);
		fputs("주민등록번호: ", stdout);
		gets(empl[idx].id);

		putchar('\n');

		printf("%hu번 사원의 월급을 입력하시오.\n", emplNum);
		scanf("%u", &empl[idx].sal.general);

		putchar('\n');

		printf("%hu번 사원에게 이번 달 보너스를 지급하겠습니까?\n", emplNum);
		scanf("%d", &confirmBonus[idx]);
		getchar();
		if (confirmBonus[idx])
		{
			printf("%hu번 사원의 보너스를 입력하시오.\n", emplNum);
			scanf("%u", &empl[idx].sal.bonus);
			getchar();
		}
	}

	putchar('\n');

	bool printInfo;
	printf("%hu명의 이번 달 월급을 출력합니다.\n", NUMBER_OF_EMPLOYEES);
	for (idx = 0; idx < NUMBER_OF_EMPLOYEES; idx++)
	{
		emplNum = idx + 1;

		putchar('\n');

		printf("%hu번 사원의 이번 달 월급은 ", emplNum);
		if (confirmBonus[idx])
		{
			includeBonusSalaryTotal = empl[idx].sal.general + empl[idx].sal.bonus;
			printf("보너스 %u가 추가된 %u입니다.\n", empl[idx].sal.bonus, includeBonusSalaryTotal);
		}
		else
		{
			printf("%u입니다.\n", empl[idx].sal.general);
		}

		putchar('\n');

		puts("해당 사원의 개인정보를 출력하겠습니까?");
		scanf("%d", &printInfo);
		if (printInfo)
		{
			printf("이름: %s\n주민등록번호: %s\n", empl[idx].name, empl[idx].id);
		}
	}
}