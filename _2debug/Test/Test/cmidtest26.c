#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//학번: 2600103

//이름: 송영원

//총점:



//1번

/*
void get_data(double* d, int len);
void get_stat(double* d, int len, double* s);
void put_stat(double* s);

int main()
{
	double data[5];
	double stat[3];

	get_data(data, 5);
	get_stat(data, 5, stat);
	put_stat(stat);
}

void get_data(double* d, int len)
{
	printf("5개의 실수를 입력하시오.\n");

	for (int i = 0; i < len; i++)
	{
		scanf("%lf", (d + i));
	}
}

void get_stat(double* d, int len, double* s)
{
	double min = *(d + 0), max = *(d + 0), mean = 0.0;

	for (int i = 1; i < len; i++)
	{
		if (min > *(d + i))
		{
			min = *(d + i);
		}
		if (max < *(d + i))
		{
			max = *(d + i);
		}
	}
	for (int i = 0; i < len; i++)
	{
		mean += *(d + i);

	}

	mean = mean / len;

	*(s + 0) = min;
	*(s + 1) = max;
	*(s + 2) = mean;

}

void put_stat(double* s)
{
	printf("최소값은 %lf입니다.\n", *(s + 0));
	printf("최대값은 %lf입니다.\n", *(s + 1));
	printf("평균은 %lf입니다.\n", *(s + 2));
}
*/



//2번

/**/



//3번

/*

int big(int a, int b);
int small(int a, int b);
int get_value(int* a, int (*fP)(int, int));

int main()
{
	int arr[5] = { -1,2,10,5,7 };
	int res;

	res = get_value(arr, big);
	printf("최대값은: %d\n", res);

	res = get_value(arr, small);
	printf("최소값은: %d\n", res);
}

int big(int a, int b) 
{
	
}

int small(int a, int b)
{

}

int get_value(int* a, int (*fP)(int, int))
{
	for (int i = 1; i < sizeof(a) / sizeof(a + 0); i++)
	{
		if (fP())
		{

		}
		esle
		{

		}
	}

	return 
}
*/



//4번

/*

void print_str(char* ptrA, int c);
char get_first(char* ptrA, int c);

int main()
{
	char* ptrArr[] = { "eagle", "tiger","lion","squirrel" };
	char* ptr;
	int cnt = sizeof(ptrArr) / sizeof(ptrArr + 0);

	print_str(ptrArr, cnt);
	ptr = get_first(ptrArr, cnt);
	
	printf("사전에서 가장 앞에 나오는 단어: %s\n", ptr);
}

void print_str(char* ptrA, int c)
{
	for (int i = 0; i < c - 1; i++)
	{

	}
}

char get_first(char* ptrA, int c)
{

}
*/



//5번

/*소스코드작성 테스트후 주석처리*/