#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)

#include <stdio.h>

//학번: 2600103

//이름: 송영원

//총점:



//1번

/*
void get_data(double* d, int len);
double get_avg(double* d, int len);
void put_avg(double d);

int main()
{
	double data[5];
	double avg;
	
	get_data(data, 5);
	avg = get_avg(data, 5);
	put_avg(avg);
}

void get_data(double* d, int len)
{
	printf("%d개의 실수를 입력:", len);
	for (int i = 0; i < len; i++)
	{
		scanf("%lf", &d[i]);
	}
}

double get_avg(double* d, int len)
{
	double avg = 0.0;

	for (int i = 0; i < len; i++)
	{
		avg += d[i];
	}

	return avg / len;
}

void put_avg(double d)
{
	printf("평균값은 %lf입니다.", d);
}
*/


//2번

/*
void get_digit(int* y, int* d100, int* d10, int* d1);

int main()
{
	int x;
	int digit100, digit10, digit1;

	printf("세자리 정수를 입력하세요:");
	scanf("%d", &x);

	get_digit(&x, &digit100, &digit10, &digit1);

	printf("100자리 숫자는 %d\n", digit100);
	printf("10자리 숫자는 %d\n", digit10);
	printf("1자리 숫자는 %d\n", digit1);
}

void get_digit(int* y, int* d100, int* d10, int* d1)
{
	*d100 = *y / 100;
	*d10 = *y % 100 / 10;
	*d1 = *y % 100 % 10;
}
*/


//3번

/*
void get_data(int* a, int r, int c);
void print_data(int* a, int r, int c);
void get_avg(int* a, int r, int c);

int main()
{
	int score[3][4];

	get_data(&score[0][0], 3, 4);
	print_data(&score[0][0], 3, 4);
	get_avg(&score[0][0], 3, 4);
}

void get_data(int* a, int r, int c)
{
	for (int i = 0;  i < r; i++)
	{
		printf("%d번째 %d과목 점수입력: ", i + 1, c);
		for (int j = 0; j < c; j++)
		{
			scanf("%d", a + c * i + j);
		}
	}
}
void print_data(int* a, int r, int c)
{
	printf("%d명 학생점수출력\n", r);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", *(a + c * i + j));
		}
		printf("\n");
	}
}

void get_avg(int* a, int r, int c)
{
	int total;
	double avg;

	for (int i = 0; i < r; i++)
	{
		total = 0;
		for (int j = 0; j < c; j++)
		{
			total += *(a + c * i + j);
		}
		avg = total / c;
		printf("%d번째 학생의 총점 : %d, 평균 : %.2lf\n", r + 1, total, avg);
	}
}
*/

//4번

/*
void get_data(char** p, int len);
void print_data(char** p, int len);
int get_first(char** p, int len);

int main()
{
	char str[4][10];
	char* ptr[4] = { &str[0][0], &str[1][0], &str[2][0], &str[3][0] };
	int first;

	get_data(ptr, 4);
	print_data(ptr, 4);
	first = get_first(ptr, 4);
	printf("제일앞에 나오는문자열 : %s\n", &str[first][0]);
}

void get_data(char** p, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("문자열 입력 : ");
		scanf("%s", &p[i][0]);
	}
}

void print_data(char** p, int len)
{
	printf("문자열출력\n");

	for (int i = 0; i < len; i++)
	{
		printf("%s\n", &p[i][0]);
	}
}

int get_first(char** p, int len)
{
	int i, firstIdx = 0;

	for (i = 0; i < len; i++)
	{
		if (p[firstIdx][0] > p[i][0])
		{
			firstIdx = i;
		}
	}

	return firstIdx;
}
*/

//5번

/*
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void calc(int (*fp)(int, int), char* s);

int main()
{
	calc(add, "정수합");
	calc(sub, "정수차");
	calc(mul, "정수곱");
	calc(div, "정수몫");
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

void calc(int (*fp)(int, int), char* s)
{
	int num1, num2;

	printf("두정수를 입력:");
	scanf("%d %d", &num1, &num2);

	printf("%s : %d\n", s, fp(num1, num2));
}
*/
