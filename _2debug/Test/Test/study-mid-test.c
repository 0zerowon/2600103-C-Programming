// 사전에서 앞에 나오는 문자는 아스키 코드 값이 작음
// 함수의 자료형: 함수자료형(매개변수자료형, 매개변수자료형)
// 함수명의 자료형: 함수자료형 (*)(매개변수자료형, 매개변수자료형)
// void 포인터는 강제형변환 후 간접 참조 연산

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

// 예제

//int main()
//{
//	int score[3][4];
//	int mean = 0, highst = 0, hIdx;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d: ", i + 1);
//		highst = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &score[i][j]);
//			highst += score[i][j];
//		}
//		if (mean < highst)
//		{
//			mean = highst;
//			hIdx = i + 1;
//		}
//	}
//	printf("%d, %d", hIdx, mean / 4);
//}
// 
//int main()
//{
//	int num = 20;
//	const int* ptr = &num;
//	//*ptr = 30; //컴파일 에러
//	num = 40; //정상
//}
//
//int main()
//{
//	int num1 = 20, num2 = 30;
//	const int* const ptr = &num1;
//	ptr = &num2; //컴파일 에러
//	*ptr = 40; //컴파일 에러
//}


// 포인터 표현

/*
int main()
{
	//{
	//	int arr[3] = { 1,2,3 };
	//	int* p = arr;
	//
	//	if (&arr[0] == arr + 0)
	//	{
	//		printf("arr + 0 == %p\n", arr + 0);
	//	}
	//	if (p[1] == *(arr + 1))
	//	{
	//		printf("p[1] == %d\n", *(arr + 1));
	//
	//	}
	//	//arr++;	// 배열의 주소는 상수여서 변수인 포인터에 할당하고 변경해야 함
	//	int i, n;
	//	int a = 10, b = 20, c = 30, d = 40, e = 50;
	//	int* pa[5] = { &a, &b, &c, &d, &e };	// 포인터 배열: 주소들을 갖는 배열
	//	n = sizeof(pa) / sizeof(pa[0]);			// 포인터 배열 원소 개수 계산: (8*5) / 8 = 5
	//	for (i = 0; i < n; i++)
	//	{
	//		printf("%d\n", *pa[i]);				// pa[i]는 주소: *(pa + i): 포인터 배열의 원소들은 주소들
	//		printf("%d\n", *(*(pa + i)));		// *pa[i]는 값: *(*(pa + i)): 포인터 배열의 원소들은 주소니까 그 주소의 변수 값
	//	}
	//}

	//{
	//	char* p = "hello, world";	// 컴파일러가 배열같은 임의의 문자열 묶음 만듬
	//	printf("%s\n", p);
	//	p = "goodbye, world";		// 가능: 또 문자열 묶음을 만들어서 첫 번째 문자 주소 할당
	//	printf("%s\n", p);
	//	//p[0] = 'G';				// 오류: *(p + 0)은 읽기만 가능하고 수정 불가
	//	printf("%c", p[0]);
	//}

	//{
	//	int arr[5][3] =
	//	{
	//		{0,1,1},
	//		{0,1,1},
	//		{0,1,1},
	//		{0,1,1},
	//		{0,1,1},
	//	};
	//
	//	for (int i = 0; i < 5; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("%5d", arr[i][j]);
	//			printf(" : %d", &arr[0][0] + 3 * i + j);		// i행 j열의 주소값: 주소값 + (3*i+j) * sizeof(int)
	//
	//		}
	//		printf("\n");
	//	}
	//}
}
*/


// 문자열 배열

//int main()
//{
//	char strs[3][10];
//
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%s", &strs[i][0]);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		// printf("%s\n", &strs[i][0]);
//		printf("%s\n", strs[i]);	// 서식 지정자 %s는 문자열의 시작 주소를 받음, 배열의 이름은 주소(strs[i]): 2차원 배열의 시작 주소는 i행 전체(1차원)
//	}
//}


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

/*
//void get_data(int* d, int len);
//int get_stat(int* d, int len, double* s);
//void put_stat(double* s, int h);
//
//int main()
//{
//	int data[6];
//	double stat[3];
//	int idx;
//
//	get_data(data, 6);
//	idx = get_stat(data, 6, stat);
//	put_stat(stat, idx);
//}
//
//void get_data(int* d, int len)
//{
//	printf("6일간의 방문자 수를 입력하시오.\n");
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", d + i);
//	}
//}
//
//int get_stat(int* d, int len, double* s)
//{
//	int min, max, hIdx = 0;
//	double mean = 0.0;
//
//	min = max = *(d + 0);
//
//	for (int i = 1; i < len; i++)
//	{
//		if (min > *(d + i))
//		{
//			min = *(d + i);
//		}
//		if (max < *(d + i))
//		{
//			max = *(d + i);
//			hIdx = i;
//		}
//		mean += *(d + i);
//	}
//	mean /= len;
//
//	*s = min;
//	*(s + 1) = max;
//	*(s + 2) = mean;
//
//	return hIdx + 1;
//}
//
//void put_stat(double* s, int h)
//{
//	printf("최소값은 %.0lf\n", s[0]);
//	printf("최대값은 %.0lf (%d번째 날)\n", s[1], h);
//	printf("평균은 %.2lf\n", s[2]);
//}

//int count_if(int* a, int len, int (*fP)(int));
//int is_even(int a);
//int is_neg(int a);
//int is_big(int a);
//
//int main()
//{
//	int arr[8] = { -3,4,7,-8,10,15,-2,6 };
//	int (*fp)(int) = is_even;
//
//	printf("짝수 개수: %d\n", count_if(arr, 8, fp));
//	fp = is_neg;
//	printf("음수 개수: %d\n", count_if(arr, 8, fp));
//	printf("10 이상 개수: %d\n", count_if(arr, 8, is_big));
//}
//
//int count_if(int* a, int len, int(*fP)(int))
//{
//	int cnt = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (fP(a[i]))
//		{
//			cnt++;
//		}
//
//	}
//
//	return cnt;
//}
//
//int is_even(int a)
//{
//	if (a % 2 == 0)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int is_neg(int a)
//{
//	if (a < 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//
//	}
//}
//
//int is_big(int a)
//{
//	if (a >= 10)
//	{
//		return 1;
//
//	}
//	else
//	{
//		return 0;
//	}
//}

//void print_str(char** pA, int len);
//char* get_last(char** pA, int len);
//int count_start(char** pA, int len, char s);
//
//int main(void)
//
//{
//	char* ptrarr[] = { "eagle", "tiger", "lion", "seal", "sheep", "squirrel" };
//	char* ptr;
//	int count = sizeof(ptrarr) / sizeof(ptrarr[0]);
//
//	print_str(ptrarr, count);
//	ptr = get_last(ptrarr, count);
//
//	printf("사전에서 가장 뒤에 나오는 단어: %s\n", ptr);
//	printf("s로 시작하는 단어의 개수:%d\n", count_start(ptrarr, count, 's'));
//
//	return 0;
//
//}
//
//void print_str(char** pA, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s\n", &pA[i][0]);
//	}
//}
//
//char* get_last(char** pA, int cnt)
//{
//	char* lastCh = pA[0];
//
//	for (int i = 1; i < cnt; i++)
//	{
//		if (*lastCh < *pA[i])
//		{
//			lastCh = pA[i];
//		}
//	}
//
//	return lastCh;
//}
//
//int count_start(char** pA, int len, char s)
//{
//	int cnt = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (*pA[i] == s)
//		{
//			cnt++;
//		}
//	}
//	return cnt;
//}

//int get_total(int* s, int row, int col, int* t);
//
//int main()
//{
//	int score[3][4];
//	int total[3];
//	int i, j, best;
//
//	for (i = 0; i < 3; i++)
//
//	{
//
//		printf("%d번 학생 4과목 점수: ", i + 1);
//
//		for (j = 0; j < 4; j++)
//
//			scanf("%d", &score[i][j]);
//
//	}
//
//	best = get_total(&score[0][0], 3, 4, total);
//
//	for (i = 0; i < 3; i++)
//
//		printf("%d번 학생 총점:%d 평균:%.1lf\n", i + 1, total[i], total[i] / 4.0);
//
//	printf("총점이 가장 높은 학생은 %d번입니다.\n", best + 1);
//
//	return 0;
//}
//
//int get_total(int* s, int row, int col, int* t)
//{
//	int best = 0;
//
//	for (int i = 0; i < row; i++)
//	{
//		t[i] = 0;
//		for (int j= 0; j < col; j++)
//		{
//			t[i] += *(s + col * i + j);
//		}
//		if (t[best] < t[i])
//		{
//			best = i;
//		}
//	}
//
//	return best;
//}
*/

//void get_str(char** p, int len);
//int get_strlen(char* p);
//
//int main()
//{
//	char str[3][50];
//	char* parr[3] = { &str[0][0],&str[1][0],&str[2][0] };
//	int i, cnt = 0;
//
//	get_str(parr, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		cnt = get_strlen(parr[i]);
//		printf("%d길이:%d\n", i + 1, cnt);
//	}
//}
//
//void get_str(char** p, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", i + 1);
//		scanf("%s", p[i]);
//	}
//}
//
//int get_strlen(char* p)
//{
//	int i;
//	for (i = 0; p[i] != '\0'; i++)
//	{
//
//	}
//	return i;
//}

//void prin(char** p, int c);
//char* get_fir(char** p, int c);
//
//int main()
//{
//	char* parr[] = { "ti","li","squ","ea" };
//	char* p;
//	int cnt = sizeof(parr) / sizeof(parr[0]);
//
//	prin(parr, cnt);
//	p = get_fir(parr, cnt);
//	printf(":%s\n", p);
//}
//
//void prin(char** p, int c)
//{
//	for (int i = 0; i < c; i++)
//	{
//		printf("%s\n", &p[i][0]);
//	}
//}
//
//char* get_fir(char** p, int c)
//{
//	char* f = p[0];
//	for (int i = 1; i < c; i++)
//	{
//		if (*f > *p[i])
//		{
//			f = p[i];
//		}
//	}
//	return f;
//}

//int big(int a, int b);
//int small(int a, int b);
//int get_val(int* a, int (*fp)(int, int));
//
//int main()
//{
//	int arr[4] = { 2,-1,10,3 };
//	int res;
//	
//	res = get_val(arr, big);
//	printf("최대값:%d\n", res);
//	res = get_val(arr, small);
//	printf("최소:%d", res);
//
//}
//
//int big(int a, int b)
//{
//	if (a > b)
//	{
//	return 0;
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
//int get_val(int* a, int(*fp)(int, int))
//{
//	int n = a[0];
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (fp(n, a[i]))
//		{
//			n=a[i];
//		}
//	}
//	return n;
//}

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
	printf("%d\n",len);
	for (int i = 0; i < len; i++)
	{
		scanf("%lf", &d[i]);
	}

}

void get_stat(double* d, int len, double* s)
{
	double min, max, mean = 0;

	min = max = d[0];
	for (int i = 0; i < len; i++)
	{
		if (min > d[i])
		{
			min = d[i];
		}
		if (max < d[i])
		{
			max = d[i];
		}
		mean += d[i];
	}

	s[0] = min;
	s[1] = max;
	s[2] = mean / len;
}

void put_stat(double* s)
{
		printf("%lf\n", s[0]);
		printf("%lf\n", s[1]);
		printf("%lf\n", s[2]);
}
