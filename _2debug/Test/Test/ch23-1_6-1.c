#include <stdio.h> 
typedef struct test {
	char a;
	int b;
	double c;
} TEST;
int main(void)
{
	TEST x;
	// sizeof(구조체변수): 단순히 멤버변수 크기의 합이 아님(컴파일러 최적화로 비트를 채워서)
	printf("크기: %d	\n", sizeof(x));
	return 0;
}