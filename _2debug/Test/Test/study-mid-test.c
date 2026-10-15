// sizeof로 포인터 배열 요소 개수
// 배열 크기 구하기 - sizeof로 전체 크기 나누기 해당 변수 자료형으로 나누면 되는 거 아닌가 되는 것 같은데 뭔가 경고가 뜸
// 포인터 배열 표현

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//void get_data(double* d, int len);
//void get_stat(double* d, int len, double* s);
//void put_stat(double* s);
//
//int main()
//{
//	double data[5];
//	double stat[3];
//
//	get_data(data, 5);
//	get_stat(data, 5, stat);
//	put_stat(stat);
//
//}
//
//void get_data(double* d, int len)
//{
//	printf("5개의 실수를 입력하시오.\n");
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%lf", d + i);
//	}
//}
//
//void get_stat(double* d, int len, double* s)
//{
//	double min = *(d + 0), max = *(d + 0), mean = 0.0f;
//
//	for (int i = 0; i < len; i++)	// mean 때문에 0부터 시작
//	{
//		if (min > *(d + i))
//		{
//			min = *(d + i);
//		}
//		if (max < *(d + i))
//		{
//			max = *(d + i);
//		}
//		mean += *(d + i);
//	}
//	mean /= len;
//
//	s[0] = min;
//	s[1] = max;
//	s[2] = mean;
//
//}
//
//void put_stat(double* s)
//{
//	printf("최소값은 %lf입니다.\n", *(s + 0));
//	printf("최대값은 %lf입니다.\n", *(s + 1));
//	printf("평균값은 %lf입니다.\n", *(s + 2));
//}

//int big(int a, int b);
//int small(int a, int b);
//int get_value(int* a, int (*fP)(int, int));
//
//int main()
//{
//	int arr[5] = { -1,2,10,5,7 };
//	int res;
//	
//	res = get_value(arr, big);
//	printf("최대값은: %d\n", res);
//
//	res = get_value(arr, small);
//	printf("최소값은: %d\n", res);
//}
//
//int big(int a, int b)
//{
//	if (a > b)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int small(int a, int b)
//{
//	if (a < b)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int get_value(int* a, int (*fP)(int, int))
//{
//	int point = *(a + 0);
//	
//	for (int i = 1; i < 5; i++)
//	{
//		if (fP(point, *(a+i)))
//		{
//			point = *(a + i);
//		}
//	}
//
//	return point;
//}

void print_str(char** pA, int c);
char* get_first(char** pA, int c);

int main()
{
    char* ptrArr[] = { "eagle", "tiger", "lion", "squirrel" };
    char* ptr;
    int cnt = sizeof(ptrArr) / sizeof(ptrArr + 0);

    print_str(ptrArr, cnt);
    ptr = get_first(ptrArr, cnt);
    printf("사전에서 가장 앞에 나오는 단어: %s\n", ptr);
}

void print_str(char** pA, int c)
{
    for (int i = 0; i < c; i++)
    {
        printf("%s\n", pA[i]);
    }
}

char* get_first(char** pA, int c)
{
    char* ptrFirst = pA[0];

    for (int i = 1; i < c; i++)
    {
		if (ptrFirst > pA[i])
        {
            ptrFirst = pA[i];
        }
    }

    return ptrFirst;
}
