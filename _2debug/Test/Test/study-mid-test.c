#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

// 모의고사
/*
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

//void print_str(char** pA, int c);
//char* get_first(char** pA, int c);
//
//int main()
//{
//    char* ptrArr[] = { "eagle", "tiger", "lion", "squirrel" };
//    char* ptr;
//    int cnt = sizeof(ptrArr) / sizeof(ptrArr + 0);
//
//    print_str(ptrArr, cnt);
//    ptr = get_first(ptrArr, cnt);
//    printf("사전에서 가장 앞에 나오는 단어: %s\n", ptr);
//}
//
//void print_str(char** pA, int c)
//{
//    for (int i = 0; i < c; i++)
//    {
//        printf("%s\n", pA[i]);
//    }
//}
//
//char* get_first(char** pA, int c)
//{
//    char* ptrFirst = pA[0];
//
//    for (int i = 1; i < c; i++)
//    {
//		if (ptrFirst > pA[i])
//        {
//            ptrFirst = pA[i];
//        }
//    }
//
//    return ptrFirst;
//}
*/

/*
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
//}
//
//void get_data(double* d, int len)
//{
//	printf("%d개의 실수를 입력하시오.\n", len);
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%lf", &d[i]);
//
//	}
//
//}
//
//void get_stat(double* d, int len, double* s)
//{
//	s[0] = d[0];
//	s[1] = d[0];
//	s[2] = d[0];
//
//	for (int i = 1; i < len; i++)
//	{
//		if (s[0] > d[i])
//		{
//			s[0] = d[i];
//		}
//		if (s[1] < d[i])
//		{
//			s[1] = d[i];
//		}
//		s[2] += d[i];
//	}
//	s[2] /= len;
//
//}
//
//void put_stat(double* s)
//{
//	printf("최소값은 %lf입니다.\n", s[0]);
//	printf("최대값은 %lf입니다.\n", s[1]);
//	printf("평균은 %lf입니다.\n", s[2]);
//}

//int main()
//{
//	char str[3][10];
//	int i;
//
//	printf("공백없이 3개의 문자열 입력:\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &str[i][0]);
//	}
//
//	printf("공백없이 3개의 문자열 출력:\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//	}
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
//
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
//
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int get_value(int* a, int(*fP)(int, int))
//{
//	int n = a[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (fP(n, a[i]))
//		{
//			n = a[i];
//		}
//	}
//
//	return n;
//}

//void print_str(char** a, int cnt);
//char* get_first(char** a, int cnt);
//
//int main()
//{
//	char* ptrArr[] = { "eagle","tiger","lion","squirrel" };
//	char* ptr;
//	int cnt = sizeof(ptrArr) / sizeof(ptrArr[0]);
//
//	print_str(ptrArr, cnt);
//	ptr = get_first(ptrArr, cnt);
//
//	printf("사전에서 가장 앞에 나오는 단어: %s\n", ptr);
//}
//
//void print_str(char** a, int cnt)
//{
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%s\n", a[i]);
//	}
//}
//
//char* get_first(char** a, int cnt)
//{
//	char* firstCh = a[0];
//
//	for (int i = 1; i < cnt; i++)
//	{
//		if (firstCh > a[i])
//		{
//			firstCh = a[i];
//		}
//	}
//
//	return firstCh;
//}

//void get_str(char** a, int len);
//int get_strlen(char* a);
//
//int main()
//{
//	char str[3][50];
//	char* pArr[3] = { &str[0][0],&str[1][0],&str[2][0] };
//	int i, cnt = 0;
//
//	get_str(pArr, 3);
//	for (i = 0; i < 3; i++)
//	{
//		cnt = get_strlen(pArr[i]);
//		printf("%d번째 문자열 길이: %d\n", i + 1, cnt);
//	}
//}
//
//void get_str(char** a, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d번째 문자열 입력: ", i + 1);
//		scanf("%s", a[i]);
//	}
//}
//
//int get_strlen(char* a)
//{
//	int i = 0;
//
//	while (a[i] != '\0')
//	{
//		i++;
//	}
//
//	return i;
//}
*/

// 포인터 표현
