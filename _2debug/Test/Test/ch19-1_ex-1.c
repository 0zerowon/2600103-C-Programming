#include <stdio.h>
int sum(int a, int b);
int main(void)
{
	printf("%d\n", sum(10, 20)); //함수의 리턴값 출력
	printf("%p\n", sum); //함수명 출력: 함수명은 함수의 주소
	return 0;
}
int sum(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}